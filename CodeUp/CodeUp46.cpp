#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    cout << fixed;
    cout.precision(1);
    cout << (a + b + c) / 3;
    system("pause");
    return 0;
}