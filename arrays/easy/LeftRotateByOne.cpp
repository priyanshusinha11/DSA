#include <bits/stdc++.h>

using namespace std;
void solve(int arr[], int n)
{
  int temp = arr[0]; // storing the first element of array in a variable
  for (int i = 0; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp; // assigned the value of variable at the last index
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int n = 5;

  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, n);
}