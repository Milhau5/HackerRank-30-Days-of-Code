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
	int n;
	int count = 0;
	int max = 0;
	//list<int> binaryConvert;
	//int consecutive;
	cin >> n;

	while (n)
	{
		//n&1 returns either a 1 or 0, bitwise AND operator
		if (n & 1) count++;
		else count = 0;

		if (max < count)
			max = count;

		//set n to itself shifted by one bit to the right. Expression evaluates to the new value of n after the shif
		n >>= 1;
	}

	cout << max;

	//convert the old-fashioned way
	/*while(n>0)
	{
	int remainder = n%2;
	n = n/2;
	binaryConvert.push_front(remainder);
	}

	for(auto i : binaryConvert)
	{
	cout << i;
	}*/

	return 0;
}