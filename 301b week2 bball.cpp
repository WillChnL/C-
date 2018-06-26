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