#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int even=0, odd=0;
	while(n>0){
		int a=n%10;
		if(a%2==0){
			even += a;	
		}
		else{
			odd +=a;	
		}
		n=n/10;  
	}
	cout<<even<<" "<<odd;
}
