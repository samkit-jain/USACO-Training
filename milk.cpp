/*
ID: samkit.1
PROG: milk
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, m = 0, rem = 0, a = 0, b = 0;
	long double ans = 0.0;
	vector<int> p(10001, 0);

	FILE *fin, *fout;
	fin = fopen("milk.in", "r");
    fout = fopen("milk.out", "w");
	
	fscanf(fin, "%d%d\n", &n, &m);

	rem = n;

	for(int i = 0; i < m; i++) {
		fscanf(fin, "%d%d\n", &a, &b);

		p[a] += b;
	}
	
	for(int i = 0; i <= 1000; i++) {
		if(p[i] != 0) {
			//cout<<i<<" "<<p[i]<<"\n";
			if(rem >= p[i]) {
				rem -= p[i];

				ans += (long double)((long double) i * (long double) p[i]);
			} else {
				ans += (long double)((long double) i * (long double) rem);
				rem = 0;
			}

			if(rem == 0) break;
		}
	}

	fprintf(fout, "%.0Lf\n", ans);
	//cout<<ans;
	//fout<<"7\n";

	return 0;
}