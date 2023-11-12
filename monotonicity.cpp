#include "print.h"
#include <ranges>
#include <vector>

using namespace std;
//function decelaration
bool is_strictly_increasing(const vector<int>& sequence);


int main(){
//checking on 2 sequences wheather they are strictly incresing or not

	const vector<int> vec_primes = {2,3,5,7,11,13,17,19,23,29};
	print("Prime squence is ");
	if(!is_strictly_increasing(vec_primes)) print("not ");
	println("Strictly increasing. ");

}

//function definition
bool is_strictly_increasing(const vector<int>& sequence){
	for(auto i : views::iota(1u, sequence.size()))
		if(sequence.at(i-1)>=sequence.at(i))
			return false;
	return true;
}

