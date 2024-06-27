#include <iostream>
#include <string>
#include <vector>
using namespace std;
namespace numbers {
    class bigint {
        private:
        vector<int> data;

        public:

        bigint() {

        }

        bigint(string str) {
            for (auto i = str.rbegin(); i != str.rend(); i++)
                data.push_back(*i-'0');
        }

        bigint(int v) {
            data.push_back(v);
            normalize();
        }

        void print() {
            for (auto i = data.rbegin(); i != data.rend(); i++) cout << *i;
        }

        void normalize() {
            while(data.size() > 0 && *data.rbegin() == 0)
                data.pop_back();
            for (int i = 0; i < data.size(); i++){
                if (data[i] >= 10){
                    if (i+1 < data.size()) data[i+1] += data[i]/10;
                    else data.push_back(data[i]/10);
                    data[i] %= 10;
                }
            }
        }

        void normalize1() {
            for (int i = 0; i < data.size(); i++){
                if (data[i] < 0){
                    data[i+1] -= 1;
                    data[i] += 10;
                }
            }
            while(data.size() > 0 && *data.rbegin() == 0)
                data.pop_back();
        }

        bigint operator + (bigint b) {
            bigint c = {0};
            c.data = data;
            for (int i = 0; i < b.data.size(); i++){
                if (i >= c.data.size()) c.data.push_back(b.data[i]);
                else c.data[i] += b.data[i];
            }
            c.normalize();
            return c;
        }
        bigint operator - (bigint b){
            bigint c = {0};
            c.data = data;
            for (int i = 0; i < b.data.size(); i++){
                c.data[i] = c.data[i]-b.data[i];
            }
            c.normalize1();
            return c;
        }
        bigint operator * (bigint b){
            bigint c;
            c.data = vector<int>(data.size() + b.data.size()-1);
            for (int i = 0; i < data.size(); i++){
                for (int j = 0; j < b.data.size(); j++){
                    //if (j >= data.size()) buf.data.push_back(data[i])
                    c.data[i+j] += data[i] * b.data[j];
                }
            }
            c.normalize();
            return c;
        }
        int compare(bigint b) {
            if (data.size() > b.data.size()) return 1;
            else if (data.size() < b.data.size()) return -1;
            for (int i = data.size()-1; i >= 0; i--){
                if (data[i] > b.data[i]) return 1;
                else if(data[i] < b.data[i]) return -1;
            }
            return 0;
        }
        bool operator < (bigint b) {
            return compare(b) == -1;
        }
        bool operator > (bigint b){
            return compare(b) == 1;
        }
        bool operator <= (bigint b){
            return compare(b) <= 0;
        }
        bool operator >= (bigint b){
            return compare(b) >= 0;
        }
        bool operator == (bigint b){
            return compare(b) == 0;
        }
        bigint operator / (bigint b){
            bigint q, r;
            div(b, q, r);
            return q;
        }
        bigint operator % (bigint b){
            bigint q, r;
            div(b, q, r);
            return r;
        }
        void div(bigint b, bigint& q, bigint& r) {
            r = *this;
            for (int k = r.data.size()-1; k >= 0; k--){
                int ak = find(r, k, b);
                q.data.push_back(ak);
                r = r - bigint(ak) * b * pow1(10, k);
            }
            q.data = vector<int>(q.data.rbegin(), q.data.rend());
            q.normalize();
        }

        int find(bigint r, int k, bigint b){
            bigint a = pow1(10, k);
            for (int ak = 0; ak < 10; ak++){
                if (bigint(ak+1)*a*b > r){
                    return ak;
                }
            }
        }

        bigint pow1(bigint m, int k){
            if (k == 0) return 1;
            return pow1(m, k-1) * m;
        }
    };
};