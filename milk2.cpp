/*
ID: samkit.1
PROG: milk2
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

struct numbers {
	int start;
	int end;

	numbers(int s, int e) {
		start = s;
		end = e;
	}
};

bool myfunction(const numbers& l, const numbers& r) {
	return (l.start < r.start);
}

int main() {
	int n = 0, s = 0, e = 0, maxC = 0, maxI = 0;
	vector<numbers> vec;

	ofstream fout("milk2.out");
	ifstream fin("milk2.in");
	
	fin>>n;

	for(int i = 0; i < n; i++) {
		fin>>s>>e;

		vec.push_back(numbers(s, e));
	}

	sort(vec.begin(), vec.end(), myfunction);

	maxC = vec[0].end - vec[0].start;

	for(int i = 1; i < n; i++) {
		if(vec[i].start <= vec[i - 1].end) {
			vec[i].start = min(vec[i].start, vec[i - 1].start);
			vec[i].end = max(vec[i].end, vec[i - 1].end);
		} else {
			maxC = max(maxC, vec[i - 1].end - vec[i - 1].start);
			maxI = max(maxI, vec[i].start - vec[i - 1].end);
		}
	}

	fout<<maxC<<" "<<maxI<<endl;
	
	return 0;
}