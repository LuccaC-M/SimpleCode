package main

import (
	"fmt"
)

func main(){

	// VARIABLES
	var iNum1 int
	var iNum2 int
	var cOperator string

	// Getting the input
	fmt.Print("Input first number > ")
	fmt.Scan(&iNum1)
	fmt.Print("Input second number > ")
	fmt.Scan(&iNum2)
	fmt.Print("Input a valid operator \n + \n - \n * \n / \n % \n > ")
	fmt.Scan(&cOperator)

	// Doing the operations
	switch cOperator {
	case "+":
		fmt.Println("result:", iNum1 + iNum2)
	case "-":
		fmt.Println("result:", iNum1 - iNum2)
	case "*":
		fmt.Println("result:", iNum1 * iNum2)
	case "/":
		fmt.Println("result:", iNum1 / iNum2)
	case "%":
		fmt.Println("result:", iNum1 % iNum2)
	default:
		fmt.Println("ERROR")
	}
}
