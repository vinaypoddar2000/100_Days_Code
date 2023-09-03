void recursivefun(int x, vector<int>& ans){
    if(x==0)      return;
    recursivefun(x-1, ans);
    ans.push_back(x);

}


vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> ans;
    recursivefun(x, ans);

    return ans;
}
