//better solution to Day 25 coming soon

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, t;
	//int sq = sqrt(t);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> t;
		
		for (int j = 2; j <= sqrt(t); j++)
		{
			if (t%j == 0)
			{
				cout << "Not prime" << endl;
			}
			else
			{
				cout << "Prime" << endl;
			}
		}
	}

	return 0;
}