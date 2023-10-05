package main

import (
	"fmt"
	"sort"
)

func main() {
	var num1, num2 int
	var fl bool
	fmt.Scan(&num1, &num2)
	ar1 := []int{}
	ar2 := []int{}
	for i := num1; i != 0; i /= 10 {
		ar1 = append(ar1, i%10)
	}
	sort.Ints(ar1)
	for i := num2; i != 0; i /= 10 {
		ar2 = append(ar2, i%10)
	}
	sort.Ints(ar2)
	if len(ar1) == len(ar2) {
		fl = true
		for i := 0; i < len(ar1) && fl; i++ {
			if ar1[i] != ar2[i] {
				fmt.Print("No")
				fl = false
			}
		}
		if fl {
			fmt.Print("Yes")
		}
	} else {
		fmt.Print("No")
	}
}
