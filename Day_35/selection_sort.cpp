void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();
    int i,j;
    for(i=0;i<=n-2;i++){
        int min = i;
        for(j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            
            }
        
        }
    
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    
    
}