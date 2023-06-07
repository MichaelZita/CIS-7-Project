#include <iostream>
#include <cctype>

using std::string, std::cout, std::endl, std::cin;

string make_key(string, string);
string encrypt(string, string);
string decrypt(string, string);

int main(){

    string key, plaintext, encryption, decryption;

    key = make_key(key, plaintext);
    encryption = encrypt(key, plaintext);
    decryption = decrypt(key, encryption);

    return 0;

}

string make_key(string key, string plaintext){

    string new_key = "";

    for(int i = 0; i < plaintext.length(); i++){

        new_key = new_key + key[i%key.length()];

    }

    cout << new_key << endl;

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