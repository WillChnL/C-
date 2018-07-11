/* William Chan, CS110A_ProgLab5_RC, CS 110A Lab 5,This code calculate the interest of a loan */

#include <iostream> 
using namespace std; 
  
void getInput(double& principle, double& interestRate, double& monthlyPayment); 
//Ask user to input some info about the loan

  
void payOffLoan(double principle, double interestRate, double monthlyPayment, int& months, double& totalInterest, double& finalPayment); 
//Calculate the load 

int main() 
{ 
      double prin, intRate, moPay; 
      double totInt, finPay; 
      int months; 
  
      cout << "\n** Welcome to the Consumer Loan Calculator **\n\n"; 
  
      getInput(prin, intRate, moPay); 
      payOffLoan(prin, intRate, moPay, months, totInt, finPay); 
  
      cout << "\nYour debt will be paid off after " << months << " months, " 
             << "with a final payment of just $" << finPay 
             << "\nThe total amount of interest you will pay during that time is $" << totInt 
             << endl; 

  return 0; 
} 
  
void getInput(double& principle, double& interestRate, double& monthlyPayment) 
{ 
  do 
  { 
    cout << "How much do you want to borrow? $"; 
    cin >> principle; 
    if (principle <= 0) cout << "You must enter a positive number!\n"; 
  } while(principle <= 0.0); 
  
  do 
  { 
    cout << "What is the annual interest rate expressed as a percent? "; 
    cin >> interestRate; 
    if (interestRate <= 0 || interestRate >= 20.0) cout << "You must enter a positive number less than 20!\n"; 
  } while(interestRate <= 0.0 || interestRate >= 20.0); 
  
  double monthlyInterestRate = interestRate/1200.0;  
  do 
  { 
    cout << "What is the monthly payment amount you wish to make? $"; 
    cin >> monthlyPayment; 
    if (monthlyPayment <= 0) cout << "You must enter a positive number!\n"; 
      else if (principle * monthlyInterestRate  >= monthlyPayment) 
      { 
            cout << "You must make payments of at least $" 
                  << (principle * monthlyInterestRate )+1 
                  << "\nBecause your monthly interest is $" 
                  << principle * monthlyInterestRate  << endl; 
      } 
  } while(monthlyPayment <= 0.0 || principle*monthlyInterestRate>=monthlyPayment); 
  
  return; 
} 
  
void payOffLoan(double principle, double interestRate, double monthlyPayment, int& months, double& totalInterest, double& finalPayment) 
{ 
      double interest; 
     
      months = 0; 
      totalInterest = 0.0; 
      interestRate /= 100.0;  
      interestRate /= 12.0;       
      while (principle > 0) 
      { 
            interest = principle * interestRate; 
            totalInterest += interest; 
            principle -= (monthlyPayment - interest); 
            months++; 
      } 
       
      finalPayment =  monthlyPayment + principle;  
           
      return; 
}