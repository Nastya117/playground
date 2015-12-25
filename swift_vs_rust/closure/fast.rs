struct Curry<'a> {
    f: &'a Fn(i32, i32) -> i32,
    v1: i32
}

impl<'a> Curry<'a> {
    fn new<F: 'static>(f: &'a F, v1: i32) -> Curry<'a> where F: Fn(i32, i32) -> i32  {
        Curry { f: f, v1: v1 }
    }

    fn call(&'a self, v2: i32) -> i32 {
        (*self.f)(self.v1, v2)
    }
}

fn make_sum(x: i32, y: i32) -> i32
{
    x + y
}

fn main() {
    let a = 2; let b = 5;
    let c = make_sum(a, b);
    println!("Rust: c is {}", c);

    let borrow = &make_sum;
    let f2 = Curry::new(borrow, b);

    let mut tmp = 0;
    for i in 0..1000000000 {
        tmp = f2.call(i);
    }

    println!("Rust: tmp is {}", tmp);
}
