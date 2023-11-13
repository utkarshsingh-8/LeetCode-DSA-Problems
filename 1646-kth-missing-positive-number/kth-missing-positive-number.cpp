class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int n = arr.size();
        int start = 0, end = n - 1;

        while(start <= end)
        {
            int mid = start + (end - start)/2;

            int missing = arr[mid] - (mid + 1);

            if(missing < k)
            {
                start = mid + 1;
            }

            else
            {
                end = mid - 1;
            }
        }

        return start + k;       
        
    }
};