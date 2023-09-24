int ssmallest(vector<int>a, int n){
    int fsmall = a[0];
    int ssmall = INT_MAX;

    for(int i=1;i<n;i++){
        if(a[i]<fsmall){
            ssmall = fsmall;
            fsmall = a[i];
            
        }
        else if(a[i] != fsmall && a[i]<ssmall){
            ssmall = a[i];
        }
    }
    return ssmall;

}

int slargest(vector<int>a, int n){
    int flarge = a[0];
    int slarge = -1;

    for(int i=1;i<n;i++){
        if(a[i]>flarge){
            slarge = flarge;
            flarge = a[i];
            
        }
        else if(a[i]!=flarge && a[i]>slarge){
            slarge = a[i];
        }
    }
    return slarge;

}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int smallest = ssmallest(a,n);
    int largest = slargest(a,n);
    return {largest,smallest};

}
