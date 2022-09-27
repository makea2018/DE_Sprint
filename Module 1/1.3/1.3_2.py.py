def pollindrom(word: str):
    word = str(word).replace(' ', '')
    return True if word[::] == word[::-1] else False

# Проверка
result = pollindrom('black cat')
print(result)