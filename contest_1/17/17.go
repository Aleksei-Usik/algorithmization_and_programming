package main

import "fmt"

func main() {
	var n, d, i, max, max_i, max_temp, water int64
	fmt.Scan(&n)
	arr := []int64{}
	for i = 0; i < n; i++ {
		fmt.Scan(&d)
		if max < d {
			max = d
			max_i = i
		}
		arr = append(arr, d)
	}
	water = 0
	max_temp = 0
	for i = 0; i < max_i; i++ {
		if arr[i] > max_temp {
			max_temp = arr[i]
		}
		water += max_temp - arr[i]
	}
	max_temp = 0
	for i = n - 1; i > max_i; i-- {
		if arr[i] > max_temp {
			max_temp = arr[i]
		}
		water += max_temp - arr[i]
	}
	fmt.Print(water)
}
