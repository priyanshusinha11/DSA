#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums, int n)
{

  int xor1 = 0, xor2 = 0;

  for (int i = 0; i < n - 1; i++)
  {
    xor2 = xor2 ^ nums[i];    // XOR of array elements
    xor1 = xor1 ^ (i + 1); // XOR up to [1...n-1]
  }
  xor1 = xor1 ^ n; // XOR up to [1...n]

  return (xor1 ^ xor2); // the missing number
}

int main()
{
  int n = 3;
  vector<int> nums = {3,0,1};
  int ans = missingNumber(nums, n);
  cout << "The missing number is: " << ans << endl;
  return 0;
}