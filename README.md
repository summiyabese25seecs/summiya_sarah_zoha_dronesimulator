# summiya_sarah_zoha_dronesimulator
Delivery Drone Simulator FOCP Assignment 1 

## Title and Team Information:
**Project Title:** Delivery Drone Simulator  
**Team Information: CMS IDs and Roles:**  
  - Summiya Aurangzeb (546507)  
  - Sarah Shahid (546132)  
  - Zoha Ahsan (545764)

  **Summiya Aurangzeb:**  
                  **Programme Manager** :  Managed Readme on GIT, tested code, and summarized AI tool usage.   
                   

  **Sarah Shahid:**  
                 **Documentation Manager** : Managed all documentation procedure, also a programmer.  

                 
  **Zoha Ahsan:**    
                  **Logic Designer** : Created detailed flowchart outlining program's logic to guide to development, summarized AI tool usage, also a programmer.  
                        
                      
## Problem Description and Overview:
This programme is based on a real life task. Shopping from home is very feasible so many improvements are being made in this domain.
In coming future, drones would be used to deliver the goods to avoid human effort.  
- *SUMMARY:*  
A drone is used to make deliveries to different destinations. The drone takes input from the user about the delivery destination then checks various conditions like *weather , weight of the delivery , battery charging and traffic*. The number of deliveries made and the time duration for each delivery is affected by the conditions.   
- *HOW IT IS INTERESTING:*  
This programme is interesting in the sense that it allows us to create and use our own functions. The logic building of this programme requires a high level of creativity which challenges our logical and creative mindsets. Above all, this project taught us team coordination and collaboration, which was both enagaging and tough.   

## Program Design and Logic:  
**Functions overview** :  
The functions used in the code are:
- void startDay() : Displays Good Morning message, initial battery and locations for delivery.
- void deliverpackage() : checks conditions for delivery locations.
- int checkweather() : checks the weather conditions of the delivery paths of locations.
- string tellweather () : Returns a text description of current weather condition detected by int checkweather ().
- bool checkobstacle() : checks whether there are some obstacles in the way or not.
- string tellobstacle () : Returns a text description of current obstacle condition detected by int checkobstacle ().
- int batterydrain () : checks the drainage of battery during flight.
- void tellbatterydrain () : Returns a text description of current battery condition detected by int batterydrain ().
- int checkload () : checks the weight of load to ensure smooth delivery.
- int rand_malfunction() : checks the 10% probablity of system malfunction.
- void displaySummary () : displays the remaining battery and sucesful, failed and delayed deliveries.
**Random Environmental Simulation Logic** :
- WEATHER: Random integer (1 - 3) generated a weather condition ; sunny, windy, rainy.
- OBSTACLE: Using rand that gives two conditions; obstacle is present and obsacle is absent.
- BATTERY DRAIN: Extra battery drain depending on weather conditions and presence of obstacles. 
- HEAVY LOAD WARNING: checks random value (1 - 5) because the probablity is 20%.
## Execution Instructions:  
1) Every Member wrote their own sample codes.
2) Team members kept each other updated by adding screenshots of code and outputs on the document.
3) The Readme tasks were divided among the members and were updated regularly.
4) Each member was made manager of one main task. like **managing Readme, managing document and managing codes**.
5) Each member uploaded a word documnet in the repository containing their sample codes to share with other members.
6) The final code was compiled by using parts of everyone's version of code.

## Team Collaboration Summary:  
**Division of Roles:**  
The roles were divided in such a way that all members contributed in the management of the readme file and the document. In this way each person got hands-on experience on Github and Readme file. Each member was made the manager of one main task, who kept the uniformity in the documentation.  
As for the code writing, each member made some functions using the flowchart and assignment manual. Each memeber wrote an individual and unique code body while the final code was made by compiling all three codes and modifying them.  

**(1)** Summiya Aurangzeb:  
- Created a public repository with name: summiya_sarah_zoha_dronesimulator
- Added the team members as collaborators.
- Created Readme file and made the first commit on it.
- Wrote the function get_weather and checkObstacle in the code.
- add pic of code
- Assisted the members in compliation of code and testing it.
- Compiled and wrote *Roles, Execution, Collaboration and Problem overview*.
- Created her version of code.
 ![Alt Text](https://github.com/summiyabese25seecs/summiya_sarah_zoha_dronesimulator/blob/main/Screenshot%202025-10-24%20011020.png?raw=true)
 
  
**(2)** Sarah Shahid:  
- Created a shared Google Document so that all team members could edit and document the progress.
- Created her version of code.
- Assisted the members in compliation of code and testing it.
- Wrote the 'improvement of code' part on README.
   ![Alt Text](https://raw.githubusercontent.com/summiyabese25seecs/summiya_sarah_zoha_dronesimulator/83518ced18da51cccb5de0c0ad37048b13b293b1/Screenshot%202025-10-24%20011312.png)
  
 ![Alt Text](https://raw.githubusercontent.com/summiyabese25seecs/summiya_sarah_zoha_dronesimulator/83518ced18da51cccb5de0c0ad37048b13b293b1/Screenshot%202025-10-24%20011239.png) 

**(3)** Zoha Ahsan:  
- Made a detailed flowchart that served as a base to generate a successful code.
- Created her own version of code's beginning so all members can get familiar with the logics of eachother and finalize one single version of code.
- Worked on readme and wrote usage of AI by all members.
- Wrote the list of functions used in the code in the project design part in readme.
- Wrote the start day and display summary function in code.
- Assisted the members in compliation of code and testing it.
- Created her version of code.

  ![Alt Text](https://raw.githubusercontent.com/summiyabese25seecs/summiya_sarah_zoha_dronesimulator/83518ced18da51cccb5de0c0ad37048b13b293b1/Screenshot%202025-10-24%20011213.png)

## Usage of AI and Reflection:
- used gpt to understand about the markdown in git readme file. (its specific syntax) It told us about the basic  markdown syntax.
- Used gpt to manage the pic size in readme.
- used gpt to understand how to make void functions and how to call them.
- used gpt to fix the delayed counter by adding another bool variable.
- understanding version control on github, how to save versions locally and remotely.
- used gpt to understand the syntax of using srand(time(0)) in main function so it can generate new random value each time the nested loop runs.

## Future Improvements:  
 - For now, the code has been written using just conditionals, loops and mainly using functions to create modules. However, the code could have been made much shorter and cleaner if arrays had been used. For instance, we worked with 3 locations but had it been 50 locations, we would have had to write 50 lines manually calling the function for checking conditions for all locations separately. Arrays would also have made it easier to track which location had which result and then display all results at the end.
 - Currently, when the program exits, all days data is lost but using file handling, it would have been possible to write logs of every day’s deliveries to a text file so that they would be read or used later, which is much more realistic for real-world drone delivery systems.
 - Together these two programming constructs would have made the code very automated, concise and effective which would have required very little printing or manual repetition.





                         
                    
                  





