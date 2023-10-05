package main

import "fmt"

func main() {
	var n int
	var t, d float64
	fmt.Scan(&n)
	arr := []float64{}
	for i := 0; i < n; i++ {
		fmt.Scan(&d)
		arr = append(arr, d)
	}
	fmt.Printf("%.1f ", arr[0])
	for i := 1; i+1 < n; i++ {
		t = (arr[i-1] + arr[i] + arr[i+1]) / 3.0
		if t == float64(int64(t)) {
			fmt.Printf("%.1f ", t)
		} else {
			fmt.Printf("%g ", t)
		}
	}
	fmt.Printf("%.1f ", arr[n-1])
}
