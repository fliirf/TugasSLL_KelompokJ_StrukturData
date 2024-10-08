#ifndef SLL_H
#define SLL_H

#include <iostream>
#include <string>
using namespace std;

// Type definitions
struct FlightInfo {
    int flightNumber;
    string departureCity;
    string arrivalCity;
    string arrivalTime;
};

typedef FlightInfo infotype;
typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

// Primitive Functions and Procedures
void Create_List(List &L);
adr New_Elemen(infotype data);
void Insert_First(List &L, adr p);
void Insert_Last(List &L, adr p);
void Insert_After(List &L, adr prec, adr p);
void Delete_First(List &L, adr &p);
void Delete_Last(List &L, adr &p);
void Delete_After(List &L, adr prec, adr &p);
void Show(List L);
void SortByFlightNumber(List &L);
void SearchByFlightNumber(List L, infotype data);

#endif
