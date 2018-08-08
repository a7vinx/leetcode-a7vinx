class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int left = 0;
        int right = A.size() - 1;
        int i = right / 2;
        while (left <= right) {
            if (A[i - 1] > A[i])
                right = i - 1;
            else if (A[i] < A[i + 1])
                left = i + 1;
            else
                return i;
            i = (left + right) / 2;
        }
        return 0;
    }
};
