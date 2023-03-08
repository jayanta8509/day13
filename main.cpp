// Write a program to find Sum of N natural numbers
#include <iostream>
using namespace std;
void find_sum(int a) {
  int ok = 0;
  for (int i = 1; i <= a; i++) {
    ok = ok + i;
  }
  cout << ok;
}

int main() {
  int k = 4;
  find_sum(k);
}