#include "Administrators.h"
void Administrators:: ReadFile(ifstream& FileIn) {
    User::ReadFile(FileIn);
}
void Administrators:: CreateFile(ofstream& FileOut, char* FileName) {
    User::CreateFile(FileOut, FileName);
}
bool Administrators:: operator ==(Administrators a) {
    return a.getUsername() + a.getPassword() == getUsername() + getPassword();
}