#include "SLL.h"

int main() {
    List MAH;
    Create_List(MAH);

    // Input data pertama
    infotype data1;
    cout << "Masukkan Flight Number pertama: "; cin >> data1.flightNumber;
    cout << "Masukkan Departure City pertama: "; cin >> data1.departureCity;
    cout << "Masukkan Arrival City pertama: "; cin >> data1.arrivalCity;
    cout << "Masukkan Arrival Time pertama: "; cin >> data1.arrivalTime;

    adr p1 = New_Elemen(data1);
    Insert_First(MAH, p1);

    // Input data kedua
    infotype data2;
    cout << "Masukkan Flight Number kedua: "; cin >> data2.flightNumber;
    cout << "Masukkan Departure City kedua: "; cin >> data2.departureCity;
    cout << "Masukkan Arrival City kedua: "; cin >> data2.arrivalCity;
    cout << "Masukkan Arrival Time kedua: "; cin >> data2.arrivalTime;

    adr p2 = New_Elemen(data2);
    Insert_Last(MAH, p2);

    // Input data ketiga
    infotype data3;
    cout << "Masukkan Flight Number ketiga: "; cin >> data3.flightNumber;
    cout << "Masukkan Departure City ketiga: "; cin >> data3.departureCity;
    cout << "Masukkan Arrival City ketiga: "; cin >> data3.arrivalCity;
    cout << "Masukkan Arrival Time ketiga: "; cin >> data3.arrivalTime;

    adr p3 = New_Elemen(data3);
    Insert_First(MAH, p3);

    // Input data keempat
    infotype data4;
    cout << "Masukkan Flight Number keempat: "; cin >> data4.flightNumber;
    cout << "Masukkan Departure City keempat: "; cin >> data4.departureCity;
    cout << "Masukkan Arrival City keempat: "; cin >> data4.arrivalCity;
    cout << "Masukkan Arrival Time keempat: "; cin >> data4.arrivalTime;

    adr p4 = New_Elemen(data4);
    Insert_Last(MAH, p4);

    // Input data kelima
    infotype data5;
    cout << "Masukkan Flight Number kelima: "; cin >> data5.flightNumber;
    cout << "Masukkan Departure City kelima: "; cin >> data5.departureCity;
    cout << "Masukkan Arrival City kelima: "; cin >> data5.arrivalCity;
    cout << "Masukkan Arrival Time kelima: "; cin >> data5.arrivalTime;

    adr p5 = New_Elemen(data5);
    Insert_After(MAH, p4, p5);

    // Input data keenam
    infotype data6;
    cout << "Masukkan Flight Number keenam: "; cin >> data6.flightNumber;
    cout << "Masukkan Departure City keenam: "; cin >> data6.departureCity;
    cout << "Masukkan Arrival City keenam: "; cin >> data6.arrivalCity;
    cout << "Masukkan Arrival Time keenam: "; cin >> data6.arrivalTime;

    adr p6 = New_Elemen(data6);
    Insert_After(MAH, p4, p6);

    // Tampilkan list
    Show(MAH);

    // Delete After data kedua
    Delete_After(MAH, p1, p2);

    // Delete After data keenam jika tidak null
    if (p6 != nullptr) {
        Delete_After(MAH, p5, p6);
    }

    // Sort list berdasarkan Flight Number
    SortByFlightNumber(MAH);

    // Tampilkan list lagi setelah pengurutan
    Show(MAH);

    return 0;
}
