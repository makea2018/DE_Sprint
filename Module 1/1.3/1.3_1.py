from types import NoneType
from selenium import webdriver
from time import sleep
from bs4 import BeautifulSoup

# Подключаем браузер Chrome
driver = webdriver.Chrome(executable_path= 'C:/Users/User/Desktop/chromedriver.exe')

# Считаем сколько страниц надо будет пройти
driver.get('https://hh.ru/search/vacancy?no_magic=true&L_save_area=true&text=python+%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%87%D0%B8%D0%BA&search_field=name&area=113&salary=&currency_code=RUR&experience=doesNotMatter&order_by=relevance&search_period=0&items_on_page=100')
soup = BeautifulSoup(driver.page_source, 'lxml')
Number_Pages = int(soup.find(attrs= {"data-qa": "pager-page"}).text)
#-----------------------------------------------------------------------

# Проходимся по всем страницам (так как на одной страницу только 100 вакансий)
Number_Pages = 3


for i in range(0, Number_Pages):
    if i == 0:
        driver.get('https://hh.ru/search/vacancy?no_magic=true&L_save_area=true&text=python+%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%87%D0%B8%D0%BA&search_field=name&area=113&salary=&currency_code=RUR&experience=doesNotMatter&order_by=relevance&search_period=0&items_on_page=100')
        soup = BeautifulSoup(driver.page_source, 'lxml')
        vacancies = soup.findAll(attrs= {"data-qa": "serp-item__title"})
    else:
        driver.get(f'https://hh.ru/search/vacancy?no_magic=true&L_save_area=true&text=python+%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%87%D0%B8%D0%BA&search_field=name&area=113&salary=&currency_code=RUR&experience=doesNotMatter&order_by=relevance&search_period=0&items_on_page=100&page={i}&hhtmFrom=vacancy_search_list')
        soup = BeautifulSoup(driver.page_source, 'lxml')
        vacancies = soup.findAll(attrs= {"data-qa": "serp-item__title"})
    
    
    Numbers_Vacancies = len(vacancies)-98
    print('\n') 
    for vac in range(0, Numbers_Vacancies):
        title_url = vacancies[vac].get("href")
        driver.get(title_url)
        soup = BeautifulSoup(driver.page_source, 'lxml')
        vac_title = soup.find(attrs= {"data-qa": "vacancy-title"})
        vac_salary = soup.find(attrs= {"data-qa": "vacancy-salary"})
        vac_experience = soup.find(attrs= {"data-qa": "vacancy-experience"})
        vac_place = soup.find(attrs= {"data-qa": "vacancy-view-location"})
        if type(vac_place) == NoneType:
            vac_place = soup.find(attrs= {"data-qa": "vacancy-view-raw-address"})
            if type(vac_place) == NoneType:
                vac_place = 'Не указано'
                print(vac_title.text, '\n', vac_salary.text,'\n', vac_experience.text,'\n', vac_place) 
            else:
                print(vac_title.text, '\n', vac_salary.text,'\n', vac_experience.text,'\n', vac_place.text)
        else:
            print(vac_title.text, '\n', vac_salary.text,'\n', vac_experience.text,'\n', vac_place.text)
        print('-----------------------------')
        


driver.quit()