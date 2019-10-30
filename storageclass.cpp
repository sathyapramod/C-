#include<iostream>
using namespace std;

void func(void);

static int count = 10; //global variable

main(){
	while(count--){
		func();
	}
	return 0;
}

void func(void){
	static int i = 5; //local variable
	i++;
	std::cout << "i is " << i ;
	std::cout << "and count is "<< count << std::endl;
}

