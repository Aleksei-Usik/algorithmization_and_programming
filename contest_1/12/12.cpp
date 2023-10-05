package main
import "fmt"

func main() {
    var x,count int64
    fmt.Scan(&x)
    for x!=1{
        if x%2==0{
            x/=2
            count+=1
        }else{
            x=3*x+1
            count+=1
        }
    }
    fmt.Print(count)
}
