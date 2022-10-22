package main

import (
	"fmt"
)

func main() {

	var sName string

	fmt.Print("Hello, What is your name? > ")
	fmt.Scan(&sName)
	fmt.Println("Hello,", sName)
 }
