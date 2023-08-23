#include <bits/stdc++.h>

bool isPrime(int n)
{
	// Write your code here.
	int flag=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			flag++;
			if((n/i)!=i){
				flag++;
			}
		}
	}
	if(flag==2){
		return true;
	}
	else{
		return false;
	}
}

int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
}
