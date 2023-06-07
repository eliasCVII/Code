// Variables
//fn main() {
//    let mut x = 5;
//    println!("X value is {}", x);
//    x = 6;
//    println!("X value: {}", x);
//    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;
//    println!("const: {}", THREE_HOURS_IN_SECONDS);
//    const NIGGAS_DEAD: u32 = 9 + 10;
//    println!("const: {}", NIGGAS_DEAD);
//    const BRUH: usize = 21;
//    println!("what: {}", BRUH);
//}

// Shadowing

fn main() {
    let x = 5;
    let x = x + 1;

    {
        let x = x * 2;
        println!("X is {}", x);
    }

    println!("X is {}", x);

    // let spaces = "  ";
    // let spaces = spaces.len();

    const THREE_HOURS_IN_SECONDS: u32 = 60 * 60 * 3;

    println!("how much is 3 hours in seconds?: {THREE_HOURS_IN_SECONDS}")
}
