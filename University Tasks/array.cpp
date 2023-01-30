#include <iostream>

using namespace std;
/* / Given a two-dimensional array of c m rows and n columns. Find
the number of the row in which all elements are even numbers*/ 
int main() {
  int m, n;
  cin >> m >> n;

  int arr[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int row = -1;
  for (int i = 0; i < m; i++) {
    bool allEven = true;
    for (int j = 0; j < n; j++) {
      if (arr[i][j] % 2 != 0) {
        allEven = false;
        break;
      }
    }
    if (allEven) {
      row = i;
      break;
    }
  }

  if (row == -1) {
    cout << "No row has all even numbers." << endl;
  } else {
    cout << "The row with all even numbers is: " << row << endl;
  }

  return 0;
}