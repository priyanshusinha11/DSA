#include <bits/stdc++.h>
using namespace std;

vector<int> printLeaders(int a[], int n)
{

  vector<int> ans;

  // Last element of an array is always a leader,
  // push into ans array.
  int max = a[n - 1];
  ans.push_back(a[n - 1]);

  // Start checking from the end whether a number is greater
  // than max no. from right, hence leader.
  for (int i = n - 2; i >= 0; i--)
    if (a[i] > max)
    {
      ans.push_back(a[i]);
      max = a[i];
    }

  return ans;
}

int main()
{

  // Array Initialization.
  int n = 6;
  int a[n] = {10, 22, 12, 3, 0, 6};

  vector<int> ans = printLeaders(a, n);

  for (int i = ans.size() - 1; i >= 0; i--)
  {

    cout << ans[i] << " ";
  }

  cout << endl;
  return 0;
}