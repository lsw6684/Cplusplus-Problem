#include<iostream>
#include<algorithm>
#include<tuple>
#include<vector>
#define endl '\n'
using namespace std;

bool cmp(const tuple<string, int, int> &a, const tuple<string, int, int> &b) {
	if (get<2>(a) != get<2>(b))
		return get<2>(a) > get<2>(b);
	else if (get<2>(a) == get<2>(b))
		return get<1>(a) > get<1>(b);
}


int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	vector<string> s = { "a", "b", "c" };
	vector<int> a = { 1, 2, 3 };
	vector<int> b = { 2, 3, 3 };

	vector<tuple<string, int, int>> v;
	for (int i = 0; i < s.size(); i++) {
		v.push_back(make_tuple(s[i], a[i], b[i]));
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (auto i : v)
		cout << get<0>(i) << endl;

}
