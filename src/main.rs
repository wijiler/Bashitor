use std::fs::File;
use std::io;
use std::io::Write;


fn line() -> io::Result<()> {
    let mut file = File::create("test.txt")?;
    let mut input = String::new();      
    /* read user code here*/
    println!("Enter Your code here : ");
    let output = io::stdin().read_line(&mut input).unwrap();
    write!(file, "{}", input)?;

    Ok(())
}

fn help() {
    println!("-h\n show this help screen\n -l\n print to your bashrc\n");
}

fn main() {
   if std::env::args().nth(1).as_deref() == Some("-l") {
       line();
   }else if std::env::args().nth(1).as_deref() == Some("-h") {
       help();
   }else {
       help();
   }

}
