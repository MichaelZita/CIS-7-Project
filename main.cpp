#include <iostream>
#include <cctype>

using std::string, std::cout, std::endl, std::cin;

string make_key(string, string);
string encrypt(string, string);
string decrypt(string, string);

int main(){

    string key, plaintext, encryption, decryption;
    int menu;

    do{
        cout << "Welcome to Michael Zita's Vigenere Cipher Program!" << endl;
        cout << "Please choose an option to continue. " << endl;
        cout << "0. Exit " << endl;
        cout << "1. Encrypt a word " << endl;
        cout << "2. Decrypt a word " << endl;
        cin >> menu;

        switch(menu){
            case 0:
                cout << "Thank you for using the program, have a great day! " << endl;
                break;
            case 1:{
                cout << "Input the plaintext to be encrypted : ";
                cin >> plaintext;

                cout << "\nInput the keyword to be used: ";
                cin >> key;

                key = make_key(key, plaintext);
                encryption = encrypt(key, plaintext);

                cout << "\nEncrypted ciphertext: " << encryption << endl;
                cout << endl;
            }
            break;
            case 2:{
                cout << "Input the ciphertext to be decrypted : ";
                cin >> plaintext;

                cout << "\nInput the keyword used for encryption: ";
                cin >> key;

                key = make_key(key, plaintext);
                decryption = decrypt(key, plaintext);

                cout << "\nDecrypted ciphertext: " << decryption << endl;
                cout << endl;
            }
            break;
            default:
                cout << "Not an option!" << endl;
        }

    }while(menu < 3 && menu > 0);


    return 0;

}

string make_key(string key, string plaintext){

    string new_key = "";

    for(int i = 0; i < plaintext.length(); i++){

        new_key = new_key + key[i%key.length()];

    }

    return new_key;
}

string encrypt(string key, string plaintext){


    string encrypt_key = "";

    char temp;

    for(int i = 0; i < plaintext.length(); i++){

        //key = tolower(key[i]);
        //plaintext = tolower(plaintext[i]);
        temp = ((tolower(plaintext[i]) + tolower(key[i]) - 12)%26) + 65;

        //cout << (int)temp << temp << " ";
        encrypt_key+=temp;
    }
    //cout << endl;

    return encrypt_key;

}

string decrypt(string key, string encryption){

    string decrypt_key = "";

    char temp;

    for(int i = 0; i < encryption.length(); i++){

        temp = (tolower(encryption[i]) - tolower(key[i]) + 26)%26 + 65;
        //cout << temp << " " ;

        decrypt_key+=temp;
    }

    return decrypt_key;

}