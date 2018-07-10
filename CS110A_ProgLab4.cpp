/* William Chan, CS110A_ProgLab4_RC, CS 110A Lab 4,This code draw a parallelogram */

#include <iostream>
using namespace std;

int main()
{
  int size;
  char symbol;
  
  cout << "\nWhats the length?";
  cin >> size;
  cout << "\nWhat symbol?";
  cin >> symbol;
  
  for (int r = 1; r <= size; r++)
  {
    for (int c = 1; c <= r; c++)
    {
      cout << symbol;
    }
    cout << endl;
  }
  for (int i = 1; i < size; i++) 
  {
        for (int j = 0; j < size; j++) 
        {
            if (i > j) 
            {
                cout << " ";
            }
            else cout << symbol;
        }
        cout << endl;
    }
}