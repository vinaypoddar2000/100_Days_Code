
void print(int n,vector<string>& ans){
	if(n==0)   return;
	ans.push_back("Coding Ninjas");
	print(n-1,ans);
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> ans;
	print(n, ans);
	return ans;
}