use std::io; // brings input/output library
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    println!("Number guessing game!");

    let secret_number = rand::thread_rng().gen_range(1..5);

    // println!("The secret number is: {}", secret_number);

    loop{//begin loop

        println!("Input your guess: ");

        let mut guess = String::new(); // create a variable called guess with "let"
        // let apples = 5; // Another example of a variable called "apples" that is immutable
    
        io::stdin()
            .read_line(&mut guess) // Call read_line method to receive input and appends input to the guess string.
            .expect("Failed to read line"); // Error handler

        let guess: u32 = guess.trim().parse().expect("Please type a number");

        println!("You guessed: {}", guess);

        match guess.cmp(&secret_number){
            Ordering::Less => println!("Too small !"),
            Ordering::Greater => println!("Too big !"),
            Ordering::Equal => {
                println!("You got it!");
                break;    
            }
        }
    }
}
