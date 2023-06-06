#include <iostream>
#include <vector>

std::string blockCharacters(std::string& s1, std::string& s2, int pos, int t) {
    s1[pos - 1] = '*';
    s2[pos - 1] = '*';
    return s1 + s2;
}

void swapCharacters(std::string& s1, std::string& s2, int pos1, int pos2) {
    std::swap(s1[pos1 - 1], s2[pos2 - 1]);
}

bool areStringsEqual(const std::string& s1, const std::string& s2) {
    int n = s1.length();
    for (int i = 0; i < n; i++) {
        if (s1[i] != '*' && s2[i] != '*' && s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        std::string s1, s2;
        int t, q;
        std::cin >> s1 >> s2 >> t >> q;

        std::string modifiedStrings = s1 + s2;
        while (q--) {
            int queryType;
            std::cin >> queryType;

            if (queryType == 1) {
                int pos;
                std::cin >> pos;
                modifiedStrings = blockCharacters(s1, s2, pos, t);
            } else if (queryType == 2) {
                int str1, pos1, str2, pos2;
                std::cin >> str1 >> pos1 >> str2 >> pos2;

                if (str1 == 1 && str2 == 1) {
                    swapCharacters(s1, s1, pos1, pos2);
                } else if (str1 == 2 && str2 == 2) {
                    swapCharacters(s2, s2, pos1, pos2);
                } else if (str1 == 1 && str2 == 2) {
                    swapCharacters(s1, s2, pos1, pos2);
                } else {
                    swapCharacters(s2, s1, pos1, pos2);
                }
            } else {
                std::cout << (areStringsEqual(s1, s2) ? "YES" : "NO") << std::endl;
            }
        }
    }

    return 0;
}
