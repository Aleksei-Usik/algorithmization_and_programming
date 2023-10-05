package main

import "fmt"

func printline(header int, numbers []int, elems int) {
	fmt.Printf("  %2d|", header)
	for _, elem := range numbers {
		fmt.Printf("%4d", elem*elems)
	}
}

func main() {
	var row, col int
	fmt.Scan(&col, &row)

	ROW := []int{}
	for i := 1; i <= row; i++ {
		ROW = append(ROW, i)
	}
	COL := []int{}
	for i := 1; i <= col; i++ {
		COL = append(COL, i)
	}
	fmt.Printf("  %3s", "|")
	for _, elem := range ROW {
		fmt.Printf("%4d", elem)
	}
	fmt.Print("\n")
	fmt.Print("   --")
	for i := 0; i < row; i++ {
		fmt.Print("----")
	}
	fmt.Print("\n")

	for i, elems := range COL {
		printline(i+1, ROW, elems)
		fmt.Print("\n")
	}
}
