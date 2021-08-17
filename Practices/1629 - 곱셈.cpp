#include<iostream>
#define ll long long
#define endl '\n'
using namespace std;

int res(ll a, ll b, ll c) {
	if (b == 1) return a % c;
	ll val = res(a, b / 2, c);
	val = val * val % c;
	if (b % 2 == 0) return val;
	return val * a % c;
 }

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	ll a, b, c;
	cin >> a >> b >> c;
	cout << res(a, b, c);
}