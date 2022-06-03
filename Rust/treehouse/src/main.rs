use std::io::stdin;
fn what_is_your_name() -> String {

    let mut your_name = String::new();
    stdin()
        .read_line(&mut your_name)
        .expect("Failed to read line");

    your_name
        .trim()
        .to_ascii_lowercase()
}

// fn visitors_name() -> String {
//     let visitor_list = ["bert", "steve", "quandale"];
//     for visitor in &visitor_list {
//         if visitor == your_name {
//             println!("Welcome, {}", visitor)
//         }
// }

// fn main(){
//     println!("hi whats your name?: ");
//     let name = what_is_your_name();
//     println!("hello, {}", name);
//     }
// }
