#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> anagrams(std::string word, std::vector<std::string> word_list) {
    std::string sorted_word = word;
    std::transform(sorted_word.begin(), sorted_word.end(), sorted_word.begin(), ::tolower);
    std::sort(sorted_word.begin(), sorted_word.end());

    std::vector<std::string> anagrams;

    for (std::string& w : word_list) {
        std::string sorted_w = w;
        std::transform(sorted_w.begin(), sorted_w.end(), sorted_w.begin(), ::tolower);
        std::sort(sorted_w.begin(), sorted_w.end());

        if (sorted_w == sorted_word) {
            anagrams.push_back(w);
        }
    }

    return anagrams;
}
int main() {
    std::string word = "listen";
    std::vector<std::string> word_list = {"enlist", "pycharm", "inlets", "misery","car"};
    std::vector<std::string> anagram_list = anagrams(word, word_list);

    std::cout << "Anagrams of " << word << ": ";
    for (int i = 0; i < anagram_list.size(); i++) {
        std::cout << anagram_list[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
