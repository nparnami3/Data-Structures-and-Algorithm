#include <iostream>
#include <string>
using namespace std;

void check(string s, string t) {
    int output = 0;
    if (s.size() < t.size()) {
        output = t.size() - s.size();
    }
    else if (s.size() > t.size()) {
        output = s.size() - t.size();
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                output++;
            }
        }
    }
    cout << output;
}

int main() {
    check("nishtha", "nishthaa");
    return 0;
}
