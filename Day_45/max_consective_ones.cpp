int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int cnt = 0,ans = 0,right = 0;
	for(int left = 0;left<n;left++){
		while(right<n && cnt<=m){
			if(vehicle[right] == 0){
				cnt++;
				if(cnt>m){
					cnt--;
					break;
				}
			}
			right++;
		}
		ans = max(ans, right-left);
		if(vehicle[left] == 0){
			cnt--;
		}
	}
	return ans;
	
    
}

