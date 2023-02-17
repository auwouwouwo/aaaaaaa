use std::collections::VecDeque;

fn main(){
    println!("Rust ");
    
    let mut q:VecDeque<f64> = VecDeque::new();

    for _i in 0..10000000{
        q.push_back((2.0f64/3.0f64)*(_i as f64));
    }

    println!("total {}",q.len());
}

