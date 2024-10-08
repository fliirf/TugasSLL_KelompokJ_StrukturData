#include "SLL.h"

// Create List
void Create_List(List &L) {
    L.first = nullptr;
}

// Create New Element
adr New_Elemen(infotype data) {
    adr p = new elmList;
    p->info = data;
    p->next = nullptr;
    return p;
}

// Insert First
void Insert_First(List &L, adr p) {
    if (L.first == nullptr) {
        L.first = p;
    } else {
        p->next = L.first;
        L.first = p;
    }
}

// Insert Last
void Insert_Last(List &L, adr p) {
    if (L.first == nullptr) {
        Insert_First(L, p);
    } else {
        adr q = L.first;
        while (q->next != nullptr) {
            q = q->next;
        }
        q->next = p;
    }
}

// Insert After
void Insert_After(List &L, adr prec, adr p) {
    if (prec != nullptr) {
        p->next = prec->next;
        prec->next = p;
    } else {
        Insert_First(L, p);
    }
}

// Delete First
void Delete_First(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else {
        p = L.first;
        L.first = L.first->next;
        p->next = nullptr;
    }
}

// Delete Last
void Delete_Last(List &L, adr &p) {
    if (L.first == nullptr) {
        p = nullptr;
    } else if (L.first->next == nullptr) {
        p = L.first;
        L.first = nullptr;
    } else {
        adr q = L.first;
        while (q->next->next != nullptr) {
            q = q->next;
        }
        p = q->next;
        q->next = nullptr;
    }
}

// Delete After
void Delete_After(List &L, adr prec, adr &p) {
    if (prec == nullptr || prec->next == nullptr) {
        p = nullptr;
    } else {
        p = prec->next;
        prec->next = p->next;
        p->next = nullptr;
    }
}

// Show List
void Show(List L) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first;
        while (p != nullptr) {
            cout << "Flight Number: " << p->info.flightNumber << endl;
            cout << "Departure City: " << p->info.departureCity << endl;
            cout << "Arrival City: " << p->info.arrivalCity << endl;
            cout << "Arrival Time: " << p->info.arrivalTime << endl;
            p = p->next;
        }
    }
}

// Sort List by Flight Number
void SortByFlightNumber(List &L) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first->next;
        while (p != nullptr) {
            infotype currentInfo = p->info;
            adr q = L.first;
            while (q != p && q->info.flightNumber < currentInfo.flightNumber) {
                q = q->next;
            }
            while (q != p) {
                infotype temp = q->info;
                q->info = currentInfo;
                currentInfo = temp;
                q = q->next;
            }
            p = p->next;
        }
    }
}

// Search List by Flight Number
void SearchByFlightNumber(List L, infotype data) {
    if (L.first == nullptr) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first;
        bool found = false;
        while (p != nullptr && !found) {
            if (p->info.flightNumber == data.flightNumber) {
                found = true;
                cout << "Data penerbangan ditemukan:" << endl;
                cout << "Flight Number: " << p->info.flightNumber << endl;
                cout << "Departure City: " << p->info.departureCity << endl;
                cout << "Arrival City: " << p->info.arrivalCity << endl;
                cout << "Arrival Time: " << p->info.arrivalTime << endl;
            } else {
                p = p->next;
            }
        }
        if (!found) {
            cout << "Flight tidak ditemukan" << endl;
        }
    }
}
