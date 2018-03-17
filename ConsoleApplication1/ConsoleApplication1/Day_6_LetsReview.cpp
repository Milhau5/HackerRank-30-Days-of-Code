#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int t;
	string s1;

	cin >> t;

	for (int i = 0; i<t; i++)
	{
		getline(cin >> ws, s1);

		//
		string s2a;
		string s2b;
		for (int j = 0; j < s1.length(); j++)
		{
			if (j == 0 || j % 2 == 0) s2a.push_back(s1[j]);
			else s2b.push_back(s1[j]);
		}

		cout << s2a << " " << s2b << endl;
	}

	return 0;
}