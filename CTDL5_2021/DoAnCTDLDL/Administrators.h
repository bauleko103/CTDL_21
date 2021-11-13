#pragma once
#include "User.h"

class Administrators : public User
{
public:
    void ReadFile(ifstream& FileIn);
    void CreateFile(ofstream& FileOut, char* FileName);
    bool operator ==(Administrators a);
    Administrators(string _Username = "", string _Password = "111111", string _Name = "", string _Address = "", string _Phone = "", string _Email = "")
        :User(_Username, _Password, _Name, _Address, _Phone, _Password) {}
};