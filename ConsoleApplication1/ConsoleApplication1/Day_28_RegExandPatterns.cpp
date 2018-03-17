#include <list>
#include <string>
#include <iostream>
#include <regex>

/*problem: Consider a database table, Emails, which has the attributes First Name and Email ID. 
Given  rows of data simulating the Emails table, print an alphabetically-ordered list 
of people whose email address ends in @gmail.com*/

/*The first line contains an integer, N, total number of rows in the table.
Each of the N subsequent lines contains 2 space - separated strings denoting a person's 
first name and email ID, respectively.*/



using namespace std;


int main() {
	int N;
	cin >> N;
	list<string> names;
	for (int i = 0; i < N; ++i) {
		string firstName;
		string emailID;
		cin >> firstName >> emailID;
		
		//hack: only concern ourselves with what ends in @gmail.com
		if (regex_match(emailID, regex(".+@gmail.com"))) {
			names.push_back(firstName);
		}
	}

	names.sort();

	while (!names.empty())
	{
		cout << names.front() << endl;
		names.pop_front();
	}

	return 0;
}