use std::io; // brings input/output library

fn main() {
    println!("Number guessing game!");

    println!("Input your guess: ");

    let mut guess = String::new(); // create a variable called guess with "let"
    // let apples = 5; // Another example of a variable called "apples" that is immutable

    io::stdin()
        .read_line(&mut guess) // Call read_line method to receive input and appends input to the guess string.
        .expect("Failed to read line"); // Error handler
    println!("You guessed: {}", guess);
}
