line_num = int(input())
dict1 = dict()
for i in range(line_num):
    line = input().upper()
    for ii in line:
        if ("A" <= ii and ii <= "Z"):
            if dict1.get(ii, 0) != 0:
                dict1[ii] += 1
            else:
                dict1[ii] = 1
list1 = list(dict1.items())
for i in range(len(list1) - 1, 0, -1):
    for ii in range(i):
        if (list1[ii][1] < list1[ii + 1][1]):
            tmp = list1[ii]
            list1[ii] = list1[ii + 1]
            list1[ii + 1] = tmp
        elif (list1[ii][1] == list1[ii + 1][1] and list1[ii][0] > list1[ii + 1][0]):
            tmp = list1[ii]
            list1[ii] = list1[ii + 1]
            list1[ii + 1] = tmp
for i in list1:
    print(i[0].upper(), i[1])