use std::io;
use std::io::Write;

fn main() {
    let mut number = String::new();
    print!("Select a number from 1-65,535 > ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut number).expect("Couldn't read line");
    let number: u16 = number.trim().parse().expect("Input a valid number");

    for i in 1..=number {
        if i % 3 == 0 && i % 5 == 0 {
            println!("fizzbuzz");
        } else if i % 3 == 0 {
            println!("fizz");
        } else if i % 5 == 0 {
            println!("buzz");
        } else {
            println!("{i}");
        }
    }
}
