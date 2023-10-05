package main

import (
	"fmt"
	"math"
)

func main() {
	var top, dub int8
	var chel float64
	chel = 0.5 * 365
	top = int8(math.Ceil(chel / 32))
	dub = int8(math.Ceil(chel / 20))
	fmt.Print(chel, top, dub)

}
