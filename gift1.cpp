/*
ID: samkit.1
PROG: gift1
LANG: C++11
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	std::map<string, int> mymap;
	int np = 0, g = 0, r = 0;
	string a, arr[10];

	ofstream fout("gift1.out");
	ifstream fin("gift1.in");
	
	fin>>np;

	for(int i = 0; i < np; i++) {
		fin>>a;
		arr[i] = a;
		mymap[a] = 0;
	}

	for(int j = 0; j < np; j++) {
		fin>>a;
		fin>>g>>r;

		//std::cout<<a<<endl;

		int each = 0;

		if(r != 0) {
			each =  g / r;
		}

		mymap[a] -= (each * r);

		for(int i = 0; i < r; i++) {
			fin>>a;
			mymap[a] += each;
		}

		/*for(int i = 0; i < np; i++) {
			fout<<arr[i]<<" "<<mymap[arr[i]]<<endl;
			std::cout<<arr[i]<<" "<<mymap[arr[i]]<<endl;
		}

		std::cout<<endl;*/
	}

	for(int i = 0; i < np; i++) {
		fout<<arr[i]<<" "<<mymap[arr[i]]<<endl;
		std::cout<<arr[i]<<" "<<mymap[arr[i]]<<endl;
	}

	//std::cout<<typeid(mymap.begin()).name();
	//for(std::map<string, int>::iterator it = mymap.begin(); it != mymap.end(); ++it) {
	//	fout<<it->first<<" "<<it->second<<endl;
	//	std::cout<<it->first<<" "<<it->second<<endl;
	//}
	
	return 0;
}