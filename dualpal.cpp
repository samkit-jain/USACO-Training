/*
ID: samkit.1
PROG: dualpal
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

string inBase(int i, int b) {
	string s = "";

	while(i > 1) {
		s += '0' + (i % b);
		i /= b;
	}

	if(i == 1) s += "1";

	reverse(s.begin(),s.end());

	if(s[0] == '0' || s[s.length() - 1] == '0') return "12";

	return s;
}

bool isBasePalindrome(string s) {
	int l = s.length();

	for(int i = 0; i < l / 2; i++) {
		if(s[i] != s[l - i - 1]) {
			return false;
		}
	}

	return true;
}

int main() {
	int s = 0, n = 0;

	ofstream fout("dualpal.out");
	ifstream fin("dualpal.in");
	
	fin>>n>>s;

	for(int j = s + 1; n != 0; j++) {
		int c = 1;

		for(int b = 2; b <= 10; b++) {
			string i = inBase(j, b);

			if(isBasePalindrome(i)) {
				++c;
			}

			if(c == 3) {
				fout<<j<<endl;
				//cout<<j<<endl;
				--n;
				break;
			}
		}
	}

	return 0;
}