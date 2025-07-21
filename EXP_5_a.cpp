//Piyush Pawar  
//24070123145
//B3

#include <iostream>
using namespace std;

int main() 
{
    int a;
    cout << "Enter a number:  ";
    cin >> a; 
    if (a > 0) 
    {
        if (a % 2 == 0) 
            cout << "The number is even." ;
        
        else  
            cout << "The number is odd." ;
    }

    else
        cout << "The number is negative." ;
    
    return 0;
}