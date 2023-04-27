#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool is_palindrome(string str) {
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

list<string> palindromeList(list<string> wordList) {
    list<string> palindromeList;
    for (string str : wordList) {
        if (is_palindrome(str)) {
            palindromeList.push_back(str);
        }
    }
    return palindromeList;
}

int main() {
    list<string> wordList = {"mom","dad","car","coding"};
    list<string> resultList = palindromeList(wordList); // changed variable name to result_list
    for (string str : resultList) {
        cout << str << " ";
    }
    return 0;
}
