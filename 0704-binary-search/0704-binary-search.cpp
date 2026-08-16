class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0;
        int r = n-1;
        while (l<=r){
            int mid = l+ (r-l)/2 ;
            if (target == arr[mid])
            return mid;
            else if (target < arr[mid])
            r = mid - 1;
            else 
            l = mid+1;
        }
        return -1;
    }
};