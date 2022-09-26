# Parcing hh.ru, using Selenium library
from types import NoneType
from selenium import webdriver
from selenium.webdriver.common.by import By
from bs4 import BeautifulSoup
from time import sleep
import json

driver = webdriver.Chrome('C:/Users/User/Desktop/chromedriver.exe')

for i in range(0, (2 + 1)):
    if i == 0:
        url = 'https://hh.ru/search/vacancy?no_magic=true&L_save_area=true&text=python+%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%87%D0%B8%D0%BA&search_field=name&area=113&salary=&currency_code=RUR&experience=doesNotMatter&order_by=relevance&search_period=0&items_on_page=50'
        driver.get(url)
        soup = BeautifulSoup(driver.page_source, 'lxml')
        vacancies = soup.find_all('div', class_='vacancy-serp-item__layout') 
    
    else:
        # Переходим на новую страницу
        url = f'https://hh.ru/search/vacancy?no_magic=true&L_save_area=true&text=python+%D1%80%D0%B0%D0%B7%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%87%D0%B8%D0%BA&search_field=name&area=113&salary=&currency_code=RUR&experience=doesNotMatter&order_by=relevance&search_period=0&items_on_page=50&page={i}&hhtmFrom=vacancy_search_list'
        driver.get(url)
        soup = BeautifulSoup(driver.page_source, 'lxml')
        vacancies = soup.find_all('div', class_='vacancy-serp-item__layout')
    
    # Повторяем цикл для вывода основной инфы со страницы
    for vac in range(0, (len(vacancies)-48)):
        sleep(1.0)
        vac_title = vacancies[vac].find('a', class_='serp-item__title')
        vac_salary = vacancies[vac].find('span', attrs= {'data-qa': 'vacancy-serp__vacancy-compensation'})
        if type(vac_salary) == NoneType:
            vac_salary = 'Зарплата не указана'
            print(vac_title.text)
            print(vac_salary)
        else:
            print(vac_title.text)
            print(vac_salary.text)
    print('-----------------------------------------------------')

driver.quit()
