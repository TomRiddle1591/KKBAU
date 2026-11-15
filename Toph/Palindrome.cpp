#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

/*int main(void){

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
}*/


int main(void){
    string word;
    cin >> word;

    string new_word;
    int letters = word.length();
    
    for(int i = letters - 1, count = 0; i >= 0; i--, count++){
        new_word[count] = word[i];
    }

    for(int j = 0; j < letters; j++){
        cout << new_word[j] << " ";
    }
    cout << "\n";
return 0;
}