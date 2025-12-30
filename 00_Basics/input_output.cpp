#include <iostream>
using namespace std;

int main() {
    /*-----take integer input-----*/
    int number;
    cout<<"Enter a Integer : ";
    cin>> number;
    //if user enter a invalid number
    if(cin.fail()){
        cout<<"Invalid Input ! Please enter a valid integer input.\n";
    }
    //ouput
    cout<<"You entered number : "<< number <<endl;

    /*-----take character input------*/
    int character;
    cout<<"Enter a character : ";
    cin>> character;
    //if user enter a invalid character
    if(cin.fail()){
        cout<<"Invalid Input ! Please enter a valid character input.\n";
    }
    //ouput
    cout<<"You entered character : "<< character <<endl;

    /*-----take word input------*/
    string word;
    cout<<"Enter a word : ";
    cin>> word;
    //if user enter a invalid word
    if(cin.fail()){
        cout<<"Invalid Input ! Please enter a valid word input.\n";
    }
    //ouput
    cout<<"You entered word : "<< word <<endl;
    
    /*-----take sentence input------*/
    string sentence;
    cout<<"Enter a sentence : ";
    getline(cin,sentence);
    //if user enter a invalid sentence
    if(cin.fail()){
        cout<<"Invalid Input ! Please enter a valid sentence.\n";
    }
    //ouput
    cout<<"You entered sentence : "<< sentence <<endl;
    
    /*-----take a whole document input------*/
    cin.ignore(); //clear all the sreen
    string document;
    cout<<"Paste all text : ";
    getline(cin,document);
    //if user enter a invalid number
    if(cin.fail()){
        cout<<"Invalid Input ! Please enter a valid document.\n";
    }
    //ouput
    cout<<"You entered document : "<< document <<endl;
    

    return 0;
}