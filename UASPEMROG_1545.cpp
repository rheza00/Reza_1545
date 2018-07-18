//Program sederhana menggunakan konsep OOP untuk pengumpulan tugas UAS, source code dari jurnal praktikum
//dan buat sendiri, pennjualan alat kelistrikan toko cahaya anugrah
//Nama toko bapak saya di kampung

#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

string optionConvertion();
int calculate(int mode, int temp);

class toko_kelistrikan{
public:
	int modeSelected;
	int temp;
	char lagi;

	string header(string message){
	return "=====================================\n "
	+message+"\n"+
	"=====================================";
	}
	
	string footer(string message){
		string content = "\n\n\n=====================================\n"
		+message+"\n"+
		"=====================================";
		return content;
	}
	
	//ini yang bikin error td
	string optionConvertion(){
		string opt ="[1] Mesin Kattan Makita \n[2] Pompa Air Shimizu \n[3] Mesin Bor Mactek \n[4] Kontak Babi \n[5] Lampu Phillips \n[6] Mesin Genset";
		return opt;
	}
    
    void ketersediaan(){
    cout<<"Barang yang tersedia\t:"<<endl;
    }
    
    void tampil_barang(){
    cout<<optionConvertion()<<endl<<endl;
    }
    
    void pilih(){
    cout<<"Pilihan barang\t\t\t: "; 
	cin>>modeSelected;
    }
    
    void jumlah_barang(){
    	cout<<"Jumlah yang ingin dibeli\t: ";
    	cin>>temp;
	}
	
	
	//mungkin perkaliannya error
	int calculate(int modeSelected,int temp){
	if(modeSelected==1){
		cout<<"\nHarga Barang = 650K";
		return temp*650000;
	}
	else if(modeSelected==2){
		cout<<"\nHarga Barang = 450K";
		return temp*450000;
	}
	else if(modeSelected==3){
		cout<<"\nHarga Barang = 630K";
		return temp*630000;
	}
	else if(modeSelected==4){
		cout<<"\nHarga Barang = 300K";
		return temp*300000;
	}
	else if(modeSelected==5){
		cout<<"\nHarga Barang = 50K";
		return temp*50000;
	}
	else if(modeSelected==6){
		cout<<"\nHarga Barang = 800K";
		return temp*800000;
	}
	else{
		return -1;
	}
}
};

int main(){
toko_kelistrikan TK;
	char lagi;
	awal:
	cout<<TK.header("\t| Cahaya Anugrah |") <<endl;
	TK.ketersediaan();
	TK.tampil_barang();
	TK.pilih();
	TK.jumlah_barang();
	//yang dibawah ini pemanggillannya udah betulkahh??
	cout<<"\nTotal Harga\t\t: "<<TK.calculate(TK.modeSelected,TK.temp)<<endl;

	cout<<"\n\nIngin membeli barang lagi ? [Y/T] : ";
	cin>>lagi;
	if (lagi=='Y'||lagi=='y'){
		system("cls");
		goto awal;
		}else{
		goto menu;	
		menu:
		getchar(); 
	}
	
	cout<<TK.footer("Cashier : Reza Anugrah")<<endl;
	getch();
}
