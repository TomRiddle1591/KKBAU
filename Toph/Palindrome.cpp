//check if word is palindrome or not

#include<iostream>
#include<string>
using namespace std;


int main(void){
    string word;
    cin >> word;

    string new_word;
    int letters = word.length();


    for(int i = letters - 1; i >= 0; i--){
        new_word.push_back(word[i]); // Automatically grows and appends
    }

    cout << (word == new_word ? "Yes" : "No") << "\n";
return 0;
}