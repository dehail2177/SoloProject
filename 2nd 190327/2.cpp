#include<iostream>
using namespace std;
int Add (int a, int b){
	return a+b;
}
double Add (double a, double b){
	return a+b;
}
int main(){
	cout << Add(2 , 3) << '\n';
	cout << Add(2.2 , 3.3) << '\n';
	return 0;
}
