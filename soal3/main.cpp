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
