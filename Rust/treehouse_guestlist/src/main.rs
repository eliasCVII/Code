use std::io::stdin;

fn whats_name() {
    let mut your_name = String::new();
    stdin()
        .read_line(&mut your_name)
        .expect("Failed to read line");

        your_name
        .trim()
        .to_ascii_lowercase()
}

let visitor_list = ["bert", "steve", "quandale"];
let mut allow_them_in = false;

for visitor in &visitor_list {
    if visitor == &name {
    println!("Welcome, {}", visitor)
    } else {
        println!("Fuck")
    }
}
