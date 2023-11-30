//this is the main file
// #include<bits/stdc++.h> // includes all the header files, but bad practice duh?
#include<iostream>
#include<vector>
#include "hangman_functions.h"
using namespace std;
int main(){

    //function consisting of introduction and directions to play 
    greet(); 

    string codeword = "codingtesting";
    string answer =   "_____________"; //random string to act as placeholder for the codeword

    int misses = 0; //number of wrong letters guessed
    vector<char> incorrect;
    bool guess = false; //to check if the letter guessed is right or not
    char letter;

    //guessing the letter and checking if the word is guessed rightly
    // max wrong guesses we are setting to 6 (6 parts of the bods, head, tummy, right arm, left arm, right leg, and left leg), can be set to anything tbh
    while(answer != codeword and misses <= 6 ){
        display_misses(misses); //displaying number of misses till now
        display_status(incorrect, answer);
        cout<<endl<<endl;


        cout<<"Please enter your guess: ";
        cin>>letter;
        for(int i=0;i<codeword.length();i++){
            if(letter == codeword[i]){
                answer[i] = letter;
                guess = true;
            }
        }

        if(guess == true){
            cout<<endl;
            cout<<"Correct! "<<endl;
        }
        else{
            cout<<endl;
            cout<<"Incorrect! Another portion of the person has be drawn"<<endl;
            incorrect.push_back(letter);
            misses++;
        }

        guess = false;
    }

    endgame(answer, codeword);
    return 0;
}

// g++ main.cpp hangman_functions.cpp -o run (run this in the cmd to run your code)