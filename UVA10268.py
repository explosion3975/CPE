while True:
    try:
        answer = 0
        constant = int(input())
        list1 = [int(i) for i in input().split(" ")]
        length = len(list1) - 1
        for i in range(len(list1)):
            answer += length * list1[i] * (constant ** (length - 1))
            length -= 1
        print(int(answer))
    except EOFError:
        break