package main
// HELLO
import (
	"fmt"
    "github.com/guptarohit/asciigraph"
)

func main() {
    data := []float64{}

    for i := 0; i < 10; i++ {
        data = append(data, float64(i+1))
    }
    graph := asciigraph.Plot(data, asciigraph.SeriesColors(asciigraph.Red))

    fmt.Println(graph)
}
