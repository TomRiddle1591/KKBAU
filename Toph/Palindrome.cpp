#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(void){

    string word;// cant convert string to char
    fgets(word, sizeof(word), stdin);
    
    int letters = sizeof(word);

    string new_word;
    for(int i = letters-1; i >= 0; i--){
        new_word[i] = word[i];
    }

    if(new_word == word){cout << "Yes\n";}
    else{cout << "Nothing\n";}
return 0;
}