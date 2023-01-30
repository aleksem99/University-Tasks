#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Circle {
  double x, y, r;
};

struct Point {
  double x, y;
};

bool isInsideCircle(Circle c, Point p) {
  return pow(p.x - c.x, 2) + pow(p.y - c.y, 2) < pow(c.r, 2);
}

int main() {
  int k, m;
  cin >> k >> m;

  vector<Circle> circles(k);
  for (int i = 0; i < k; i++) {
    cin >> circles[i].x >> circles[i].y >> circles[i].r;
  }

  vector<Point> points(m);
  for (int i = 0; i < m; i++) {
    cin >> points[i].x >> points[i].y;
  }

  int maxPoints = 0, index = 0;
  for (int i = 0; i < k; i++) {
    int count = 0;
    for (int j = 0; j < m; j++) {
      if (isInsideCircle(circles[i], points[j])) {
        count++;
      }
    }
    if (count > maxPoints) {
      maxPoints = count;
      index = i;
    }
  }

  cout << "Circle " << index + 1 << " contains the most points." << endl;

  return 0;
}