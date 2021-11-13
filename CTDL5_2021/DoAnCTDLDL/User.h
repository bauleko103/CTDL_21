#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;
class User
{
protected:
    string Username;
    string Password;

    string Name;
    string Address;
    string Phone;
    string Email;
public:
    string getUsername();
    string getPassword();
    string getName();
    string getAddress();
    string getPhone();
    string getEmail();
    void setUsername(string _Username);
    void setPassword(string _Password);
    void setName(string _Name);
    void setAddress(string _Address);
    void setPhone(string _Phone);
    void setEmail(string _Email);
    User(string _Username = "", string _Password = "111111", string _Name = "", string _Address = "", string _Phone = "", string _Email = "")
    {
        Username = _Username;
        Password = _Password;
        Name = _Name;
        Address = _Address;
        Phone = _Phone;
        Email = _Email;
    }
    User(const User& u) {
        Username = u.Username;
        Password = u.Password;
        Name = u.Name;
        Address = u.Address;
        Phone = u.Phone;
        Email = u.Email;
    }
    ~User() {}
    virtual void ReadFile(ifstream& FileIn) {
        getline(FileIn, Username, ',');
        getline(FileIn, Password);
    }
    virtual void CreateFile(ofstream& FileOut, char*& FileName) {
        string str = (string)FileName;
        string strFile = "G:\\" + str + ".TXT";
        FileName = new char[strFile.length() + 1];
        strcpy(FileName, strFile.c_str());
        if (FileName != NULL)
        {
            FileOut.open(FileName, ios_base::out);
        }
        delete[] FileName;
    }
    virtual void OpenFile(ifstream& FileIn, char*& FileName) {
        string str = (string)FileName;
        string strFile = "G:\\" + str + ".TXT";
        FileName = new char[strFile.length() + 1];
        strcpy(FileName, strFile.c_str());
        if (FileName != NULL)
        {
            FileIn.open(FileName, ios_base::in);
        }
        delete[] FileName;
    }
    virtual void ReadInfomation(ifstream& FileIn) {
        getline(FileIn, Name);
        getline(FileIn, Address);
        getline(FileIn, Phone);
        getline(FileIn, Email);
    }
    virtual void DeleteFile(string FileName) {
        char c = 34;
        string Del = "del ";
        string FilePath1 = "G:\\";
        string FilePath2 = ".txt";
        string strDel = c + Del + FilePath1 + FileName + FilePath2 + c;
        char* ChuoiXoa = new char[strDel.length() + 1];
        strcpy(ChuoiXoa, strDel.c_str());
        system(ChuoiXoa);
    }
    virtual void Input() {
        cin.ignore();
        textcolor(3);
        cout << " Nhap thong tin ca nhan " << endl;
        cout << " Ho ten : ";
        textcolor(15);
        getline(cin, Name);
        textcolor(3);
        cout << " Dia chi: ";
        textcolor(15);
        getline(cin, Address);
        textcolor(3);
        cout << " So dien thoai: ";
        textcolor(15);
        getline(cin, Phone);
        textcolor(3);
        cout << " Dia chi Email: ";
        textcolor(15);
        getline(cin, Email);
    }
};
void textcolor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;

    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
