#include <bits/stdc++.h>
using namespace std;

bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    int nearestX = max(x1, min(xCenter, x2));
    int nearestY = max(y1, min(yCenter, y2));

    int dist = sqrt(pow(nearestX - xCenter, 2) + pow(nearestY - yCenter, 2));
    if (dist > radius) return false;
    return true;
}

int main() {
    int radius, xCenter, yCenter, x1, y1, x2, y2;
    cin >> radius >> xCenter >> yCenter >> x1 >> y1 >> x2 >> y2;
    bool isOverlapping = checkOverlap(radius, xCenter, yCenter, x1, y1, x2, y2);

    if (isOverlapping) cout << "Overlapping";
    else cout << "Non-overlapping";
    return 0;
}