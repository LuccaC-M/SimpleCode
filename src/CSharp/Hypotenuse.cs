using System;

public class Triangle {
    public double a = 0,b = 0,c = 0;
    public Triangle(double a) => this.a = a;

    public Triangle(double a, double b) {
        this.a = a;
        this.b = b;
    }
    public Triangle(double a, double b, double c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    public double CalcHypotenuse() {
        if (a == 0 || b == 0)
            return -1;
        c = Math.Sqrt((a*a) + (b*b));  
        return c;
    }
}

class Code {
    public static int Main() {
       Triangle triangle = new Triangle(3,4);
       triangle.CalcHypotenuse();
       Console.WriteLine(triangle.c);
       return 0;
    }
}
