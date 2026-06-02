#include <iostream>
#include <cmath>

using namespace std;

long main() {
	cout << "Enter 3 of your clients checking balances: \n";
	cout << "---------------------------------------------\n";
	long double bal1, bal2, bal3;
	cin >> bal1 >> bal2 >> bal3;
	long double bal[4] = { 0, bal1, bal2, bal3 };

	cout << "---------------------------------------------\n";
	cout << "Here is a detailed report on these 3 balances: \n";
	for (int start = 1; start < 4; start++) {
		cout << "Client " << start << " has a balance of $" << round(bal[start]) << ".\n";
	}

	cout << "The average of these three balances is: $";
	short length = sizeof(bal) / sizeof(bal[0]);
	long double avg, sum = 0;
	for (int start2 : bal) {
		sum += start2;
	}
	avg = sum / length;
	cout << round(avg) << ".\n";

	cout << "The sum of these three balances is: $";
	cout << round(sum) << ".\n";

	cout << "Based on these balances, these clients are ";
	if (avg > 200000) {
		cout << "in a higher economic class.\n";
		return 0;
	}
	if (avg <= 50000) {
		cout << "in a lower economic class.\n";
		return 0;
	}
	else {
		cout << "in an average economic class.\n";
		return 0;
	}
}