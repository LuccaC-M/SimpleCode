#!/usr/bin/env python3

def pow(x, y):
    tempx = x
    for i in range(0,y):
        result = x * tempx
    return result

iNum1 = int(input("Input first number: "))
iNum2 = int(input("Input second number: "))

cOperator = input("Choose the operator \n + \n - \n * \n ^ \n / \n > ")

match cOperator:
    case "+":
        print("result:",iNum1 + iNum2)
    case "-":
        print("result:",iNum1 + iNum2)
    case "*":
        print("result:", iNum1 * iNum2)
    case "/":
        print("result:", iNum1 / iNum2)
    case "^":
        print("result:", pow(iNum1, iNum2))
