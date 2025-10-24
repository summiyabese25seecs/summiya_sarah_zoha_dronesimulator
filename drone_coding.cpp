//Drone Simulator 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// prototyping
void startDay();
void displaySummary(int&, int&, int&, int&);
int main() {
	// initializing variables
	int battery = 100;
	int successful = 0;
	int delayed = 0;
	int failed = 0;
	// calling functions
	startDay();
	displaySummary(battery, successful, delayed, failed);
	return 0;
}
void startDay()
{
	cout << "GOOD MORNING.\n";
	cout << "Battery = 100%\n";
	cout << "Your deliveries for today are as follows:\n1. Location A\n2. Location B\n3. Location C\n\n";
}
//function to display all results at the end.
void displaySummary(int& battery, int& successful, int& delayed, int& failed)
{
	cout << "FLIGHT SUMMARY:\n";
	cout << "Battery remaining: " << battery << "%\n";
	cout << "Total deliveries = 3\n";
	cout << "Deliveries successful = " << successful << endl;
	cout << "Deliveries delayed = " << delayed << endl;
	cout << "Deliveries failed = " << failed << endl;
}