def convert(str_in):
    str1 = "qwertyuiop[]"
    str2 = "asdfghjkl;'"
    str3 = "zxcvbnm,./"
    if str_in == " ":
        return " "
    elif str_in in str1:
        return str1[str1.index(str_in) - 2]
    elif str_in in str2:
        return str2[str2.index(str_in) - 2]
    elif str_in in str3:
        return str3[str3.index(str_in) - 2]
    
while True:
    try:
        line = input()
        for i in line:
            print(convert(i.lower()),end = "")
        print()
    except EOFError:
        break