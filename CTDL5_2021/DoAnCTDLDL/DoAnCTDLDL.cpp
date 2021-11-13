
#include<iostream>
#include "User.h"
#include "Administrators.cpp"
#include "Employees.h"
#include "thuvien.cpp"
#pragma warning(disable:4996)
#pragma warning(disable:4018)
#pragma warning(disable:6031)

using namespace std;



/**********************************************************
* chen các thư viện cần chạy vào main chính
**********************************************************/





int main() {
    User* ds[100];
    Menu(ds);
    system("pause");
}
