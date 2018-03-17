#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int t;
	//list<int> sheeit;
	//list<int> set;
	cin >> t;
	for (int a0 = 0; a0 < t; a0++) {
		int n;
		int k;
		cin >> n >> k;

		unsigned int i, j, max = 0;
		for (i = 1; i <= n; i++)
		{
			for (j = i + 1; j <= n; j++)
			{
				int ans = 0;
				ans = i & j;
				if (ans>max && ans < k)
					max = ans;
			}
		}
		cout << max << endl;
	}

	return 0;
}