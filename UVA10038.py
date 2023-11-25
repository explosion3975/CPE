while True:
    try:
        list1 = input().split(" ")
        list1 = [int(i) for i in list1]
        total = list1[0]
        list1 = list1[1:]
        dict1 = {}
        flag = True
        for i in range(total - 1):
            num = abs(list1[i] - list1[i + 1])
            if(dict1.get(num,0) != 0 or num >= total or num == 0):
                print("Not jolly")
                flag = False
                break
            else:
                dict1[num] = 1
        if flag:
            print("Jolly")
    except EOFError:
        break
