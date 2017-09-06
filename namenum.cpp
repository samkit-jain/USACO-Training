/*
ID: samkit.1
PROG: namenum
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

char arr[8][3] = {
	{'A', 'B', 'C'},
	{'D', 'E', 'F'},
	{'G', 'H', 'I'},
	{'J', 'K', 'L'},
	{'M', 'N', 'O'},
	{'P', 'R', 'S'},
	{'T', 'U', 'V'},
	{'W', 'X', 'Y'}
};

int main() {
	string n = "", s ="";

	ofstream fout("namenum.out");
	ifstream fin("namenum.in");
	ifstream in("dict.txt");
	
	fin>>n;

	bool pr = false;

	while(getline(in, s)) {
		if(s.length() != n.length()) continue;

		bool pre = true;

		for(int i = 0; s[i] != '\0'; i++) {
			bool pres = false;

			for(int j = 0; j <= 2; j++) {
				if(s[i] == arr[n[i] - '2'][j]) pres = true;
			}

			if(!pres) {
				pre = false;
				break;
			}
		}

		if(!pre) continue;

		fout<<s<<endl;
		pr = true;
		//cout<<s<<endl;
	}

	if(!pr) fout<<"NONE\n";

	return 0;
}