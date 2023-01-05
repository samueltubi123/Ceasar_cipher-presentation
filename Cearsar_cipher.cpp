#include <iostream>
#include <string>

std::string encrypt(const std::string& str, int key)
{
    std::string result = str;

    for (char& c : result)
    {
        c += key;
    }

    return result;
}

std::string decrypt(const std::string& str, int key)
{
    std::string result = str;

    for (char& c : result)
    {
        c -= key;
    }

    return result;
}

using namespace std;

int main()
{
  
    string str;
    cout << "Enter a string: ";
    cin >> str;

    std::cout << "Please choose an operation:" <<std::endl;
    std::cout << "1. Encryption" << std::endl;
    std::cout << "2. Decryption" << std::endl;
    int choice;
    std::cin >> choice;
    
    if (choice == 1){
        //Perform Encryption
    }  else if (choice == 2){
       //Perform Decryption
    }  else {
       std::cout << "Invalid chioce" << std:: endl;
    }
    // Encrypt the message with key 3
    std::string encrypted = encrypt(str, 3);
    std::cout << "Encrypted string: " << encrypted << std::endl;

    // Encrypt the encrypted message with key 4
    encrypted = encrypt(encrypted, 4);
    std::cout << "Double encrypted message: " << encrypted << std::endl;

    // Decrypt the double encrypted message with key 4
    encrypted = decrypt(encrypted, 4);
    std::cout << "Decrypted message: " << encrypted << std::endl;

    // Decrypt the message with key 3
    encrypted = decrypt(encrypted, 3);
    std::cout << "Decrypted message: " << encrypted << std::endl;

    return 0;
}
