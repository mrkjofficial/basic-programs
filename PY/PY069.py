# 69. Program to remove adjacent duplicate characters from a string

def remove(str):
    sbr = str
    i = 0
    while i < len(sbr) - 1:
        if sbr[i] == sbr[i + 1]:
            sbr = sbr[:i] + sbr[i + 1:]
            i -= 1
        i += 1
    return sbr

str = input("Enter a String: ")
print("String with unique adjacent characters: ", remove(str))