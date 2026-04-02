class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int,int>  mp;
        for(int i=0;i<nums2.size();i++){
            while(!s.empty()&&nums2[s.top()]<nums2[i]){
                mp[nums2[s.top()]]=nums2[i];
                s.pop();
            }
            s.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;  
    }
};