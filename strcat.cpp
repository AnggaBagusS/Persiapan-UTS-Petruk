#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char firstName[50] = "Angga";
	char lastName[50] = "Bagus";
	char *fullName = strcat(firstName,lastName);
	cout << fullName;
}
