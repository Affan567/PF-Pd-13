#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string missing(string inp);
void append(string word, string missing);

int main() {
    string input;
    cout << "Enter a word: ";
    getline(cin, input);
    string missings = missing(input);
    append(input, missings);
    return 0;
}

string missing(string input) {
    string missing = "";
    for(int idx = 0; idx < 26; idx++) {
        char count = char(97 + idx);
        bool found = false;
        for(int x = 0; x < input.length(); x++) {
            if(count == input[x]) {
                found = true;
                break;
            }
        }
        if(!found) {
            missing = missing + count;
        }
    }
    return missing;
}

void append(string input, string missing) {
    fstream file;
    file.open("alphabets.txt", ios::out);
    file << input << endl;
    file << missing << endl;
    file.close();
    cout << "Remaining letters: " << missing << endl;
}