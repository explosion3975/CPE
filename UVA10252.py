while True:
    try:
        str1 = input()
        str2 = input()
        result_str = ""
        dict1 = {}
        dict2 = {}
        list1 = []
        for i in str1:
            if dict1.get(i,0) != 0:
                dict1[i] += 1
            else:
                dict1[i] = 1
        for i in str2:
            if dict2.get(i,0) != 0:
                dict2[i] += 1
            else:
                dict2[i] = 1
        for i in dict1:
            if dict2.get(i,0) != 0 and i != " ":
                list1.append(i * min(dict1[i],dict2[i]))
        list1.sort()
        for i in list1:
            result_str += i
        print(result_str)
    except EOFError:
        break