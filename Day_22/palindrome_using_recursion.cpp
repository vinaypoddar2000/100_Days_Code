bool fun(int i,string str){
    int n;
    n=str.length();
    if(i>=n/2)    return true;
    if(str[i]!=str[n-i-1])    return false;
    return fun(i+1,str);
}

bool isPalindrome(string& str) {
    // Write your code here.
    return fun(0,str);
}
