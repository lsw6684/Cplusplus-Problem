#include <iostream>
using namespace std;
int main() {
	float h, b, c, s;
	cin >> h >> b >> c >> s;
	printf("%.1f MB", (h * b * c * s) / (8 * 1024 * 1024));
	system("pause");
	return 0;
}