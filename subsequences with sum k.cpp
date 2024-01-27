//print all the subsequences
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<vector<int>>&ans,vector<int>&nums,int i,int j,vector<int>&temp,int k){
    if(i>j){
        if(k==0){
             ans.push_back(temp);
        }
        
         return;
    }
    if(nums[i]<=k){
         temp.push_back(nums[i]);
         solve(ans,nums,i+1,j,temp,k-nums[i]);
         temp.pop_back(); 
    }
   
    solve(ans,nums,i+1,j,temp,k);
   
}
int main() {
    int n;
    int k;
    
    vector<int>nums;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>temp;
    vector<vector<int>>ans;
    solve(ans,nums,0,n-1,temp,k);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
