class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int peak =0;
        int j=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>peak){
                peak=arr[i];
                j=i;
            }
        }
        return j;
    }
};