#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto pi = atan2(0, -1);

	double area;
	cin >> area;

	auto r = sqrt(area / pi);

	cout << fixed << setprecision(8) << 2 * pi * r;

	return 0;
}