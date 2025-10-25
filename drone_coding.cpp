//Drone Simulator 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// prototyping
void startDay();

int checkweather();
string tellweather(int);

bool checkobstacle();
string tellobstacle(bool);

int batterydrain();
void tellbatterydrain(int);

int checkload();
int rand_malfunction();

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

int checkweather()
{
	//returns a random value between 1 and 3.
	return rand() % 3 + 1; 
}
string tellweather(int i)
{
	if (i == 1)
	{
		return "Weather Status: Sunny\n";
	}
	else if (i == 2)
	{
		return "Weather Status: Rainy\n";
	}
	else if (i == 3)
	{
		return "Weather Status: Windy\n";
	}
}

bool checkobstacle()
{
	//returns either 0 or 1.
	return rand() % 2; 
}

string tellobstacle(bool i)
{
	if (i) //when i is 1 (true)
	{
		return "Obstacle Status: DETECTED.\n";
	}
	else
	{
		return  "Obstacle Status: NOT DETECTED.\n";
	}
}

int batterydrain()
{
	//generates a random value between 10 and 30.
	return rand() % (30 - 10 + 1) + 10; 
}

void tellbatterydrain(int i)
{
	cout << "The battery drain for this flight would be " << i << "%." << endl;
}

int rand_malfunction() 
{
	//generates a random value between 1 and 10.
	return rand() % 10 + 1;
}

int checkload()
{
	//random value between 1 and 5 because the probability for heavy load warning is 20%.
	return rand() % 5 + 1; 
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