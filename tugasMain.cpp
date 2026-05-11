#include <iostream>
using namespace std;

// Menggabungkan file .h yang sudah dibuat
#include "user.h"
#include "member.h"
#include "admin.h"

// Inisialisasi nilai variabel static diletakkan di luar class (di dalam file tugasMain)
int user::globalId = 0; 

int main() {
    admin* varAdmin = new admin("Rafif (Admin)", "rafif@admin.com");
    cout << "\n";

    member* varMember1 = new member("Tabur", "tabur@mail.com", "Aktif");
    member* varMember2 = new member("Jera", "jera@mail.com", "Nonaktif");
    cout << "\n";

    varAdmin->tambahMember(varMember1);
    varAdmin->tambahMember(varMember2);

    varMember1->showProfile();
    varAdmin->showAllMember();
    varAdmin->toggleActivationMember(varMember1);
    varMember1->showProfile();

    delete varMember1;
    delete varMember2;
    delete varAdmin;

    return 0;
}