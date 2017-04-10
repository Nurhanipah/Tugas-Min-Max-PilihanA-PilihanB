#include<iostream>
#include<conio.h>

using namespace std;

 // prototype
 void input();
 void pilihanA();
 void pilihanB();

 // variabel global
 int x, bil, pilihan;
 int total=1;

 int main(){
   int min, max;
	 char ulang;
	 do{
	  cout <<"-------------------------------------"<<endl;
	  cout <<"1. Menentukan Nilai Minimalya   :"<<endl;
	  cout <<"2. Menentukan Nilai Maksimalnya :"<<endl;
	  cout <<"-------------------------------------"<<endl;

	  //menentukan pilihan
	  cout<<"Masukan Pilihan Anda : " ;
	  cin>>pilihan;
	  cout<<endl;
	  cout <<"-------------------------------"<< endl;

		if (pilihan==1){
			pilihanA();
			}
		else if(pilihan==2){
			pilihanB();  
			}
		else{

			cout<< " Maaf Pilihan Tidak Tersedia" << endl;
			}
	 cout<<endl;
	 cout<<endl;
     cout <<"----------------------------------"<<endl;
	 cout<<endl;
	 cout <<" Kembali Ke Menu ? [Y/T]: ";
	 cin>>ulang;
		 }
	 while (ulang=='Y' || ulang=='y');


 }
  // nilai minimal
  void pilihanA(){

		 int x, min, bil; 

		 cout <<endl;
		 cout <<endl;
		 cout <<"Mencari Nilai Minimal"<<endl;
		 cout <<"================================="<<endl;
		 cout <<"Masukan Banyak Input Nilai :";
		 cin>>x;
		 cout<<endl;
		 for(int i=1;i<=x;i++)
		 {
			 cout <<"Input Nilai ="; // input nilai
			 cin>>bil;
			 if(i==1){
				 min = bil;
			 }
			 else if(bil<min)
			 {
				 min=bil;
				 total=1;
			 }
       else if(bil>min)
			 {}
			 else if(min=bil)
			 {
				total++;
			 }
			 else {}
		 }


		 cout<<endl;
		 cout <<"Nilai Minimalnya Adalah :"<<min<<endl;
		 cout <<" Jumlah Nilai Minimalnya adalah : " << total <<endl;

 }


 // nilai maksimal
 void pilihanB(){
		 int x, max, bil;
		 cout <<endl;
		 cout <<endl;
		 cout <<"Mencari Nilai Maksimal"<<endl;
		 cout <<"================================="<<endl;
		 cout <<"Masukan Banyak Input Nilai :";
		 cin>>x;
		 cout<<endl;
		 for(int i=1;i<=x;i++)
		 {
			 cout <<"Input Nilai =";
			 cin>>bil;
			 if (i==1){
				 max = bil;
			 }
			 else if(bil>max)
			 {
				 max=bil;
				 total=1;
       }
       else if(bil<max)
       {}
       else if(max=bil)
			 {
				total++;
			 }
			 else {}

		 }

		 cout<<endl;
		 cout <<"Nilai Maksimalnya Adalah :"<<max<<endl;
		 cout <<" Jumlah Nilai Maksimalnya adalah : " << total <<endl;


 }
