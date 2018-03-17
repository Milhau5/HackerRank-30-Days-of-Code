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
	cin >> n;
	vector<int> arr(n);
	for (int arr_i = 0; arr_i < n; arr_i++) {
		cin >> arr[arr_i];
	}

	reverse(arr.begin(), arr.end());

	//how one would do it w/o std::vector shortcuts
	/*for (int i = 0; i < (n / 2); i++) {
	float temporary = arr[i];
	arr[i] = arr[(n - 1) - i];
	arr[(n - 1) - i] = temporary;
	}*/

	for (int arr_j = 0; arr_j < n; arr_j++)
	{
		cout << arr[arr_j] << " ";
	}

	return 0;
}
