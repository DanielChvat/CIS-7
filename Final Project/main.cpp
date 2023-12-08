#include <iostream>
#include <cctype>
#include <string>

std::string encrypt(std::string text, std::string key){
    std::string encrypted_text = "";
    for(int i=0; i < text.length(); i++){
        int key_index = i % key.length();
        if(std::isupper(text[i]))
            encrypted_text += 'A' + ((text[i] - 'A') + (key[key_index] - 'A')) % 26;
        else if(std::islower(text[i]))
            encrypted_text += 'a' + ((text[i] - 'a') + (key[key_index] - 'a')) % 26;
    }
    return encrypted_text;
}

int main(void){
    std::string original, key;
    std::cout << "Text to be Encrypted: ";
    std::cin >> original;
    std::cout << "Key to Encrypt With: ";
    std::cin >> key;
    std::cout << encrypt(original, key) << std::endl;
}