def bin_multiplication(bin1 : str, bin2 : str):
    # Переводим бинарные числа в десятичные
    bin1 = int(bin1, 2)
    bin2 = int(bin2, 2)
    result = bin(bin1*bin2)[2::]
    return result

# Вызов функции
check2 = bin_multiplication('11', '101')
check = bin_multiplication('111', '101')
print(check + '\n' + check2)