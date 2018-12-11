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
