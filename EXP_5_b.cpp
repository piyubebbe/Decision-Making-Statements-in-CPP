//Piyush Pawar  
//24070123145  
//B3

#include <iostream>
using namespace std;

int main()
{
    char n ;
    cout << "Enter the letter: ";
    cin >> n ; 

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U')
        cout << "The letter is a vowel." ;
 
    else
        cout << "The letter is a consonant." ;


    return 0;
}