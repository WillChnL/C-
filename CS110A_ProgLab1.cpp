#include <iostream>
using namespace std;

int main()
{
  int nRiders;
  int nDays;
  char mName[20];

  cout << "Welcome to the Muni Ridership Survey\n";
  cout << "Which Muni line did you survey?";
  cin >> mName;
  cout << "How many days did you survey it?";
  cin >> nDays;
  cout << "How many people riders did you count?";
  cin >> nRiders;

  cout << "According to your survey, an average of " << nRiders / static_cast<double>(nDays) << " people rode the " << mName << " per day.\n";

  return 0;
}


/* Welcome to the Muni Ridership Survey
Which Muni line did you survey?k-line
How many days did you survey it?7
How many people riders did you count?486
According to your survey, an average of 69.4286 people rode the k-line per day.


Welcome to the Muni Ridership Survey
Which Muni line did you survey?N-line
How many days did you survey it?30
How many people riders did you count?2500
According to your survey, an average of 83.3333 people rode the N-line per day.

 ----jGRASP: operation complete. */