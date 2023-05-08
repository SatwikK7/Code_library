#include <iostream>
using namespace std;

int main() {
  int num_cases;
  cin >> num_cases;
  while (num_cases--) {
    int gi, bo;
    cin >> gi >> bo;
    if (bo > gi) {
      cout << bo- gi << endl;
    } else {
      cout << "0" << endl;
    }
  }
  return 0;
}
