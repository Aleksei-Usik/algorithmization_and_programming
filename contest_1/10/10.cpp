package main

import (
	"fmt"
)

func main() {
	var a, b, c string
	var x, y, z bool
	fmt.Scan(&a, &b, &c)
	if a == "Да" {
		x = true
	} else {
		x = false
	}
	if b == "Да" {
		y = true
	} else {
		y = false
	}
	if c == "Да" {
		z = true
	} else {
		z = false
	}
	if x {
		if y {
			if z {
				fmt.Print("Утка")
			} else {
				fmt.Print("Пингвин")
			}
		} else {
			if z {
				fmt.Print("Плезиозавры")
			} else {
				fmt.Print("Дельфин")
			}
		}
	} else {
		if y {
			if z {
				fmt.Print("Страус")
			} else {
				fmt.Print("Курица")
			}
		} else {
			if z {
				fmt.Print("Жираф")
			} else {
				fmt.Print("Кот")
			}
		}

	}

}
