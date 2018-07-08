#include <iostream>
using namespace std;

int main()
{
  char p1;
  char p2;

  cout <<"\nPlayer One, please enter your move: " << "\n('P' for Paper, 'R' for Rock, 'S' for Scissor) ";
  cin >> p1;
  cout <<"Player Two, please enter your move: " << "\n('P' for Paper, 'R' for Rock, 'S' for Scissor) ";
  cin >> p2;

  switch (p1)
  {
    case 'p':
    case 'P':
      switch (p2)
      {
        case 'p':
        case 'P':
          cout << "Tie with Paper!\n";
          break;

        case 'r':
        case 'R':
          cout << "Player 1 wins: Paper covers Rock!!\n";
          break;

        case 's':
        case 'S':
          cout << "Player 2 wins: Scissors cut Paper!!\n";
          break;

        default:
          cout << "Player 2 invalid move.\n";

        }
        break;

    case 'r':
    case 'R':
      if(p2 == 'p' || p2 == 'P')
        cout<< "Player 2 wins: Paper covers Rock!\n";
      else if(p2 == 'r' || p2 == 'R')
        cout << "Tie with Rock!\n";
      else if(p2 == 's' || p2 == 'S')
        cout << "Player 1 wins: Rock smash Scissors!!\n";
      else
        cout << "Player 2 invalid move.\n";
      break;

    case 's':
    case 'S':
      
      if(p2 == 'p' || p2 == 'P')
        cout << "Player 1 wins: Scissors cut Paper!\n";
      else if(p2 == 'r' || p2 == 'R')
        cout << "Player 2 wins: Rock smash Scissors!\n";
      else if(p2 == 's' || p2 == 'S')
        cout << "Tie with Scissors!\n";
      else
        cout << "Player 2 invalid move.\n";
      break;

    default:
      cout << "Player 1 invalid move.\n";
  }

  return 0;
}

/*Player One, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) r
 Player Two, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) p
 Player 2 wins: Paper covers Rock!
 ----jGRASP: operation complete.
 
 Player One, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) s
 Player Two, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) r
 Player 2 wins: Rock breaks Scissors!
 
  ----jGRASP: operation complete.
 
 Player One, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) p
 Player Two, please enter your move: 
 ('P' for Paper, 'R' for Rock, 'S' for Scissor) s
 Player 2 wins: Scissors cut Paper!!
 
  ----jGRASP: operation complete.*/