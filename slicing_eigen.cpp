#include <iostream>
#include <Eigen/Dense>
#include "print.h"

int main(){
	const int size = 10;
	Eigen::VectorXd A;
       	A = Eigen::VectorXd::Random(size);	
	
	//std::println("The vector A is {}", A);	
	std::println("Range-based for loop");
    	for (const auto& item : A) {
        	std::println("{}", item);
    	}
	//std::cout<<A<<std::endl;
	
	//Basic slicing in Eigen
	//defining indexes
	const int f_idx = 1;
	const int e_idx = 5;
	const int incr  = 2;
	Eigen::VectorXd B;
	B = A(Eigen::seq(f_idx,e_idx));
	std::println("This is basic slicing: ");
	for(const auto& elm : B){
		std::println("{}", elm);
	}


	std::cout<<B.size()<<std::endl;	
	
}
