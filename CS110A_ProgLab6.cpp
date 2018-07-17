#include <iostream> 
#include <cstring>
using namespace std; 

int main()
{
    char word[20];
    int length;
    int flag = 0;
    
    cout << "Enter a string: "; 
    cin >> word;
    
    length = strlen(word);
    
    for(int i=0;i < length ;i++){
        if(word[i] != word[length-i-1]){
            flag = 1;
            break;
	   }
	}
    
    if (flag) 
    {
        cout << word << " is not a palindrome" << endl; 
    }    
    else 
    {
        cout << word << " is a palindrome" << endl; 
    }
    return 0;
}

/*
    Enter a string: radar
 radar is a palindrome
 
   Enter a string: abccba
 abccba is a palindrome
*/