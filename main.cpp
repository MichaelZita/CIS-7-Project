#include <iostream>
#include <cctype>

using std::string, std::cout, std::endl, std::cin;

string make_key(string, string);
string encrypt(string, string);
string decrypt(string, string);

int main(){

    string key, input, e_key, d_key;
    cin >> key;
    cin >> input;

    key = make_key(key, input);
    e_key = encrypt(key, input);

    return 0;

}

string make_key(string key, string input){

    string new_key = "";

    for(int i = 0; i < input.length(); i++){

        new_key = new_key + key[i%key.length()];

    }

    cout << new_key << endl;

    return new_key;
}

string encrypt(string key, string input){


    string encrypt_key = "";

    char temp;

    for(int i = 0; i < input.length(); i++){

        //key = tolower(key[i]);
        //input = tolower(input[i]);
        temp = ((tolower(input[i]) + tolower(key[i]) - 12)%26) + 65;

        //cout << (int)temp << temp << " ";
        encrypt_key+=temp;
    }
    //cout << endl;

    return encrypt_key;

}

string decrypt(string key, string input){





    
}