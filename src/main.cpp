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

std::string decrypt(std::string encrypted_text, std::string key){
    std::string decrypted_text = "";
    for(int i=0; i < encrypted_text.length(); i++){
        int key_index = i % key.length();
        if(std::isupper(encrypted_text[i]))
            decrypted_text += 'A' + ((encrypted_text[i] - 'A') - (key[key_index] - 'A') + 26) % 26;
        else if(std::islower(encrypted_text[i]))
            decrypted_text += 'a' + ((encrypted_text[i] - 'a') - (key[key_index] - 'a') + 26) % 26;
    }
    return decrypted_text;
}
int main(void){
        char choice = '\0';
        std::string original, key, encrypted, decrypted;
    do{
        std::cout << "Vigenere Cypher Program" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "Please type E for Encrypt | D for Decrypt | Anything Else to Exit: ";
        std::cin >> choice;
        choice = toupper(choice);
        switch(choice){
            case 'E':
                std::cout << "Text to be Encrypted: ";
                std::cin >> original;
                std::cout << "Key to Encrypt with: ";
                std::cin >> key;
                encrypted = encrypt(original, key);
                std::cout << "Encrypted Text: " << encrypted << std::endl << std::endl;
                break; 
            case 'D':
                std::cout << "Text to be Decrypted: ";
                std::cin >> original;
                std::cout << "Key to Decrypt with: ";
                std::cin >> key;
                decrypted = decrypt(original, key);
                std::cout << "Decrypted Text: " << decrypted << std::endl << std::endl;
                break; 
        }
    }while(choice == 'E' || choice == 'D');
    return 0;
}