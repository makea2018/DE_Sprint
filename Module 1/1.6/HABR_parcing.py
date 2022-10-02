import requests
from bs4 import BeautifulSoup
import json
from selenium import webdriver
from time import sleep

# Создаем data для хранения спарсенных данных
data = {
    "data": []
}

# Подключаем Chrome
driver = webdriver.Chrome(executable_path='C:/Users/User/Desktop/chromedriver.exe')

# Проходимся по всем страницам
MaxPages = 50
count = 0
for page in range(1, MaxPages + 1):
    sleep(2.0)
    # Получаем адрес страницы со статьями и парсим ее, далее переходим на следующую
    main_url = "https://habr.com/ru/hub/health/"
    adding_url = f"page{page}/"
    driver.get(main_url + adding_url)
    soup = BeautifulSoup(driver.page_source, "lxml")

    # Парсим одну page
    # Парсим названия статей и ссылки на них
    habr_titles = soup.findAll('a', class_="tm-article-snippet__title-link")
    # Добавляем все названия статей и ссылки в список
    list_1 = []
    for i in habr_titles:
        link = f"https://habr.com{i['href']}"
        list_1.append((i.text ,link))

    # Открываем статью для парсинга инфы с нее
    for habr in range(0, len(list_1)):
        article_open = requests.get(list_1[habr][1])
        article_soup = BeautifulSoup(article_open.text, "lxml")

        # Парсим дату статьи, тэги и хабр тэги
        habr_data = article_soup.find('span', class_= "tm-article-snippet__datetime-published").find('time')['title'].split(",")[0]

        # Tags for Habr and Article
        habr_tags = article_soup.find_all('ul', attrs={"class": "tm-separated-list__list"})

        arr_1 = []
        arr_2 = []
        for ul in range(0, len(habr_tags)):
            for li in habr_tags[ul]:
                if ul == 0:
                    arr_1.append(li.text)
                else:
                    arr_2.append(li.text)
        arr_1 = list(map(lambda x: x.lower(), arr_1))
        arr_2 = list(map(lambda x: x.lower(), arr_2))
        habr_tags_toData = ",".join(arr_1)
        article_tags_toData = ",".join(arr_2)
        # Прибавляем к count
        count += 1
        # Добавляем данные в наш json
        data["data"].append({"Название": list_1[habr][0], "Habr || Теги": habr_tags_toData, "Статья || Теги": article_tags_toData, "Дата публикации": habr_data})
    print(f"Page {page} is ready")

# Сохраняем наш json файл       
with open("Habr_data.json", "w") as file:
    json.dump(data, file)

# Закрываем браузер
driver.quit()

# Выводим кол-во статей , которые спарсили        
print(count)