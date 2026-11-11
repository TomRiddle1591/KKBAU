#include <iostream>
using namespace std;

int main(void) 
{
    int N;
    cin >> N;
    int number[N];
    
    for(int i = 0; i < N; i++){
        cin >> number[i];
    }

    double sum = 0.0;
    for(int j = 1; j <= N; j++){
        cout << (number[j-1] + sum) / j << "\n";
        sum += number[j-1];
    }
return 0;
}