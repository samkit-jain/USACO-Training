/*
ID: samkit.1
PROG: crypt1
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1 = 0, a = 0, ans = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
	vector<int> v;
	
	FILE *fin, *fout;
	fin = fopen("crypt1.in", "r");
	fout = fopen("crypt1.out", "w");
	
	fscanf(fin, "%d\n", &n1);
	
	for(int i = 0; i < n1; i++) {
		fscanf(fin, "%d\n", &a);
		v.push_back(a);
	}

	for(auto a : v) {
		for(auto b : v) {
			for(auto c : v) {
				for(auto d : v) {
					for(auto e : v) {
						h = (e * c) % 10;

						if(find(v.begin(), v.end(), h) == v.end()) continue;

						int carry = (e * c) / 10;
						g = (e * b + carry) % 10;

						if(find(v.begin(), v.end(), g) == v.end()) continue;

						carry = (e * b + carry) / 10;
						f = (e * a + carry);

						if(f >= 10) continue;
						if(find(v.begin(), v.end(), f) == v.end()) continue;

						k = (d * c) % 10;
						
						if(find(v.begin(), v.end(), k) == v.end()) continue;

						carry = (d * c) / 10;
						j = (d * b + carry) % 10;
						
						if(find(v.begin(), v.end(), j) == v.end()) continue;
						
						carry = (d * b + carry) / 10;
						i = (d * a + carry);

						if(i >= 10) continue;
						if(find(v.begin(), v.end(), i) == v.end()) continue;

						l = (g + k) % 10;

						if(find(v.begin(), v.end(), l) == v.end()) continue;

						carry = (g + k) / 10;
						m = (f + j + carry) % 10;

						if(find(v.begin(), v.end(), m) == v.end()) continue;

						carry = (f + j + carry) / 10;
						n = i + carry;

						if(n >= 10) continue;
						if(find(v.begin(), v.end(), n) == v.end()) continue;
						
						++ans;
					}
				}
			}
		}
	}

	fprintf(fout, "%d\n", ans);
	//printf("%d\n", ans);
	
	return 0;
}