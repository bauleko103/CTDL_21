#pragma once
#include "User.h"

class Employees : public User
{
public:
    void ReadFile(ifstream& FileIn);
    void Input();
    void CreateFile(ofstream& FileOut, char* FileName);
    bool operator ==(Employees a);
    Employees(string _Username = "", string _Password = "111111", string _Name = "", string _Address = "", string _Phone = "", string _Email = "")
        :User(_Username, _Password, _Name, _Address, _Phone, _Password) {}
};