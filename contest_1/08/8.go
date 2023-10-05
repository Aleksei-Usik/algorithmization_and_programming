package main

import (
	"fmt"
)

func main() {
	var a, b, c, temp int32
	fmt.Scan(&a, &b, &c)
	if a > b {
		temp = a
	} else {
		temp = b
	}
	if temp > c {
		fmt.Print(temp)
	} else {
		fmt.Print(c)
	}
}
