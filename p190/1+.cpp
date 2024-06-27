#include <string>
#include <iostream>

int main() {
    std::string s1, s2, s3;
    std::cin >> s1 >> s2;
    int n = 0;
    for(auto it1 = s1.rbegin(), it2 = s2.rbegin(); it1 != s1.rend() || it2 != s2.rend();) {
        char v = it1 != s1.rend() ? *it1++ - '0' : 0;
        v += it2 != s2.rend() ? *it2++ - '0' : 0;
        v += n;
        n = v >= 10;
        s3 += '0' + v - 10 * n;
    }
    s3.push_back(n + '0');
    while (*s3.rbegin() == '0') s3.pop_back();
    std::cout << (s3.size() ? std::string(s3.rbegin(), s3.rend()) : "0") << std::endl;
}