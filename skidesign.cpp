/*
ID: samkit.1
PROG: skidesign
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, a = 0, mine = 0, maxe = 0;
	long double ans = LDBL_MAX, tans = 0.0;
	vector<int> v;
	
	FILE *fin, *fout;
	fin = fopen("skidesign.in", "r");
	fout = fopen("skidesign.out", "w");
	
	fscanf(fin, "%d\n", &n);
	
	for(int i = 0; i < n; i++) {
		fscanf(fin, "%d\n", &a);
		v.push_back(a);
	}

	auto result = minmax_element(v.begin(), v.end());
	mine = *result.first;
	maxe = *result.second;

	for(int i = mine; i <= maxe - 17; i++) {
		tans = 0.0;

		for(auto el : v) {
			if(el < i || el > i + 17) {
				long double diff = (long double)min(abs(i - el), abs(i + 17 - el));
				tans += diff * diff;
			}
		}

		ans = min(ans, tans);
	}

	fprintf(fout, "%.0Lf\n", ans);
	//printf("%.0Lf\n", ans);
	
	return 0;
}