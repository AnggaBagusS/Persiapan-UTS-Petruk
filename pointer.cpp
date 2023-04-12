#include <iostream>
using namespace std;

int main(){
	int arr[5] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	
	for(int i = 0; i < 5; i++){
		cout << "Value of arr[" << i << "] = " << ptr << endl;
		ptr++; // Menunjuk ke alamat memory berikutnya
	}
}
