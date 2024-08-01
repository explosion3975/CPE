while True:
    try:
        num = input()
        if(num == "0"):
            break
        print(num,end = "")
        if(len(num) % 2 != 0):
            num += "0"
        result = 0
        for i in range(0,len(num),2):
            result += int(num[i])
            result -= int(num[i + 1])
        if(result % 11 == 0):
            print(" is a multiple of 11.")
        else:
            print(" is not a multiple of 11.")
    except EOFError:
        break
    