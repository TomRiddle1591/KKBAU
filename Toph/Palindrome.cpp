#include<iostream>
using namespace std;

int main(void){
    string word;
    cin >> word;
    
    int letters = word.length();

    string new_word;
    for(int i = letters-1; i >= 0; i--){
        new_word[i] = word[i];
    }

    if(new_word == word){cout << "Yes\n";}
return 0;
}