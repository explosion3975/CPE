total = int(input())
for i in range(total):
    list1 = input().split(" ")
    player_num = int(list1[0])
    probablity = float(list1[1])
    winner = int(list1[2])
    if(probablity > 0):
        answer = (((1 - probablity) ** (winner - 1)) * probablity) / (1 - ((1 - probablity) ** player_num))
        print("{:4f}".format(answer))    
    else:
        print("0.0000")
