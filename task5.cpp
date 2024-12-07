#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

string convert_morse(char letter);
string encrypt_morse(string text);

main() 
{
    string userInput;
    cout << "Enter a string for encryption: ";
    getline(cin, userInput);
    string result = encrypt_morse(userInput);
    cout << "Morse Code: " << result << endl;

    fstream outputFile;
    outputFile.open("morse_output.txt", ios::app);
    outputFile << userInput << endl;
    outputFile << result << endl;
    outputFile.close();
}

string convert_morse(char letter) {
    string morseSymbols[26] = {
        ".-",    "-...",  "-.-.",  "-..",   ".",     "..-.",  "--.",   "....",  "..",    ".---",
        "-.-",   ".-..",  "--",    "-.",    "---",   ".--.",  "--.-",  ".-.",   "...",   "-",     
        "..-",   "...-",  ".--",   "-..-",  "-.--",  "--.."
    };
    letter = toupper(letter);
    if (letter >= 'A' && letter <= 'Z') {
        return morseSymbols[letter - 'A'];
    }
    else if (letter == ' ') {
        return "-.-.-.-";
    }
    else {
        return "";
    }
}

string encrypt_morse(string text) {
    string morse_text = "";
    for(int i = 0; i < text.length(); i++) {
        string morse_equ = convert_morse(text[i]);
        if(morse_equ != "") 
        {
            morse_text = morse_text + morse_equ + " ";
        }
    }
    return morse_text;
}