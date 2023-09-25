vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    int d = k%n;
    
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d;i<n;i++){
        arr[i] = temp[i - (n-d)];
    }
    return arr;

}
