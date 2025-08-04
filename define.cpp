#include <iostream>
#include <iomanip>
#include <utility> // de dùng pair

using namespace std;

// dinh nghia tên moi bang #define
#define songuyen int
#define ll long long
#define sothuc double
#define dungsai bool
#define ii pair<int, int>

int main() {
    songuyen a = 1000;
    ll b = 2828282828282;
    sothuc c = 3.1239;
    dungsai check = true;
    ii p = {100, 200};

    cout << a << " " << b << endl;
    cout << fixed << setprecision(2) << c << endl;
    cout << boolalpha << check << endl;
    cout << p.first << " " << p.second << endl;

    return 0;
}

