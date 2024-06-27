#include <iostream>
#include <vector>
#include <vector>
#include <type_traits>
using namespace std;

namespace sort {
    template<class It>
    void select(It begin, It end) {
        for (It i = begin; i != end; ++i) {
            for (It j = i + 1; j != end; ++j) {
                if (*j < *i) {
                    auto t = *j;
                    *j = *i;
                    *i = t;
                }
            }
        }
    }

    template<class It>
    void bubble(It begin, It end) {
        for (It i = begin; i != end; ++i) {
            for (It j = begin; j != begin + (end - i - 1); j++) {
                if (*j > *(j + 1)) {
                    auto t = *j;
                    *j = *(j + 1);
                    *(j + 1) = t;
                }
            }
        }
    }

    template<class It>
    void merge(It begin, It end) {
        int size = end - begin;
        if (size == 1) return;
        auto begin1 = begin;
        auto end1 = begin + size / 2;
        auto begin2 = end1;
        auto end2 = end;
        merge(begin1, end1);
        merge(begin2, end2);
        auto p1 = begin1;
        auto p2 = begin2;
        vector<std::remove_reference_t<decltype(*p1)>> buf;
        while (true) {
            if (*p2 < *p1) {
                buf.push_back(*p2++);
                if (p2 == end2) {
                    for (; p1 != end1; p1++) buf.push_back(*p1);
                    break;
                }
            }
            else {
                buf.push_back(*p1++);
                if (p1 == end1) {
                    for (; p2 != end2; p2++) buf.push_back(*p2);
                    break;
                }
            }
        }
        for (auto p = begin, q = buf.begin(); p != end; ++p, ++q)
            *p = *q;
    }

    template<class It>
    void quick(It begin, It end) {
        if (begin >= end - 1) return;
        It p = begin;
        It q = end - 1;
        auto r = *begin;
        while (p < q) {
            for (; p != q; p++) {
                if (r < *p) break;
            }
            for (; q != p; q--) {
                if (r >= *q) break;
            }
            swap(*p, *q);
        }
        swap(*begin, *(q - 1));
        quick(begin, q);
        quick(q, end);
    }
}
#include <algorithm>
using namespace std;
using namespace sort;

int main() {
    string sentense;
    char buf[5099 + 1000];
    cin.getline(buf, 6099);
    sentense = buf;
    sentense += ' ';
    vector<string> words;
    string cur = "";
    for (char c : sentense) {
        if (c == ' ') {
            if (cur != "") {
                if (find(words.begin(), words.end(), cur) == words.end())
                    words.push_back(cur);
                cur = "";
            }
        }
        else cur += c;
    }
    merge(words.begin(), words.end());
    for (string i : words) cout << i << endl;
    return 0;
}