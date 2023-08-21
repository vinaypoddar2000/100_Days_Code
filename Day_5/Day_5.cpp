#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here

	int sum=0;
	int count=0;
	int curr=n;
	int power;

	while(curr!=0){
		curr=curr/10;
		++count;
	}
	curr=n;

	while(curr>0){
		int ld;
		ld=curr%10;
		power=round(pow(ld,count));
		sum += power;
		curr=curr/10;

	}
	if(sum == n){
		return true;
	}
	else{
		return false;
	}

}

int main(){
	int n;
	cin>>n;
	cout<<checkArmstrong(n);
}
