#include <iostream> 
using namespace std;
int addition(int a, int b) {
	return a+b ;
}
int main (){
int x , y ;
	cout << " Enter the first number ";
	cin>> x ;
	cout << " Enter the 2nd number ";
	cin>> y ;
	cout << addition(x,y) ;
}