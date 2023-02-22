def solution(my_string):
    char_remove = ['a','e','i','o','u']
    for char in char_remove:
        my_string = my_string.replace(char, '')
    return my_string