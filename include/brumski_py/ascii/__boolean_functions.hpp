#pragma once

#include <iostream>
#include <cctype>
#include <string>

//Checks if the user's name contains only letters.
bool isLettersOnly(const std::string& input);

//Checks if the user enter two or more consecutive spaces as their name.
bool hasConsecutiveSpaces(const std::string& str);