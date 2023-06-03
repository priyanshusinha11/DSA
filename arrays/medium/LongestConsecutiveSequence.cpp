#include <bits/stdc++.h>

using namespace std;
int longestConsecutive(vector<int> &nums)
{
  set<int> st;
  for (int num : nums)
  {
    st.insert(num);
  }

  int longestStreak = 0;

  for (int num : nums)
  {
    if (!st.count(num - 1))
    {
      int currentNum = num;
      int currentStreak = 1;

      while (st.count(currentNum + 1))
      {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}
int main()
{
  vector<int> arr{100, 200, 1, 2, 3, 4};
  int lon = longestConsecutive(arr);
  cout << "The longest consecutive sequence is " << lon << endl;
}