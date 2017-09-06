/*
ID: samkit.1
PROG: friday
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

bool isLeap(int y) {
	if(y % 4 != 0) return false;

	if(y % 100 != 0) return true;

	if(y % 400 == 0) return true;

	return false;
}

int main() {
	int n = 0, c = 0;
	int a[7] = {0, 0, 0, 0, 0, 0, 0};

	ofstream fout("friday.out");
	ifstream fin("friday.in");
	
	fin>>n;

	c = 0;
	++a[c];
	//Jan
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i - 1)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}

	c = 3;
	++a[c];
	//Feb
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i - 1)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 3;
	++a[c];
	//Mar
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 6;
	++a[c];
	//Apr
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 1;
	++a[c];
	//May
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 4;
	++a[c];
	//Jun
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 6;
	++a[c];
	//Jul
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 2;
	++a[c];
	//Aug
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 5;
	++a[c];
	//Sep
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 0;
	++a[c];
	//Oct
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 3;
	++a[c];
	//Nov
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}
	
	c = 5;
	++a[c];
	//Dec
	for(int i = 1901; i < 1900 + n; i++) {
		if(isLeap(i)) {
			++c;
		}

		++c;
		c %= 7;
		++a[c];
	}

	fout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<" "<<a[5]<<" "<<a[6]<<endl;

	return 0;
}