#include "Employees.h"
void Employees:: ReadFile(ifstream& FileIn) {
    User::ReadFile(FileIn);
}
void Employees::Input() {
    User::Input();
}
void Employees::CreateFile(ofstream& FileOut, char* FileName) {
    User::CreateFile(FileOut, FileName);
}
bool Employees:: operator ==(Employees a) {
    return a.getUsername() + a.getPassword() == getUsername() + getPassword();
}