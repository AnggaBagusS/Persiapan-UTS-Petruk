#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char data[8][100] = {"1234567890ABS",
						"1234567890ABS",
						"1234567890ABS",
						"1234567890ABS",
						"1234567890ABS",};
	char *endPtr;
	for(int i = 0; i < 5; i++){
		double value = strtod(data[i], &endPtr);
		cout << "Nama : " << endPtr << endl;
		cout << "Kelas : " << value << endl;
		cout << endl;
	}
}
