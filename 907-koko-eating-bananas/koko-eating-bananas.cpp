class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {      
        
    int n = piles.size();  
    long long s = 1, e = (long long)1e9;
   
    int ans = -1;

    while(s <= e) {

        long long mid = (s + e) >> 1;     
        long long cnt = 0;

        for(int i = 0; i < n; ++i) {
            int p = piles[i];
            
           
            cnt += (p + mid - 1) / mid;
        }
        
        if(cnt <= h) {
           
            ans = mid;
            e = mid - 1;
        }
        else {
            
            s = mid + 1;
        }
    }
    
    return ans;
    }
};