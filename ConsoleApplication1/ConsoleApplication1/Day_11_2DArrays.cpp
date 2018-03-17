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
	//vector< vector<int> > arr(6,vector<int>(6));
	int arr[10][10]; //extra big just incase
	int maxsum = -36985247; //lower limit for an integer
	for (int arr_i = 0; arr_i < 6; arr_i++) {
		for (int arr_j = 0; arr_j < 6; arr_j++) {
			cin >> arr[arr_i][arr_j];
		}
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (j + 2 < 6 && i + 2 < 6) {
				int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
				if (sum > maxsum) maxsum = sum;
			}
		}
	}

	cout << maxsum << endl;
	return 0;
}