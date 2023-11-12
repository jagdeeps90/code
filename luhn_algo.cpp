#include <iostream>
#include "print.h"
#include <ranges>
#include <string>
#include <vector>

using namespace std;

bool check_luhn(const vector<int>& credit_vec){
        print("Credit number is: ");
	for(auto elem : credit_vec)
		cout<<elem;
	
	println(" ");
	int sum = 0;
	auto view = credit_vec | views::reverse | views::drop(1); //here 1 means drop 1 digit 2 means 2 digit and so on..
	print("in reverse droping 1 digit: ");
	for (auto j : view)
		print("{}", j);
	println(" ");
	for (const auto [i, digit_] : views::enumerate(view)) {
	auto digit = digit_;
	if (i % 2 ==0)
		digit *=2;
	if (digit>9)
		digit-=9;
	sum += digit;
	}
	const int check_digit_calculated = (10-(sum%10)) %10;
	const int check_digit = credit_vec.back();
	println("last digit is {} ", check_digit);
	return check_digit_calculated == check_digit;
	
}

int main() {

	const vector  number {2,4,4,5,3,9,4,2,5,8,8,1,1,3,6,9};
	
	if(check_luhn(number))
		println("validation succeeded.");
	else
		println("validation failed. ");




}

