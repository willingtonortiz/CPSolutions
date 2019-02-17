if __name__ == '__main__':

    arr = []

    for i in range(int(input())):
        name = input()
        score = float(input())
        arr.append([name, score])

    mini = 1000
    resp = 1000

    for i in range(len(arr)):
        if mini > arr[i][1]:
            mini = arr[i][1]

    for i in range(len(arr)):
        if resp > arr[i][1] and arr[i][1] > mini:
            resp = arr[i][1]

    names = []
    for i in range(len(arr)):
        if arr[i][1] == resp:
            names.append(arr[i][0])

    names.sort()

    for i in range(len(names)):
        print(names[i])
