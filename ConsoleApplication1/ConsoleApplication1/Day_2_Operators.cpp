#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	double mealCost;
	int tipPercent;
	int taxPercent;
	int finalCost;
	//
	//double tip; //can have decimal
	//double tax; //can have decimal

	cin >> mealCost >> tipPercent >> taxPercent;

	tipPercent = round(mealCost*tipPercent / 100);
	taxPercent = round(mealCost*taxPercent / 100);

	finalCost = mealCost + tipPercent + taxPercent;

	cout << "The total meal cost is " << finalCost << " dollars." << endl;

	//return 0;
}