// A stupid guessing game
use rand::Rng;
use std::cmp::Ordering;
use std::io; // Call the io library from the standard library

fn main() {
    println!("Guess the number");

    let secret_number = rand::thread_rng().gen_range(1..=100);

    // println!("The secret number is {secret_number}");

    loop {
        println!("Please input your choice");

        let mut guess = String::new();

        io::stdin()
            .read_line(&mut guess)
            .expect("Failed to read line");

        let guess: u32 = match guess.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        println!("You guessed: {guess}");

        match guess.cmp(&secret_number) {
            Ordering::Less => println!("Too small of a guess"),
            Ordering::Greater => println!("Too big of a guess"),
            Ordering::Equal => {
                println!("You guessed it!");
                break;
            }
        }
    }
}
