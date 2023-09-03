void fun(int x, vector<int>& ans){
    if(x==0)     return;

    ans.push_back(x);
    fun(x-1,ans);

}
vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    fun(x, ans);
    return ans;
}
