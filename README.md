# praktikum9

**soal 1 : menentukan nilai maksimum dan minimum dengan array**
````
penjelasan:
- mulai
- definisikan variabel
- input data matrik
- mencari nilai maks dan min dengan rumus perulangan
	a) jika a<=5 &
	b) jika a > n
- selesai
````
**berikut programnya:**
````
#include<iostream>

using namespace std;

int main()
{
   //deklarasi
    int nilai[3],a,min,maks;

   //input-output array
    for(a=1;a<=5;a++){
   cout<<"Masukkan nilai ke-"<<a<<" : ";
   cin>>nilai[a];
    }

   //proses looping array
   min = nilai[1];
   maks = nilai[1];
   for(a=1;a<=5;a++){
   if(nilai[a] < min){
   min = nilai[a];
   } else if(nilai[a] > maks){
   maks = nilai[a];
   }
   }

   //output minimum dan maksimum
cout<<"\nnilai minimum adalah : "<<min<<endl;
cout<<"\nnilai maksimum adalah : "<<maks<<endl;

return 0;
}
````
hasilnya:

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/hasil_soal1.png

flowchartnya:

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/flowchart_soal1.jpg

**soal 2 : menentukan modus dengan array**
````
penjelasan :
- mulai
- definisikan variabel
- masukan data 
- melakukan perulangan
- input jika (x==0) bernilai benar tidak ada modus dan jika salah maka ada modus
- masukan rumus int c=0;c<x;c++
- maka tercetak modus
-selesai
````
**berikut programnya:**
````
#include <iostream>
#include<conio.h>

using namespace std;

int x;
int findmod(float bil[], int n, float mod[])
{
int total[100];
int k=1;
x=0;
//untuk mengurutkan secara ascending
for(int c=0;c<n;c++)
{
for(int i=(n-1);i>=0;i--)
{
if(bil[i]<bil[i-1])
{
int temp;
temp=bil[i];
bil[i]=bil[i-1];
bil[i-1]=temp;
}
}
}
//menghitung berapa kali muncul tiap angka
for(int c=0;c<n;c++)
{
total[c]=0;
for(int i=0;i<n;i++)
{
if(bil[c]==bil[i])
{
total[c]++;
}
}
}
//menentukan nilai yang paling sering muncul
for(int c=0;c<n;c++)
{
if(total[c]>k)
{
k=total[c];
}
}
//jika modus lebih dari satu
for(int c=0;c<n;c++)
{
if(x==0)
mod[x]=0;
else
mod[x]=mod[x-1];
if(total[c]==k)
{
if(bil[c]!=mod[x])
{
mod[x]=bil[c];
x++;
}
}
}

//Jika Semua angka muncul sama banyak
int z=0;
for(int c=0;c<n;c++)
{
if(total[c]==k)
{
z++;
}
}
if(z==n)
{
x=0;
}
}
int main()
{
int n;
float bil[100];
float mod[100];
cout<<"=================="<<endl;;
cout<<"Menentukan MODUS"<<endl;
cout<<"=================="<<endl;
cout<<"\nBanyak data N : ";cin>>n;
for(int c=0;c<n;c++)
{
cout<<"Nilai "<<(c+1)<<" : ";cin>>bil[c];
}
cout<<endl;
findmod(bil,n,mod);
if (x==0)
cout<<"Tidak Ada Modus!"<<endl;
else
{
cout<<"Modus : ";
for(int c=0;c<x;c++)
{
cout<<mod[c]<<" ";
}
}
getch();
}
````
**hasilnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/hasil_soal2.png

**flowchartnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/flowchart_soal2.jpg

**soal 3 : perkalian 2 buah matriks dengan array**
````
penjelasan :
- mulai
- definisikan variabel
- masukan data matriks 1 ,matriks 2
- hasil matriks 3 = matriks1 x matriks2
- selesai
````
**berikut programnya:**
````
#include<iostream>
#include<conio.h>

using namespace std;

main(){
int matrik1[100][100];
int matrik2[100][100];
int matrik3[100][100];
int baris1,kolom1,baris2,kolom2;
int a,b,c;
cout<<"===PERKALIAN 2 BUAH MATRIKS==="<<endl;
cout<<"\n----------Matriks Pertama-----------"<<endl;
cout<<"Masukan Jumlah Baris di Matriks pertama :";
cin>>baris1;
cout<<"Masukan Jumlah Kolom di Mtriks pertama  :";
cin>>kolom1;
cout<<"\n------------------------------------"<<endl;
for(a=0;a<baris1;a++){
for(b=0;b<kolom1;b++){
cout<<"Masukan data =";
cin>>matrik1[a][b];
}
cout<<endl;
}

cout<<endl<<"----------Matriks Kedua---------"<<endl;
cout<<"Masukan Jumlah Baris di Matriks kedua  :";
cin>>baris2;
cout<<"Masukan Jumlah Kolom di Matriks kedua  :";
cin>>kolom2;
cout<<"\n====================================="<<endl;
for(a=0;a<baris2;a++){
for(b=0;b<kolom2;b++){
cout<<"Masukan data =";
cin>>matrik2[a][b];
}
cout<<endl;
}
cout<<endl<<"Hasil Matriks 1"<<endl;
cout<<"\n====================================="<<endl;
for(a=0;a<baris1;a++){
for(b=0;b<kolom1;b++){
cout<<matrik1[a][b]<<" ";
}
cout<<endl;
}
cout<<endl<<"Hasil Matriks 2"<<endl;
cout<<"======================================="<<endl;
for(a=0;a<baris2;a++){
for(b=0;b<kolom2;b++){
cout<<matrik2[a][b]<<" ";
}
cout<<endl;
}

for(a=0;a<baris1;a++){
       for(b=0;b<kolom2;b++){
          matrik3[a][b]=0;
             for(c=0;c<kolom1;c++){
            matrik3[a][b]= matrik3[a][b]+matrik1[a][c]* matrik2[c][b];
            }
      }
}
cout<<"Hasil perkalian matriks 1 dan matriks 2 :\n";
cout<<"========================================="<<endl;
    for(a=0;a<baris1;a++){
       for(b=0;b<kolom2;b++){
      cout<<matrik3[a][b]<<" ";
      }
       cout<<endl;
   }

getch();
}
````
**hasilnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/hasil_soal3.png

**flowchartnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/flowchart_soal3.jpg

**soal 4 : program transpose matriks**
````
penjelasan:
- mulai
- definisikan variabel
- masukan data matriks
- cari transpose
	a)buat perulangan dengan rumus i=0;i<baris;i++ &
	b)perulangan dengan rumus j=0;j<kolom;j++
- cetak transpose a [j] [i]
````
**berikut programnya:**
````
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int i, j, k,a[10][10], baris, kolom, m1[10]
[10], m2[10]
[10], hasil[10]
[10];
int main()
{

cout << "Operasi transpose Matrix\n";
do
{
cout << "Jumlah Baris = "; cin>>baris;
cout << "Jumlah Kolom = "; cin>>kolom;
}

while((baris>10)||(kolom>10));
/* do
while(kolom>10);*/
cout<<"\nMatrix A" << endl;
for(i=0;i<baris;i++)
for(j=0;j<kolom;j++)
{
cout <<"data [" << i << "," << j << "] = ";
cin>>a[i][j];
}
cout<<endl<<endl;
cout << "Matriks" << endl;
for(i=0; i< baris; i++){

for(j=0; j<kolom; j++)
cout << setw(4) << a[i][j];
cout << " ";
cout<<endl;
}
cout<<endl<<"Transpose Matriks: "<<endl<<endl;
        for(int i=0;i<baris;i++)
    {
        for(j=0;j<kolom;j++)
    {
        cout<<a[j][i]<<" ";
    }
        cout<<endl<<endl;
    }
getch();
return 0;
}
````
**hasilnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/hasil_soal4.png

**flowchartnya:**

![img]https://raw.githubusercontent.com/RAIS14/praktikum9/master/flowchart_soal4.jpg