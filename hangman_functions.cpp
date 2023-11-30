#include<iostream>
#include<vector>
#include "hangman_functions.h" //linking the files
using namespace std;


//-----------------defining the functions mentioned in the header file----------//


//Greet function

void greet(){
    cout<<"-------------------------------"<<endl;
    cout<<"Welcome to the Hangman Game"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"How to play: Save the characted from being hanged by guessing the right letters from the codeword"<<endl<<endl<<endl;
}


// displaying the number of misses till now

void display_misses(int misses){
    if(misses == 0){
        // no part of the character is hanged to the hook (assume its hook we're hanging to lol
        cout<<"  +---+ " <<endl;
        cout<<"  |   | " <<endl; //hanging hook to the pole
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<" ========= " <<endl;
    }
    else if(misses == 1){
        //hanging character's head to the hook 
        cout<<"  +---+ " <<endl;
        cout<<"  |   | " <<endl;
        cout<<"  O   | " <<endl; //head
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<" ========= " <<endl;
    }
    else if(misses == 2){
        //hanging character's tummy to the hook
        cout<<"  +---+ " <<endl;
        cout<<"  |   | " <<endl;
        cout<<"  O   | " <<endl;
        cout<<"  |   | " <<endl; //tummy
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<" ========= " <<endl;
    }
    else if(misses == 3){
        //hanging character's right arm to the hook
        cout<<"  +---+ " <<endl;
        cout<<"  |   | " <<endl;
        cout<<"  O   | " <<endl;
        cout<<" /|   | " <<endl; //right arm
        cout<<"      | " <<endl;
        cout<<"      | " <<endl;
        cout<<" ========= " <<endl;
    }
    else if(misses == 4){
        //hanging character's left arm to the hook
        cout<<"  +---+ "<<endl;
        cout<<"  |   | "<<endl;
        cout<<"  O   | "<<endl;
        cout<<" /|\\  | "<<endl; //left arm (double backslash as the compiler gets confused, the double backslash willbe treated as one backslash one.  read more about escape sequences here:   https://en.cppreference.com/w/cpp/language/escape)
        cout<<"      | "<<endl;
        cout<<"      | "<<endl;
        cout<<" ========= "<<endl;
    }
    else if(misses == 5){
        //hanging character's right leg to the hook
        cout<<"  +---+ "<<endl;
        cout<<"  |   | "<<endl;
        cout<<"  O   | "<<endl;
        cout<<" /|\\  | "<<endl;
        cout<<" /    | "<<endl;//right leg
        cout<<"      | "<<endl;
        cout<<" ========= "<<endl;
    }
    else if(misses == 6){
        //hanging character's left leg to the hook
        cout<<"  +---+ " <<endl;
        cout<<"  |   | " <<endl;
        cout<<"  O   | " <<endl;
        cout<<" /|\\  | " <<endl;
        cout<<" / \\  | " <<endl;//left leg
        cout<<"      | " <<endl;
        cout<<" ========= " <<endl;
    }

    //as we notice we have hanged all the parts of the char, and they ran out of the misses and we not able to guess the word rightly, they are hanged and hence also lost the game.
}


// Displaying the status of the game so far

void display_status(vector<char>incorrect, string answer){
    int n = incorrect.size(), m = answer.length();

    //printing the incorrect letters guessed 
    cout<<"Incorrect Guesses :"<<endl;
    for(int i=0;i<n;i++){
        cout<<incorrect[i]<<" ";
    }
    cout<<endl;

    //printing the correct letters guessed 
    cout<<"Codeword:"<<endl;
    for(int i=0;i<m;i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;

}

//after game display
void endgame(string answer, string codeword){
    if(answer == codeword){
        cout<<"Hooray! You won the game and saved the character"<<endl;
        cout<<"Congratulations"<<endl;
    }
    else{
        cout<<"Sorry! Better luck next time";
    }
}