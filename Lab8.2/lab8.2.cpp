#include <iostream>
#include <string>

using namespace std;

string removeSpacesBeforePunctuation(const string& str) {
    string result;
    string punctuations = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    if (!str.empty()) {
        result += str[0];
    }

    for (size_t i = 1; i < str.length(); ++i) {
        char currentChar = str[i];
        bool isPunctuation = punctuations.find(currentChar) != string::npos;
        bool prevIsSpace = str[i - 1] == ' ';

        if (isPunctuation && prevIsSpace && !result.empty()) {
            result.pop_back();
            result += currentChar;
        }
        else if (!(isPunctuation && prevIsSpace)) {
            result += currentChar;
        }
    }

    return result;
}

int main() {
    string input;
    cout << "Enter string:" << endl;
    getline(cin, input);

    string result = removeSpacesBeforePunctuation(input);
    cout << "Result string:" << result << endl;

    return 0;
}