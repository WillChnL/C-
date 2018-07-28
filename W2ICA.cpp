//The program ask the user to input the score for the home team and the away team and tells who won --- William Chan ---
#include <iostream>
using namespace std;

int main()
{
   int hometeam, awayteam;
   char answer;
   
   do {
   
   cout << "Whats the score of the home team?" << endl;
   cin >> hometeam;
  
   cout << "Whats the score of the away team?" << endl;  
   cin >> awayteam;
  
   cout << "The home team score is " << hometeam << endl;
   cout << "The away team score is " << awayteam << endl;
  
   if (hometeam > awayteam)
     {
      cout << "The home team wins" << endl;
     }
   else
     {
      cout<< "The away team wins" << endl;
     }
     
   cout << "Do you want to do it again?" << endl;
   cin >> answer;
   
   } while (answer == 'y');
   return 0;
}

/*
Whats the score of the home team?
 1
 Whats the score of the away team?
 2
 The home team score is 1
 The away team score is 2
 The away team wins
 Do you want to do it again?
 n
 */