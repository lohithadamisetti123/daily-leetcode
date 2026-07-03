class Solution {
public:
    int maxArea(vector<int>& height) {
       int ans=0,area;
        int i=0;
        int j=height.size()-1;
        while(i<j){
           area=min(height[i],height[j])*(j-i);
           ans=max(ans,area);
           if(height[i]>height[j]){
               j--;
           }
           else{
               i++;
           }
        }
        return ans; 
    }
};