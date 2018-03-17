#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int eday, emon, eyear;
	int aday, amon, ayear;

	cin >> aday >> amon >> ayear;
	cin >> eday >> emon >> eyear;

	int fine = 0;

	//differences
	int dyear = ayear - eyear;
	int dmon = amon - emon;
	int dday = aday - eday;

	//diff in year is greater than 0
	if (dyear > 0) {
		fine = 10000;
	}
	//diff in month is greather than 0, but is 0 for year
	else if (dmon > 0 && dyear == 0) {
		fine = 500 * dmon;
	}
	//there is a diff in days, but not months
	else if (dday > 0 && dmon == 0) {
		fine = 15 * dday;
	}

	cout << fine << endl;
}