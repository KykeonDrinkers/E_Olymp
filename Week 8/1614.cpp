#include <stdio.h>
#include <math.h>
double calculateDistance(int x1, int y1, int x2, int y2) { return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); }

double calculateAngle(double a, double b, double c) { return acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b * c)); }

double radiansToDegrees(double radians) { return radians * 180 / 3.141593; }

int main() { int x1, y1, x2, y2, x3, y3; double a, b, c, angleA, angleB, angleC;

scanf("%d %d", &x1, &y1);


scanf("%d %d", &x2, &y2);

scanf("%d %d", &x3, &y3);


a = calculateDistance(x2, y2, x3, y3);
b = calculateDistance(x1, y1, x3, y3);
c = calculateDistance(x1, y1, x2, y2);


angleA = calculateAngle(a, b, c);
angleB = calculateAngle(b, a, c);
angleC = calculateAngle(c, a, b);


double maxAngle = angleA;
if (angleB > maxAngle)
    maxAngle = angleB;
if (angleC > maxAngle)
    maxAngle = angleC;


double maxAngleDegrees = radiansToDegrees(maxAngle);

printf("%lf", maxAngleDegrees);

return 0;
}
