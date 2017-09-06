/*
ID: samkit.1
PROG: barn1
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int m = 0, s = 0, c = 0, ans = 0, a = 0;
	vector<int> v;
	
	FILE *fin, *fout;
	fin = fopen("barn1.in", "r");
    fout = fopen("barn1.out", "w");
	
	fscanf(fin, "%d%d%d\n", &m, &s, &c);

	for(int i = 0; i < c; i++) {
		fscanf(fin, "%d\n", &a);

		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for(int i = c - 1; i >= 1; i--) {
		v[i] = v[i] - v[i - 1];
	}

	v[0] = 1;

	sort(v.begin(), v.end());

	--m;

	for(int i = c - 1; i >= 0 && i >= c - m; i--) {
		++ans;
	}

	for(int i = c - m - 1; i >= 0; i--) ans += v[i];

	fprintf(fout, "%d\n", ans);
	
	return 0;
}