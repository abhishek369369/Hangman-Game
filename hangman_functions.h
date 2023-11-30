//this is the file containing all the header, basically a header file (.h) 
#include<iostream>
#include<vector>
using namespace std;
//----------------declaring functions------------------//

// Greet function
void greet();

void display_misses(int misses);

void display_status(vector<char>incorrect , string answer);

void endgame(string answer, string codeword);