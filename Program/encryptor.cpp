#include <string>
std::string encryptDecrypt(std::string toEncrypt) {
    char key[3] = {'K','C','Q'};
    std::string output = toEncrypt;
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key)/sizeof(char))];
    return output;
}

