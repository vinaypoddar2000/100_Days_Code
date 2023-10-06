#include <unordered_map>
int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
	unordered_map<int,int> freq;

	for(int i=0;i<n;i++){
		freq[v[i]] = 1;
	}

	for(int i = 0; i < n;i++){
		freq[v[i]] +=1;
	}
	int maxi = 0;
	int output = 0;
	for(int i=0;i<n;i++){
		
		if(maxi< freq[v[i]]){
			maxi = freq[v[i]];
			output = v[i];
		}
		
	}
	if(maxi > n/2){
		return output;
	}




}