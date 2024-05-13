#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool canFormPalindrome(int n, const string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int oddCount = 0;
    for (const auto& pair : freq) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    if (n % 2 == 0) {
        return oddCount == 0;
    } else {
        return oddCount == 1;
    }
}

string rearrangeToPalindrome(int n, const string& s) {
    if (!canFormPalindrome(n, s)) {
        return "NO";
    } else {
        string palindrome = "";
        string middleChar = "";
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        for (const auto& pair : freq) {
            if (pair.second % 2 == 0) {
                palindrome += string(pair.second / 2, pair.first);
            } else {
                middleChar = pair.first;
            }
        }

        return "YES\n" + palindrome + middleChar + palindrome;
    }
}

int main() {
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << rearrangeToPalindrome(n, s) << endl;
    }
    return 0;
}
