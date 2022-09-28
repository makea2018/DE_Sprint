def staples(string: str):
    ar_1 = []
    ar_2 = []
    ar_3 = []

    for elem in string:
        if elem == '{' or elem == '}':
            ar_1.append(elem)
        elif elem == '(' or elem == ')':
            ar_2.append(elem)
        elif elem == '[' or elem == ']':
            ar_3.append(elem)
        else: 
            continue

    if len(ar_1) % 2 == 0 and len(ar_2) % 2 == 0 and len(ar_3) % 2 == 0:
        return True
    else:
        return False  

# Вызываем функцию
result = staples("{]}]}(){[[}{}{")
print(result)