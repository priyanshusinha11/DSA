#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{

  if (n == 0)
    return;

  // Get the effective number of rotations:
  d = d % n;

  // step 1:
  reverse(arr, arr + d);

  // step 2:
  reverse(arr + d, arr + n);

  // step 3:
  reverse(arr, arr + n);
}

int main()
{
  int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int d = 3;

  cout << "Before rotation:" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;

  leftRotate(arr, n, d);
  cout << "After rotation:" << endl;
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}