use std::io::{self, BufRead};

fn is_prime(n: u64) -> bool {
	if n < 2 {
		return false;
	}
	if n == 2 {
		return true;
	}
	if n % 2 == 0 {
		return false;
	}
	let sqrt_n = (n as f64).sqrt() as u64;
	for i in (3..=sqrt_n).step_by(2) {
		if n % i == 0 {
			return false;
		}
	}
	true
}

fn next_prime(n: u64) -> u64 {
	let mut num = n;
	while !is_prime(num) {
		num += 1;
	}
	num
}

fn main() {
	let stdin = io::stdin();
	let mut lines = stdin.lock().lines();

	let t: u32 = lines.next().unwrap().unwrap().parse().unwrap();
	for _ in 0..t {
		let n: u64 = lines.next().unwrap().unwrap().parse().unwrap();
		println!("{}", next_prime(n));
	}
}
