#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat variabel n

void input()
{ // Procedure Input
while (true)
{
cout << "Masukkan Jumlah Data pada Array :" // Membuat Inputan jumlah element Array
cin >> n; // memanggil variable inputan n

if (n <= 20)
