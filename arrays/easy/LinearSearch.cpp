#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int element)
{

  for (int i = 0; i < n; i++)
  {

    if (arr[i] == element)
    {

      // Return index, if the given element
      // matches with any element of array.
      return i;
    }
  }

  // If the given number not found.
  return -1;
}
int main()
{

  // Let size of array be 5 and element
  // to be searched for be 7.
  int n = 5, element = 7;
  int arr[n] = {1, 3, 5, 7, 8};
  cout << LinearSearch(arr, n, element);

  return 0;
}