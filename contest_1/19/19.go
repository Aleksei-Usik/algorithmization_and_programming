package main

import (
	"fmt"
	"sort"
)

func main() {
	var str string
	arr := make(map[string]int)
	for str = " "; str != "end"; {
		fmt.Scan(&str)
		arr[str]++
	}
	keys := make([]string, 0, len(arr))
	for k := range arr {
		keys = append(keys, k)
	}
	sort.Strings(keys)
	for _, k := range keys {
	    if arr[k]>1{
		    fmt.Printf("%s ",k)}
	}
}
