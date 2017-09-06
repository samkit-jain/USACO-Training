/*
ID: samkit.1
PROG: combo
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int common(int a, int b, int n) {
	set<int> seta, setb;

	seta.insert((a - 2 + n) % n);
	seta.insert((a - 1 + n) % n);
	seta.insert((a) % n);
	seta.insert((a + 1) % n);
	seta.insert((a + 2) % n);

	setb.insert((b - 2 + n) % n);
	setb.insert((b - 1 + n) % n);
	setb.insert((b) % n);
	setb.insert((b + 1) % n);
	setb.insert((b + 2) % n);

	vector<int> v_intersection;

	set_intersection(seta.begin(), seta.end(), setb.begin(), setb.end(), back_inserter(v_intersection));

	return v_intersection.size();
}

int main() {
	int n = 0, m1 = 0, m2 = 0, m3 = 0, f1 = 0, f2 = 0, f3 = 0, total = 0;
	vector<int> v;
	
	FILE *fin, *fout;
	fin = fopen("combo.in", "r");
    fout = fopen("combo.out", "w");
	
	fscanf(fin, "%d\n", &n);
	fscanf(fin, "%d%d%d\n", &f1, &f2, &f3);
	fscanf(fin, "%d%d%d\n", &m1, &m2, &m3);

	if(n < 5) {
		total = n * n * n;
	} else {
		total = 125;
	}

	fprintf(fout, "%d\n", (2 * total) - (common(f1, m1, n) * common(f2, m2, n) * common(f3, m3, n)));
	//cout<<(total - (common(f1, m1, n) * common(f2, m2, n) * common(f3, m3, n)))<<"\n";
	
	return 0;
}