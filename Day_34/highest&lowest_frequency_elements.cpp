vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    int n = v.size();

    unordered_map<int, int>freq;

    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    int maxfreq = 0,minfreq = n;
    int maxelement = 0, minelement = (int)1e9 + 1;
    
    for(auto it : freq){
        int count = it.second;
        int element = it.first;

        if(count>maxfreq){
            maxelement = element;
            maxfreq = count;
        }
        else if(count == maxfreq){
            maxelement = min(maxelement, element);
        }

        if(count<minfreq){
            minelement = element;
            minfreq = count;

        }
        else if(count == minfreq){
            minelement = min(minelement,element);
        }

    }

    vector<int> ans = {maxelement, minelement};
    return ans;
}