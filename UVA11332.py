while True:
    num = input()
    if num == "0":
        break
    tmp_num = 0
    while(len(num) > 1):
        tmp_num = 0
        for i in num:
            tmp_num += int(i)
        # print(tmp_num)
        num = str(tmp_num)
    print(num)