class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> mp;
        int ans = -1;

        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            if(i->second == 1)
            {
                ans = i->first;
            }
        }

        return ans;


    }
};