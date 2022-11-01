package main

import (
	"fmt"
)

const MAX = 1000000

func check_factor (x int, y int)bool {
	if (y == 1) {
		return true
	} else if (x % y == 0) {
		return true
	} else { return false }
}
func main(){

	var iMax int

	fmt.Print("Input number > ")
	fmt.Scan(&iMax)

	if (iMax <= MAX) {
		for i := 1; i <= iMax; i++ {
			if (check_factor(i,3) && check_factor(i,5)) {
				fmt.Println("FizzBuzz")
			} else if (check_factor(i,3)) {
				fmt.Println("Fizz")
			} else if (check_factor(i,5)) {
				fmt.Println("Buzz")
			} else {
				fmt.Println(i)
			}
		}
	} else {fmt.Println("ERROR: INVALID NUMBER")}
}
