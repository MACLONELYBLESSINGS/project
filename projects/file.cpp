#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

string readFileData(const string& fileName) {
    ifstream file(fileName);
    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

int countVowels(const string& data) {
    int vowels = 0;
    for (char ch : data) {
        switch(tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            default:
                break;
        }
    }
    return vowels;
}

int countWords(const string& data) {
    stringstream ss(data);
    string word;
    int wordCount = 0;
    while (ss >> word) wordCount++;
    return wordCount;
}

string reverseString(const string& data) {
    string reversed(data.rbegin(), data.rend());
    return reversed;
}

string capitalizeSecondLetter(string data) {
    bool capitalizeNext = false;
    for (char& ch : data) {
        if (isspace(ch)) {
            capitalizeNext = true;
        } else if (capitalizeNext && isalpha(ch)) {
            ch = toupper(ch);
            capitalizeNext = false;
        }
    }
    return data;
}

int main() {
    string fileData = readFileData("textfile.txt");

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;

    string reversedData = reverseString(fileData);
    cout << "Reversed statement: " << reversedData << endl;

    string capitalizedData = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letters: " << capitalizedData << endl;

    return 0;
}
