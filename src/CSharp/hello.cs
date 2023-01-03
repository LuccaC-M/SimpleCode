using System;

class Hello {
    public static int Main(string[] args) {
        if (args.Length < 1) { 
            Console.WriteLine("./{name of the executable} {Name}"); return 1;
        }
        Console.WriteLine("Hello, World!");
        Console.WriteLine("Hello, " + args[0]);
        return 0;
    }
}
