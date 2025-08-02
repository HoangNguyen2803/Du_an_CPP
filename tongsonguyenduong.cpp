#include <iostream>
using namespace std;

const int DEC_10 = 10;

int tongNguyenDuong(int n) {
    int total = 0;
    do {
        total = total + n % DEC_10;  
        n = n / DEC_10;              
    } while (n > 0);
    return total;
}

/**
 * Hàm main
 */
int main() {
    int n;

    
    cout << "Nhap so nguyen duong n = ";
    cin >> n;

    
    if (n <= 0) {
        cout << "Vui long nhap so nguyen duong lon hon 0!" << endl;
        return 1; 
    }

    
    cout << "Tong cac chu so cua " << n << " la: " << tongNguyenDuong(n) << endl;

    return 0;
}

