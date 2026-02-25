/*
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. You may distribute it under the terms of the MIT license.
*/

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string line;

    std::getline(std::cin, line);
    std::stringstream ss(line);
    std::vector<std::string> token;
    std::string word;

    /* While there is no space, read a word, then add it into the token list, when a new space
    is found, make a new token containing the next word */
    while (ss >> word) {
        token.push_back(word);
    }

    for (int i = 0; i < token.size(); i++) {
        std::cout << token[i] << '\n';
    }
}