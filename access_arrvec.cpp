#include <array>
#include "print.h"
#include <vector>

using namespace std;

int main(){

	array arr {1,2,3,4};
	vector vec {1,2,3,4};

//undefined behaviour here
	//arr[-6] = -6;
	arr.at(-6) = -6;

	println("arr.size()={}",arr.size());
	println("vec.size()={}",vec.size());

//Solution: either use at()--good method or compile with flag -O2 (optimization) okk but risky:
//-fsanitize=address -g(this is computationally costly)

}
