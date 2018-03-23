/*
Fibonacci with DP approach
*/

#include <stdio.h>
#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v(10);

  v[0] = 0;
  v[1] = 1;

  for(int i = 2; i < 10; i++)
  {
    v[i] =  v[i-1] + v[i-2];
  }

  for(int i = 0; i < 10; i++)
  {
    std::cout << v[i] << " ";
  }

}
