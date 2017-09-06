/*
ID: samkit.1
PROG: palsquare
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

string inBase(int i, int b) {
	string s = "";

	while(i != 1 && i != 0) {
		//cout<<i<<"\n";
		switch(i % b) {
			case 0:
				s += "0";
				break;
			case 1:
				s += "1";
				break;
			case 2:
				s += "2";
				break;
			case 3:
				s += "3";
				break;
			case 4:
				s += "4";
				break;
			case 5:
				s += "5";
				break;
			case 6:
				s += "6";
				break;
			case 7:
				s += "7";
				break;
			case 8:
				s += "8";
				break;
			case 9:
				s += "9";
				break;
			case 10:
				s += "A";
				break;
			case 11:
				s += "B";
				break;
			case 12:
				s += "C";
				break;
			case 13:
				s += "D";
				break;
			case 14:
				s += "E";
				break;
			case 15:
				s += "F";
				break;
			case 16:
				s += "G";
				break;
			case 17:
				s += "H";
				break;
			case 18:
				s += "I";
				break;
			case 19:
				s += "J";
				break;
		}

		i /= b;
	}

	if(i == 1) s += "1";

	reverse(s.begin(),s.end());

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
	int b = 0;

	ofstream fout("palsquare.out");
	ifstream fin("palsquare.in");
	
	fin>>b;

	for(int j = 1; j <= 300; j++) {
		string i = inBase(j * j, b);

		if(isBasePalindrome(i)) {
			fout<<inBase(j, b)<<" "<<i<<endl;
			cout<<inBase(j, b)<<" "<<i<<endl;
		}
	}

	return 0;
}