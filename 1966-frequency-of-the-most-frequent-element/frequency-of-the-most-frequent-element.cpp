class Solution {
public:
    int maxFrequency(vector<int>& A, int k) {

        sort(begin(A), end(A));
        long i = 0, j = 0, N = A.size(), sum = 0;
        for (; j < N; ++j) {
            sum += A[j];
            if ((j - i + 1) * A[j] - sum > k) sum -= A[i++];
        }
        return j - i; 
    }
};