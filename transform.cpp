/*
ID: samkit.1
PROG: transform
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;


int main() {
	int n = 0, v = 0;
	string s = "";
	vector<string> v1, v2, v3;

	ofstream fout("transform.out");
	ifstream fin("transform.in");
	
	fin>>n;

	for(int i = 0; i < n; i++) {
		fin>>s;

		v1.push_back(s);
	}

	v3 = v1;

	for(int i = 0; i < n; i++) {
		fin>>s;

		v2.push_back(s);
	}

	if(v3 == v2) {
		v = 6;
		//fout<<"6\n";
		//return 0;
	}

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"1\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"2\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"3\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		reverse(v3[i].begin(), v3[i].end());
	}
	
	if(v3 == v2) {
		fout<<"4\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"5\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"5\n";
		return 0;
	}

	v1 = v3;

	for(int i = 0; i < n; i++) {
		for(int j = n - 1; j >= 0; j--) {
			v3[i][n - 1 - j] = v1[j][i];
		}
	}

	if(v3 == v2) {
		fout<<"5\n";
		return 0;
	}

	if(v == 6) {
		fout<<"6\n";
		return 0;
	}

	fout<<"7\n";

	return 0;
}