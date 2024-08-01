class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size()-1;
        int maj = n/2;
        if(n==0){
            return nums[0];
        }
        //cout<<"maj:"<<maj<<endl;
        int count =0;
        sort(nums.begin(),nums.end());
        for(int i =1;i<=n;i++){
            if(nums[i]==nums[i-1]){
                count++;
                 if(count >= maj){
                    return nums[i-1];
                }
                //cout<<count<<endl;
            }
            else{
                if(count >= maj){
                    return nums[i-1];
                }
                else{
                    count =0;
                }
            }

        }
        return -1;
    }
};
