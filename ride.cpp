/*
ID: samkit.1
PROG: ride
LANG: C++
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ofstream fout("ride.out");
	ifstream fin("ride.in");
	
	string a, b;
	fin>>a>>b;

	int aval = 1, bval = 1;

	for(int i = 0; a[i] != '\0'; i++) {
		aval *= a[i] - 'A' + 1;
	}
	
	for(int i = 0; b[i] != '\0'; i++) {
		bval *= b[i] - 'A' + 1;
	}

	//std::cout<<aval<<endl<<bval;

	if(aval % 47 == bval % 47) {
		fout<<"GO\n";
	} else {
		fout<<"STAY\n";
	}

	return 0;
}