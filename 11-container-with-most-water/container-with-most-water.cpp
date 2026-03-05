class Solution {
public:
    int maxArea(vector<int>& height) {
        int st=0,end=height.size()-1;;
        int maxA=0;

        while(st<end){
            int width=end-st;
            int ht=min(height[st],height[end]);
            int area = width*ht;
            maxA=max(maxA,area);
            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }
        }

        return maxA;
        
    }
};