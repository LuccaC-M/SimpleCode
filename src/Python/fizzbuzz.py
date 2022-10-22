MAX = 1000

iNum = int(input("Input the maximum number > "))

if iNum > MAX:
    print("\033[91m ERROR \033[00m")
    exit(1)
else:
    for i in range(0,iNum):
        n = i+1
        if (n % 3 == 0 and n % 5 == 0):
            print("fizzbuzz")
        elif (n % 3 == 0):
            print("fizz")
        elif (n % 5 == 0):
            print("buzz")
        else:
            print(n)
