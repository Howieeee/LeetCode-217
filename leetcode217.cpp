class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1])
                return true;
        }
        return false;
//         set<int> n;
        
//         //n.insert(1);
//         for(int i=0;i<nums.size();i++)
//             n.insert(nums[i]);
        
//         if(n.size()!= nums.size())
//             return true;
        
//         return false;
    }
};
