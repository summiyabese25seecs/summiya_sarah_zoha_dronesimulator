//Drone Simulator 
#include <iostream>
#include <ctime> //for time variable 
using namespace std;

int main() 
 {  int srand(time(0));
    int weather = (rand()%2)+1;
    cout<<weather;

     
    return 0;
}