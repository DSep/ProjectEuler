#include <iostream>
using namespace std;
// Find all the multiples of 3 and 5 under 1000
int main() {
  int max = 1000;
  int ans = 0;
  for (int i = 0; i < max; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}
