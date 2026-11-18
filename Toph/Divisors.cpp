//Read an integer variable and print all of its divisors (including 1 and the number itself).

#include <iostream>
using namespace std;

int main() 
{
    int numb=0;
    cin >> numb;

    for(int i = 1; i <= numb; i++){
        if(numb % i == 0){cout << i << "\n";}
    }
return 0;
}