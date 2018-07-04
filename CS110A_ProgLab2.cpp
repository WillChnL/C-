//William Chan - Bank Charge - ProgLab2:Bank Charges (CS 110A Lab2) - Code to calculate the Fee of the bank charge you
#include <iostream>
using namespace std;

      const double ChFEE1 = 0.10;
      const double ChFEE2 = 0.08;
      const double ChFEE3 = 0.06;
      const double ChFEE4 = 0.04;
      const double MoFee = 10.00;
      const double minBalance = 400.00;
      const double lowBalFee = 15.00;

int main()

{

      int numChecks;
      double acctBalance, checkFee, totalFees;

      cout << "Enter the information of your checking account.\n";
      cout << "What is your Checking account balance: $";
      cin >> acctBalance;

      cout << "Number of checks written: ";
      cin >> numChecks;


      if (acctBalance < 0.00)
            cout << "\nYou own your soul to the bank!";

      if (numChecks < 0)
            cout << "\nNumber of checks must be more than zero.\n";
      else if(numChecks < 20)

            checkFee = numChecks * ChFEE1;

      else if (numChecks <= 39)

            checkFee = numChecks * ChFEE2;

      else if (numChecks <= 59)

            checkFee = numChecks * ChFEE3;

      else
            checkFee = numChecks * ChFEE1;

            totalFees = MoFee + checkFee;

      if (acctBalance < minBalance)

            totalFees += lowBalFee;

             cout << "\nThe bank fee this month is $" << totalFees << endl;

      return 0;
}

/*Enter the information of your checking account.
   What is your Checking account balance: $405.25
   Number of checks written: 5
The bank fee this month is $10.5
----jGRASP: operation complete.


Enter the information of your checking account.
What is your Checking account balance: $1000
Number of checks written: 65

The bank fee this month is $16.5
----jGRASP: operation complete.*/
