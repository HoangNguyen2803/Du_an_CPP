#include <iostream>
using namespace std;

#define PI 3.14
#define INF 1000000000
#define TRUE 1
#define FALSE 0
#define mod 1000000007

int main() {
    double r = 5;
    double area = PI * r * r;
    int a = INF;
    bool check = TRUE;

    cout << "Dien tich hinh tron: " << area << endl;
    cout << "gia tri lon: " << a << endl;
    cout << "kiem tra: " << boolalpha << check << endl;

    return 0;
}

