#include <bits/stdc++.h>
using namespace std;

int findAllSubarraysWithGivenSum(int nums[], int k)
{
    map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0, cnt = 0;
    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        preSum += nums[i];
        int remove = preSum - k;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {3, 1, 2, 4};
    int k = 6;
    int cnt = findAllSubarraysWithGivenSum(arr.data(), k);
    cout << "The number of subarrays is: " << cnt << "\n";
    return 0;
}
