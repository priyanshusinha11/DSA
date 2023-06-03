#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> A)
{

  int n = A.size();

  // Define array for storing the ans separately.
  vector<int> ans(n, 0);

  // positive elements start from 0 and negative from 1.
  int posIndex = 0, negIndex = 1;
  for (int i = 0; i < n; i++)
  {

    // Fill negative elements in odd indices and inc by 2.
    if (A[i] < 0)
    {
      ans[negIndex] = A[i];
      negIndex += 2;
    }

    // Fill positive elements in even indices and inc by 2.
    else
    {
      ans[posIndex] = A[i];
      posIndex += 2;
    }
  }

  return ans;
}

int main()
{

  // Array Initialisation.

  vector<int> A = {1, 2, -4, -5};

  vector<int> ans = RearrangebySign(A);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}