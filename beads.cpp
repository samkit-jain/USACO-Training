/*
ID: samkit.1
PROG: beads
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 0, ans = 0;
	string beads = "";

	ofstream fout("beads.out");
	ifstream fin("beads.in");

	fin>>n;
	fin>>beads;

	beads += beads;
	int c1 = 0;

	for(int i = 0; i < n; i++) {
		if(beads[i] != 'w') {
			int j = i, j1 = 1000, c = c1;
			c1 = 0;

			while((beads[j] == beads[i] || beads[j] == 'w') && j < i + n) {
				if(beads[j] == 'w') j1 = min(j1, j);
				
				++c;
				++j;
			}

			j1 = min(j, j1);
			int k = j;
			
			while((beads[k] == beads[j] || beads[k] == 'w') && k < i + n) {
				if(beads[k] == 'w') j1 = min(j1, k);

				++c;
				++k;
			}

			ans = max(ans, c);

			cout<<"i: "<<i<<" k: "<<k<<" ans: "<<ans<<"\n";

			if(k == i + n) break;

			i = j1 - 1;
		} else {
			++c1;
		}
	}

	if(ans == 0) ans = n;

	fout<<ans<<endl;

	return 0;
}