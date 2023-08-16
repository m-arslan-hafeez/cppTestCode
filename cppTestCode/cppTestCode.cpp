#include <iostream>
#include <fstream>
#include <stdio.h>
#include "EncDecLibrary.h"

using namespace std;
int main()
{

	string user_file, file_extension;
	int user_key, user_choice;

	cout << "For Encryption -> 1 : " << "\n" << "For Encryption -> 2 :" << endl;
	cout << "Your Choice : ";
	cin >> user_choice;

	switch (user_choice) {
	case 1:
		cout << "Enter file name : ";
		cin >> user_file;
		cout << "Enter key for encryption : ";
		cin >> user_key;
		encryptFile(user_file, user_key);
		cout << "File encrypted successfully!";
		break;
	case 2:
		cout << "Enter file name to decrypt: ";
		cin >> user_file;
		cout << "Enter your key for decryption : ";
		cin >> user_key;
		cout << "Enter extension for your file : ";
		cin >> file_extension;
		decryptFile(user_file, user_key, file_extension);
		cout << "File decrypted successfully!";
		break;
	default:
		cout << "Wrong choice please try again!";
	}
	return 0;
}
