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
using namespace std;


int main() {
	int N;
	cin >> N;

	/*if(N <= 1 || N >= 100) return 0;

	if(N%2 != 0)
	cout << "Wierd";
	if(N%2 == 0 && N >= 2 && N <= 5)
	cout << "Not wierd";
	if(N%2 == 0 && N >= 6 && N <= 20)
	cout << "Wierd";
	if(N%2 == 0 && N >= 20)
	cout << "Not wierd";*/

	if (N % 2 == 1 || (N > 5 && N < 21)) cout << "Wierd";

	else cout << "Not Wierd";

	return 0;
}