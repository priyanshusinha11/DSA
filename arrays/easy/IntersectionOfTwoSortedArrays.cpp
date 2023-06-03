#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionOfArrays(vector<int> A, vector<int> B)
{

  // Declare ans array.
  vector<int> ans;

  int i = 0, j = 0;

  // to traverse the arrays
  while (i < A.size() && j < B.size())
  {

    // if current element in i is smaller
    if (A[i] < B[j])
    {
      i++;
    }
    else if (B[j] < A[i])
    {
      j++;
    }
    else
    {

      // both elements are equal
      ans.push_back(A[i]);
      i++;
      j++;
    }
  }

  return ans;
}

int main()
{

  // Array Initialisation.
  vector<int> A{1, 2, 3, 3, 4, 5, 6, 7};
  vector<int> B{3, 3, 4, 4, 5, 8};

  vector<int> ans = intersectionOfArrays(A, B);

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }

  return 0;
}