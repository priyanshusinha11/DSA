#include <bits/stdc++.h>

using namespace std;
void zerosToEnd(int nums[], int n)
{

  // finding first zero occurrence
  int k = 0;
  while (k < n)
  {
    if (nums[k] == 0)
    {

      break;
    }
    else
    {
      k = k + 1;
    }
  }

  // finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n)
  {
    if (nums[j] != 0)
    {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      i++;
    }

    j++;
  }
  for (i = 0; i < n; i++)
  {
    cout << nums[i] << " ";
  }
}

int main()
{
  int nums[] = {1, 2, 0, 1, 0, 4, 0};
  zerosToEnd(nums, 7);
}