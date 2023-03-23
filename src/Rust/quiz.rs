use std::io;
use std::io::Write;

fn main() {
    let mut results: [bool; 3] = [false, false, false];
    let mut correct_answers: u8 = 0; 
    let mut total_answers: u8 = 0;
    results[0] = question("What is the Hottest planet on earth?", &["Venus", "Mars", "Juppiter"], 1);
    results[1] = question("Name of the modern anglo-saxon language?", &["Ænglic", "Anglish", "English"], 3);
    results[2] = question("Quantity of U.S. states in 2023?", &["13", "50", "48"], 2);

    for i in results {
        if i {
            correct_answers += 1;
        }
        total_answers += 1;
    }
    println!("Your score was: {}%", ((correct_answers as f32/total_answers as f32) * 100.0) as i8);
}

fn question(question: &str, answers: &[&str], correct_answer: u8) -> bool {
    let mut user_answer = String::new();

    println!("{}", question);
    for (i, v) in answers.iter().enumerate() {
        println!("{}. {v}", i+1);
    }
    print!("Input number: ");
    io::stdout().flush().unwrap();
    io::stdin().read_line(&mut user_answer).expect("Couldn't read line!");
    let user_answer: u8 = user_answer.trim().parse().expect("Input a valid number!");

    return user_answer == correct_answer;
}
