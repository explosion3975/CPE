total = int(input())
dict1 = dict()
for i in range(total):
    input_data = input().split(" ")
    if(dict1.get(input_data[0],0) != 0):
        dict1[input_data[0]] += 1
    else:
        dict1[input_data[0]] = 1
list1 = list(dict1.items())
for i in range(len(list1) - 1,0,-1):
    for ii in range(0,i):
        if(list1[ii][0][0] > list1[ii + 1][0][0]):
            tmp = list1[ii]
            list1[ii] = list1[ii + 1]
            list1[ii + 1] = tmp
for i in list1:
    print(i[0],i[1])