# 71. Program to count vowels in a given string

def countVowels(str):
    count = 0
    str = str.upper()
    for i in range(len(str)):
        if str[i] == 'A' or str[i] == 'E' or str[i] == 'I' or str[i] == 'O' or str[i] == 'U':
            count += 1
    return count

str = input("Enter a String: ")
print("Number of Vowels: ", countVowels(str))