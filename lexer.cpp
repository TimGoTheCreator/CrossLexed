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