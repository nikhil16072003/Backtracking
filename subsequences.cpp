//print all the subsequences
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(vector<vector<int>>&ans,vector<int>&nums,int i,int j,vector<int>&temp){
    if(i>j){
         ans.push_back(temp);
         return;
    }
    temp.push_back(nums[i]);
    solve(ans,nums,i+1,j,temp);
    temp.pop_back();
    solve(ans,nums,i+1,j,temp);
   
}
int main() {
    int n;
    vector<int>nums;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    vector<int>temp;
    vector<vector<int>>ans;
    solve(ans,nums,0,n-1,temp);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
