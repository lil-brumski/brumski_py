#ifndef BOOL_FUNC
#define BOOL_FUNC

#include <iostream>
#include <cctype>
#include <string>

//Checks if the user's name contains only letters.
bool isLettersOnly(const std::string& input) {
    for (size_t i = 0; i < input.length(); ++i) {
        if (!std::isalpha(input[i]) && input[i] != ' ') {
            return false;
        }
    }
    return true;
}


//Checks if the user enter two or more consecutive spaces as their name.
bool hasConsecutiveSpaces(const std::string& str) {
    for (size_t i = 1; i < str.length(); ++i) {
        if (std::isspace(str[i]) && std::isspace(str[i - 1])) {
            return true;
        }
    }
    return false;
}

#endif