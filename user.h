#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using namespace std;

class user {
public:
    static int globalId;
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
        cout << "user dibuat\n";
    }
    ~user() {
        cout << "user dihapus\n";
    }

    int generateId() {
        globalId = globalId + 1;
        return globalId;
    }
};
#endif