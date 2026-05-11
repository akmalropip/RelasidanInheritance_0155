#ifndef ADMIN_H
#define ADMIN_H
#include <vector>
#include "user.h"
#include "member.h"

class admin : public user {
public:
    vector<member*> daftar_member;

    admin(string pNama, string pEmail) : user(pNama, pEmail) {
        cout << "admin dibuat\n";
    }
    ~admin() {
        cout << "admin dihapus\n";
    }

    void tambahMember(member* pMember) {
        daftar_member.push_back(pMember);
    }

    void showAllMember() {
        cout << "--- Daftar Semua Member dari Admin " << nama << " ---\n";
        for (int i = 0; i < daftar_member.size(); i++) {
            cout << "- " << daftar_member[i]->nama << " (Status: " << daftar_member[i]->status << ")\n";
        }
        cout << "\n";
    }

    void toggleActivationMember(member* pMember) {
        if (pMember->status == "Aktif") {
            pMember->status = "Nonaktif";
        } else {
            pMember->status = "Aktif";
        }
        cout << "Status dari " << pMember->nama << " telah diubah menjadi " << pMember->status << "\n\n";
    }
};
#endif