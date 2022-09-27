dict = {10000: 'X̅',9000: 'I̅X̅',8000: 'V̅I̅I̅I̅',7000: 'V̅I̅I̅',6000: 'V̅M',5000: 'V̅',4000: 'MV̅',1000: 'M', 900: 'CM', 500: 'D', 400: 'CD', 100: 'C', 90: 'XC', 50: 'L', 40: 'XL', 10: 'X', 9: 'IX', 5: 'V', 4: 'IV', 1: 'I'}


def numIntoRoman(num: int):
    numberRoman = ''
    for i in dict:
        while num >= i:
            numberRoman += dict[i]
            num -= i
    return numberRoman

# Проверка (Можно ввести от 1 до 10000)

result = numIntoRoman(356)
print(result)