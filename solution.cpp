class Solution {
    public:
    void rearrange(int arr[], int n) {
	    vector<int> pos, neg;
	    
    	for(int i = 0; i < n; i++) {
            if(arr[i] >= 0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        
        if(pos.size() == 0 || neg.size() == 0) return;
    
        int a = 0, b = 0, i = 0;
        
        for(i ; a < pos.size() && b < neg.size(); i++){
            if(i%2 == 0) arr[i] = pos[a++];
            else arr[i] = neg[b++];
        }
    
        while(a < pos.size()){
            arr[i] = pos[a++];
            i++;
        }
    
        while(b < neg.size()){
            arr[i] = neg[b++];
            i++;
        }
	}
};
