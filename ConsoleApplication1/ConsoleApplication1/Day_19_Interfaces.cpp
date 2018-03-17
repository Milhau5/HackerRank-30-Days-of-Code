#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic {
public:
	virtual int divisorSum(int n) = 0;
};

//Write your code here
class Calculator :public AdvancedArithmetic {
public:
	Calculator() {}
	int divisorSum(int n)
	{

		for (int i = 1; i <= n; i++)
		{
			if (n%i == 0)
			{
				divisors.push_back(i);
			}
		}

		for (vector<int>::iterator it = divisors.begin(); it != divisors.end(); it++)
		{
			sum += *it;
		}

		return sum;
	}
private:
	vector<int> divisors;
	int sum;
};

int main() {
	int n;
	cin >> n;
	AdvancedArithmetic *myCalculator = new Calculator();
	int sum = myCalculator->divisorSum(n);
	cout << "I implemented: AdvancedArithmetic\n" << sum;
	return 0;
}