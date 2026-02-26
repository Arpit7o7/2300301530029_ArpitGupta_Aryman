#include<vector>
using namespace std; 
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int l=0; int r=arr.size()-1; int mid; int ans=-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(arr[mid]==x){
                ans = mid;
                l=mid+1;
            }
            else if(arr[mid]<x){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};