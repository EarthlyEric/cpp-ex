#include<iostream>
#include<stdlib.h>
#include<string>

//By EarthlyEric
//  2021/9/17  //
using namespace std;

int main(bool first){

	
	int a;
	int min = 0;
	int max = 100;
	int b = rand() % (max - min + 1) + min;


    printf("Please Enter Number:");    
	cin >> a;
		
	if(a > b){
		cout << "too big"<< endl;
		main(first = false);
	}
	
	if(a < b){
		cout << "too small"<< endl;
		main(first=false);
	}
	
	if(a == b){
		cout << "You Win."<< endl;
	}
		
	return 0;
}


