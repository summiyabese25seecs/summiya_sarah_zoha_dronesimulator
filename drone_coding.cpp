//prototyping, above main.
//calling, inside main
//definition, below main.

//include the cstdlib library for rand and srand functions and ctime library for seeding.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//prototyping
void startDay();

void deliverpackage(string, int&, int&, int&, int&); // for all three locations A, B and C.

int checkweather();          //generates a random value.
string tellweather(int);     //prints the weather based on that random value.

bool checkobstacle();        //generates a random boolean.
string tellobstacle(bool);   //prints the obstacle status based on that random value.

int batterydrain();          //generates a random value for drainage.
void tellbatterydrain(int);  //prints the drainage.

int checkload();             //generates a random value 1-5 to keep probability of this 20%.
int rand_malfunction();      //generates a random value 1-10 to keep probability of this 10%.

void displaySummary(int&, int&, int&, int&);

int main() {
	//initializing variables.
	int battery = 100;
	int successful = 0;
	int delayed = 0;
	int failed = 0;

//calling functions
	srand(time(0));
	startDay();

	deliverpackage("A", battery, successful, delayed, failed);
	deliverpackage("B", battery, successful, delayed, failed);
	deliverpackage("C", battery, successful, delayed, failed);

	displaySummary(battery, successful, delayed, failed);

	return 0;
}

//now define all functions that have been called.
void startDay()
{
    //this function prints the welcome message to the user.
	cout << "GOOD MORNING.\n";
	cout << "Battery = 100%\n";
	cout << "Your deliveries for today are as follows:\n1. Location A\n2. Location B\n3. Location C\n\n";
}

//call all variables by reference so that their original values can be modified in main.
void deliverpackage(string location, int &battery, int &successful, int &delayed, int &failed)
{
	cout << "Checking conditions for location " << location << ". " << endl;
	int x = checkweather();
	cout << tellweather(x);

	bool obs = checkobstacle();
	cout << tellobstacle(obs);

	int level = batterydrain();
	tellbatterydrain(level);

	int malfunctionchance = rand_malfunction();
	int load = checkload();

	cout << endl;
	//1 is sunny, 2 is rainy, 3 is windy.

	//the flight proceeds only if battery is greater than 40, otherwise it goes for a recharge.
	if (malfunctionchance == 1)
	{
		cout << "SYSTEM MALFUNCTIONED. The delivery has failed.\n";
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		failed += 1;
	}
	else if (load == 1 && x == 1 && battery > 40) //To further decrease the probability of heavy load warning, only let it happen if the weather is sunny.
	{
		cout << "The load is heavy, That will affect the efficiency of the drone. More battery required." << endl;
		cout << "Sorry, extra time for delivery required.\n";
		battery -= 5; //extra battery drainage due to the heavy load.
		battery -= level;
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		successful += 1;
	}
	else if (x == 2 && battery > 40)
	{
		cout << "Delivery delayed due to rain.\n";
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		delayed += 1;
	}
	else if (battery < 40)
	{
        //for battery less than 40%, it recharges to increase by 20% but the delivery has totally failed, it doesn't attempt it again.
		cout << "The drone is returning for a recharge.\n";
		cout << "The delivery has failed.\n";
		battery += 20;
		cout << "Battery after recharge = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		failed += 1;
	}
	else if (x == 3 && obs && battery > 40) //when weather is windy and obstacles are present.
	{
		cout << "The flight has been rerouted and extra battery used due to wind.\n";
		cout << "The delivery is successful.\n";
		battery -= 5; //extra battery drainage due to reroute.
		battery -= 5; //extra battery drainmage due to wind.
		battery -= level;
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		successful += 1;
	}
	else if (x == 3 && obs == 0 && battery > 40) //when weather is windy and obstacles are not present.
	{
		cout << "Extra battery used due to wind.\n";
		cout << "The delivery is successful.\n";
		battery -= 5; //extra battery drainage due to wind.
		battery -= level;
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		successful += 1;
	}
	else if (obs && battery > 40)
	{
		cout << "The flight has been rerouted. (Extra battery drainage)\n";
		cout << "The delivery is successful.\n";
		battery -= 5; //extra battery drainage due to reroute.
		battery -= level;
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
		successful += 1;
	}
	else
	{
		cout << "The delivery is successful.\n";
		battery -= level;
		successful += 1;
		cout << "Remaining battery = " << battery << "%" << endl;
		cout << "-----------------------------------------------\n";
	}
}
int checkweather()
{
	//returns a random value between 1 and 3.
	return rand() % 3 + 1; 
}
string tellweather(int i)
{
    //tells weather based on what number was generated by the function checkweather().
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
    //prints the value to the user that was generated by the function batterydrain().
	cout << "The battery drain for this flight would be " << i << "%." << endl;
}

int rand_malfunction() 
{
	//generates a random value between 1 and 10 and set condition to keep probability 10%.
	return rand() % 10 + 1;
}

int checkload()
{
	//random value between 1 and 5 because the probability for heavy load warning is 20%.
	return rand() % 5 + 1; 
}

//function to display all results at the end.
//passing the parameters by reference so that their latest values can be displayed.
void displaySummary(int& battery, int& successful, int& delayed, int& failed)
{
	cout << "FLIGHT SUMMARY:\n";
	cout << "Battery remaining: " << battery << "%\n";
	cout << "Total deliveries = 3\n";
	cout << "Deliveries successful = " << successful << endl;
	cout << "Deliveries delayed = " << delayed << endl;
	cout << "Deliveries failed = " << failed << endl;
}