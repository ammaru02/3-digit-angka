#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;
string digit(int d);
int main(){
	int angka,d1,d2,d3;
	string angka1,angka2,angka3;
	char ulang;
	ulang='Y';	
	while(ulang=='Y'){
	do{ 
	cout<<"================================\n";
	cout<<"212010 Muhammad Ammar Usman"<<endl;
	cout<<"================================\n";	
	cout<<"Masukkan 3 Digit Angka"<<endl; 
	cout<<"Negatif Berarti Exit : ";
	cin>>angka;
	}while (angka>999);
	if(angka>=0){
	
	d3=angka/100;
	d2=(angka/10)%10;
	d1=angka%10;
	//seratus
	if(d3==1 && d2==0 && d1==0){
		angka3="Seratus";
		angka2="";
		angka1="";
	}else if(d3==1 && d2==1 && d1==0){
		angka3="Seratus";
		angka2="Sepuluh";
		angka1="";
	}else if(d3==1 && d2==1 && d1==1){
		angka3="Seratus";
		angka2="Sebelas";
		angka1="";
	}else if(d3==1 && d2==1 && d1>=2){
		angka3="Seratus";
		angka2=digit(d1)+" Belas";
		angka1="";
	}else if(d3==1 && d2>=2 && d1==0){
		angka3="Seratus";
		angka2=digit(2)+" Puluh";
		angka1="";
	}else if(d3==1 && d2>=2 && d1>=1){
		angka3="Seratus";
		angka2=digit(d2)+" Puluh";
		angka1=digit(d1);
	}else if(d3>=2 && d2==0 && d1==0){
		angka3=digit(d3)+" Ratus";
		angka2="";
		angka1="";
	}else if(d3>=2 && d2==1 && d1==0){
		angka3=digit(d3)+" Ratus";
		angka2=" Sepuluh";
		angka1="";
	}else if(d3>=2 && d2==1 && d1==1){
		angka3=digit(d3)+" Ratus";
		angka2="Sebelas";
		angka1="";
	}else if(d3>=2 && d2==1 && d1>=2){
		angka3=digit(d3)+" Ratus";
		angka2=digit(d1)+" Belas";
		angka1="";
	}else if(d3>=2 && d2>=2 && d1==0){
		angka3=digit(d3)+" Ratus";
		angka2=digit(d2)+" Puluh";
		angka1="";
	}else if(d3>=2 && d2>=2 && d1>=1){
		angka3=digit(d3)+" Ratus";
		angka2=digit(d2)+" Puluh";
		angka1=digit(d1);
	}else if(d3==0 && d2==1 && d1==0){
		angka3="Sepuluh";
		angka2="";
		angka1="";
	}else if(d3==0 && d2==1 && d1==1){
		angka3="Sebelas";
		angka2="";
		angka1="";
	}else if(d3==0 && d2==1 && d1>=2){
		angka3=digit(d1)+" Belas";
		angka2="";
		angka1="";
	}else if(d3==0 && d2>=2 && d1==0){
		angka3=digit(d2)+" Puluh";
		angka2="";
		angka1="";
	}else if(d3==0 && d2>=2 && d1>=1){
		angka3=digit(d2)+" Puluh";
		angka2=digit(d1);
		angka1="";
	}else if(d3==0 && d2==0 && d1>=1){
		angka3=digit(d1);
		angka2="";
		angka1="";
	}else if(d3==0 && d2==0 && d1==0){
		angka3=digit(d1);
		angka2="";
		angka1="";
	}
	cout<<angka<<" = "<<angka3<<" "<<angka2<<" "<<angka1<<"\n\n";
	}else ulang='N';
	}system("PAUSE");
	return 0;
	}
	
string digit(int d) {
	string kata;
	
	kata = "? angka";
	switch(d) {
		case 0 : kata = "Nol"; break;
		case 1 : kata = "Satu"; break;
		case 2 : kata = "Dua"; break;
		case 3 : kata = "Tiga"; break;
		case 4 : kata = "Empat"; break;
		case 5 : kata = "Lima"; break;
		case 6 : kata = "Enam"; break;
		case 7 : kata = "Tujuh"; break;
		case 8 : kata = "Delapan"; break;
		case 9 : kata = "Sembilan"; break;
		default : cout << "Bukan  3 Digit\n";
	}
	return kata;
}

