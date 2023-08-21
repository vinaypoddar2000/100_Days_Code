#include <bits/stdc++.h>

int countDigits(int n){
	// Write your code here.
		
	int curr=n,count=0;
	while(curr>0){
		int lastdigit;
		lastdigit = curr % 10;
		if(lastdigit != 0){
			count += (n%lastdigit) == 0;
		}
		
		curr=curr/10;
	}
	return count;
	
}

int main(){
    int n;
    cin>>n;
    
    count>>countDigits(n);
}