#ifndef MEMBER_H
#define MEMBER_H
#include "user.h"

class member : public user {
public:
    string status;

    member(string pNama, string pEmail, string pStatus) : user(pNama, pEmail), status(pStatus) {
        cout << "member dibuat\n";
    }
    ~member() {
        cout << "member dihapus\n";
    }

    void showProfile() {
        cout << "--- Profil Member ---\n";
        cout << "ID     : " << id << "\n";
        cout << "Nama   : " << nama << "\n";
        cout << "Email  : " << email << "\n";
        cout << "Status : " << status << "\n\n";
    }
};
#endif