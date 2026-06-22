#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a value=";
    cin >> n;
    int arr[n];
    cout << "Enter a elemets=";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter a target=";
    cin >> target;
    vector<int> nums(arr, arr + n);
    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}
