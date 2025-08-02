#include<iostream>
using namespace std;
 
int linearSearch(int a[], int n, int x);
 
int main() {
    	int a[] = {1, 22, 3, 10, 63};
	int n=5;
    	cout << "Day da cho: " << endl;
    for (int i = 0; i < n; i++){
    	cout << a[i] << "\t";	
	}
    int x;
    cout << "\nNhap phan tu can tim: ";
    cin >> x;
    int result = linearSearch(arr, n, x);
    if (result != -1) {
        cout << "Phan tu " << x << " duoc tim thay tai vi tri: " << result << endl;
    } else {
        cout << "Khong tim thay phan tu " << x << " trong mang" << endl;
    }
    return 0;
}
int linearSearch(int arr[], int n, int x) {
     //Duyet qua tung phan tu cua mang
    for (int i = 0; i < n; i++) {
         //Kiem tra neu phan tu có giá tri bang x
        if (arr[i] == x) {
            return i;   //Tra ve chi so cua phan tu duoc tim thay
        }
    }
     //Neu không tìm thay, tra ve -1
    return -1;
}
