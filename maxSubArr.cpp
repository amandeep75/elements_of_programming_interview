/* Elements of Programming Interview
page 295
*/

#include <iostream>
#include <stdio.h>
#include <utility>
#include <vector>

using namespace std;

pair <int, int> FindMaximumSubarray(vector<int>& A)
{
  // A[range.first : range,second - 1] will be the MaximumSubarray
  pair<int, int> range(0, 0);

  int min_idx = -1, min_sum = 0, sum = 0, max_sum = 0;
  for(int i = 0; i < A.size(); ++i)
  {
    sum += A[i];
    if(sum < min_sum)
    {
      min_sum = sum, min_idx = i;
    }
    if(sum - min_sum > max_sum)
    {
      max_sum = sum - min_sum, range = make_pair(min_idx + 1, i + 1);
    }
  }

    return range;
}

int main()
{
  vector<int> A;
  A.push_back(4);
  A.push_back(5);
  A.push_back(-4);
  A.push_back(10);
  A.push_back(-100);
  A.push_back(8);
  A.push_back(-9);
  A.push_back(40);
  A.push_back(45);
  A.push_back(25);

  pair<int, int> result = FindMaximumSubarray(A);
  cout << result.first << " " << result.second;
}
