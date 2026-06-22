#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>nums)
{
    int freq=0, ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans== nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}
int main() {
    int arr[] = {5,6,4,6,6,6,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    int result = majorityElement(v);
    
    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }
    
    return 0;
}