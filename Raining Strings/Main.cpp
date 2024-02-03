#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	char yesno='Y';
	string str;
	vector <string> stores{};

	cout << "\t\tWelcome to the Business Sorting Program!\n\n";

	while (toupper(yesno) == 'Y') {
		
		cout << "\nPlease enter the name of a business: ";
		getline(cin, str);

		stores.push_back(str);
		sort(stores.begin(), stores.end());

		cout << "\n\nYour businesses are: \n";
		
		for (int i = 0; i < stores.size(); i++)
		{
			cout << stores[i] << endl;
		}

		cout << "\nDo you want to add another business?\n";
		cin >> yesno;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	
	cout << "\nThank you! Have a great day.";
	return 0;
}