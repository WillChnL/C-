#include <iostream>
using namespace std;

int main()
{
  int    gradeValue,
         dGPA = 0;
  double numUnits,
         nGPA = 0,
         GPA;
  char   ans,
         letterGrade;
       

  cout <<"\nDo you have courses completed at CCSF? (Y for yes and N for no)";
  cin >> ans;

  switch (ans)
  {
    case 'Y':
    case 'y':
    
  cout << "\nWhat is the number of units of the course?";
  cin >> numUnits;
  
  cout << "\nWhat grade did you get?";
  cin >> letterGrade;
  
  if (letterGrade == 'A')
   {
      nGPA = numUnits * 4;
      dGPA = numUnits;
   }
   else if (letterGrade == 'B')
   {
      nGPA = numUnits * 3;
      dGPA = numUnits;
   }
   else if (letterGrade == 'C')
   {
      nGPA = numUnits * 2;
      dGPA = numUnits;
   }
   else if (letterGrade == 'D')
   {
      nGPA = numUnits * 1;
      dGPA = numUnits;
   }
   else if (letterGrade == 'F')
   {
      nGPA = numUnits * 0;
      dGPA = numUnits;
   }
  

  }

  return 0;
}
