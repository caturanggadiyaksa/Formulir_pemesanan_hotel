#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{	//DECLARATION

	//DECLARATION NO FAKTUR, NAMA, KODE KAMAR, PPN, KODE ASAL, KODE TAMU
	float nofaktur;
	string nama;
	string kodekamar;
	string ppn;
	string kodeasal;
	string kodetamu;
	
	//DECLARATION LAMA PEMINJAMAN
	int lama;
	int total1, total2, total3;
	
	//DECLARATION JENIS KAMAR
	string kamara = "PresidentialSuite";
	string kamarb = "Suite Room";
	string kamarc = "Junior Suite Room";
	string kamard = "Deluxe Room";
	string kamare = "Superior Room";
	string kamarf = "Standard Room";
	
	//DECLARATION JENIS TAMU
	string kode1 = "Member";
	string kode2 = "Perusahaan";
	string kode3 = "Keluarga";
	string kode4 = "umum";
	
	//DECLARATION ASAL TAMU
	string asal1 = "DALAM KOTA";
	string asal2 = "LUAR KOTA";
	string asal3 = "LUAR JAWA";
	string asal4 = "EXPART/ASING";
	
	//DECLARATION RUMUS JUMLAH
	int biayasewaa,biayasewab, biayasewac, biayasewad, biayasewae, biayasewaf, badm1, badm2, badm3, badm4, badm5, badm6;
	
	//DECLARATION HARGA SEWA/HARI
	int hargaa = 1000000;
	int hargab = 850000;
	int hargac = 700000;
	int hargad = 425000;
	int hargae = 375000;
	int hargaf = 250000;
	
	
	//DECLARATION BIAYA LAIN-LAIN
	int biaya1 = 0;
	int biaya2 = 300000;
	int biaya3 = 125000;
	int biaya4 = 75000;
	
	
	//DECLARATION Prs. Biaya Adm
	float adm1 = 0;
	float adm2 = 0.05;
	float adm3 = 0.10;
	float adm4 = 0.15;
	
	//DECLARATION PPN
	float PPN = 0.10;
	float PPNT = 0;
	int PPN1;
	
	

	

		//menu
		system("cls");

		//tampilan formulir penyewaan kamar
		cout << "-------------------------------------------------" << endl;
		cout << "|		FORMULIR PENYEWAAAN KAMAR	|"<< endl;
		cout << "-------------------------------------------------" << endl;

		//tampilan input no faktur
		cout << "No Faktur\t\t:";
		cin >> nofaktur;

		//tampilan nama penyewa
		cout << "Nama Penyewa\t\t:";
		cin >> nama;

		cout << "Kode Kamar\t\t:"; //tampilan kode kamar
		cin >> kodekamar;
		
		if (kodekamar == "A") //perulangan jika user menginputkan kode kamar A
		{	
			cout << "Jenis Kamar\t\t:" << kamara << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargaa << endl;

		}
		else if(kodekamar == "B")//perulangan jika user menginputkan kode kamar B
		{	
			cout << "Jenis Kamar\t\t;" << kamarb << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargab << endl;
		}
		else if(kodekamar == "C")//perulangan jika user menginputkan kode kamar C
		{	
			cout << "Jenis Kamar\t\t;" << kamarc << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargac << endl;
		}
		else if(kodekamar == "D")//perulangan jika user menginputkan kode kamar D
		{	
			cout << "Jenis Kamar\t\t:" << kamard << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargad << endl;
		}
		else if(kodekamar == "E")//perulangan jika user menginputkan kode kamar E
		{	
			cout << "Jenis Kamar\t\t:" << kamare << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargae << endl;
		}
		else if(kodekamar == "F")//perulangan jika user menginputkan kode kamar F
		{	
			cout << "Jenis Kamar\t\t:" << kamarf << endl;
			cout << "Harga Sewa/Hari\t\t:" << hargaf << endl;
		}
		
		
		//tampilan kode tamu
		cout << "Kode Tamu\t\t:";
		cin >> kodetamu;
			
		if( kodetamu == "1")//jika user memasukan angka 1 di kode tamu
		{
			cout << "Jenis Tamu\t\t:" << kode1 << endl; //kode1 buat nampilin kode tamu 1 yg tersimpan di variable 
			cout << "Biaya Lain lain\t\t:" << biaya1 << endl; //biaya1 untuk nampilin biaya lain lain yang tersimpan di variable
		}
		else if( kodetamu == "2")//jika user memasukan angka 2 di kode tamu
		{
			cout << "Jenis Tamu\t\t:" << kode2 << endl; //kode1 buat nampilin kode tamu 1 yg tersimpan di variable
			cout << "Biaya Lain lain\t\t:" << biaya2 << endl; //biaya1 untuk nampilin biaya lain lain yang tersimpan di variable
		}
		else if( kodetamu == "3")
		{
			cout << "Jenis Tamu\t\t:" << kode3 << endl; //kode1 buat nampilin kode tamu 1 yg tersimpan di variable
			cout << "Biaya Lain lain\t\t:" << biaya3 << endl; //biaya1 untuk nampilin biaya lain lain yang tersimpan di variable
		}
		else if( kodetamu == "4")
		{
			cout << "Jenis Tamu\t\t:" << kode4 << endl; //kode1 buat nampilin kode tamu 1 yg tersimpan di variable
			cout << "Biaya Lain lain\t\t:" << biaya4 << endl; //biaya1 untuk nampilin biaya lain lain yang tersimpan di variable
		}
		
		//untuk menampilkan dan menginputkan kode asal
		cout << "Kode Asal\t\t:";
		cin >> kodeasal;
		
		if(kodeasal == "1") //jika user menginputkan kode asal angka 1
		{
			cout << "Asal Tamu\t\t:" << asal1 << endl; //asal1 untuk nampilin asal tamu 1 yg tersimpan di variable
		}
		else if(kodeasal == "2")//jika user menginputkan kode asal angka 1
		{
			cout << "Asal Tamu\t\t:" << asal2 << endl; //asal2 untuk nampilin asal tamu 1 yg tersimpan di variable
		}
		else if(kodeasal == "3")//jika user menginputkan kode asal angka 1
		{
			cout << "Asal Tamu\t\t:" << asal3 << endl;//asal3 untuk nampilin asal tamu 1 yg tersimpan di variable
		}
		else if(kodeasal == "4")//jika user menginputkan kode asal angka 1
		{
			cout << "Asal Tamu\t\t:" << asal4 << endl;//asal4 untuk nampilin asal tamu 1 yg tersimpan di variable
		}
		
		//untuk menampilkan dan menginputkan lama sewa
		cout << "Lama Sewa\t\t:";
		cin >> lama;
		
		
		if (lama >=1)//jika user menginputkan lama 1 
		{
			if (kodekamar == "A")//jika user menginputkan kodekamar A
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargaa;//lama*hargaa untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar A	
			}
			else if (kodekamar == "B")
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargab;//lama*hargab untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar B
			}
			else if (kodekamar == "C")
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargac;//lama*hargac untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar C
			}
			else if (kodekamar == "D")
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargad;//lama*hargad untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar D
			}
			else if (kodekamar == "E")
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargae;//lama*hargae untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar E
			}
			else if (kodekamar == "F")
			{
				cout << "Jumlah Biaya Sewa	:" << lama * hargaf;//lama*hargaf untuk menghitung jumlah biaya lama=lamasewa hargaa=harga kamar F
			}
		}
		
		//untuk menampilkan dan menginputkan kode PPN
		cout << endl << "Kode PPN\t\t:" ;
		cin >> ppn;
		
		
		
		if (ppn == "Y")//jika user menginputkan ppn Y 
		{
			if(kodekamar == "A")//jika user menginputkan kode kamar A
			{
				cout << "Jumlah PPN\t\t:" << PPN * lama * hargaa; //PPN*lama*hargaa untuk menghitung jumlah ppn 
			}
			else if(kodekamar == "B")//jika user menginputkan kode kamar B
			{
				cout << "Jumlah PPN\t\t:"<< PPN * lama * hargab; //PPN*lama*hargab untuk menghitung jumlah ppn
			}
			else if(kodekamar == "C")//jika user menginputkan kode kamar C
			{
				cout << "Jumlah PPN\t\t:"<< PPN * lama * hargac;//PPN*lama*hargac untuk menghitung jumlah ppn
			}
			else if(kodekamar == "D")//jika user menginputkan kode kamar D
			{
				cout << "Jumlah PPN\t\t:"<< PPN * lama * hargad;//PPN*lama*hargad untuk menghitung jumlah ppn
			}
			else if(kodekamar == "D")//jika user menginputkan kode kamar E
			{
				cout << "Jumlah PPN\t\t:"<< PPN * lama * hargad;//PPN*lama*hargae untuk menghitung jumlah ppn
			}
			else if(kodekamar == "F")//jika user menginputkan kode kamar F
			{
				cout << "Jumlah PPN\t\t:"<< PPN * lama * hargaf;//PPN*lama*hargaf untuk menghitung jumlah ppn
			}
			
		}
		else if (ppn == "T")//jika user menginputkan ppn T 
		{
			if(kodekamar == "A")//jika user menginputkan kode kamar A
			{
				cout << "Jumlah PPN\t\t:" << PPNT; //PPNT untuk menghitung jumlah ppn 0
			}
			else if(kodekamar == "B")//jika user menginputkan kode kamar B
			{
				cout << "Jumlah PPN\t\t:"<< PPNT; //PPNT untuk menghitung jumlah ppn 0
			}
			else if(kodekamar == "C")//jika user menginputkan kode kamar C
			{
				cout << "Jumlah PPN\t\t:"<< PPNT; //PPNT untuk menghitung jumlah ppn 0
			}
			else if(kodekamar == "D")//jika user menginputkan kode kamar D
			{
				cout << "Jumlah PPN\t\t:"<< PPNT; //PPNT untuk menghitung jumlah ppn 0
			}
			else if(kodekamar == "F")//jika user menginputkan kode kamar F
			{
				cout << "Jumlah PPN\t\t:"<< PPNT; //PPNT untuk menghitung jumlah ppn 0
			}
		}
		
		cout << endl;
		if(kodekamar == "A")//jika user mennginputkan kode kamar A
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargaa * lama; // adm1*hargaa*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargaa * lama; // adm2*hargaa*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargaa * lama; // adm3*hargaa*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 * hargaa * lama; // adm4*hargaa*lama untuk menghitung rumus biaya adm
			}
		}
		else if(kodekamar == "B")//jika user mennginputkan kode kamar B
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargab * lama;// adm1*hargab*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargab * lama;// adm2*hargab*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargab * lama;// adm3*hargab*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 *  hargab * lama;// adm4*hargab*lama untuk menghitung rumus biaya adm
			}
		}
		else if(kodekamar == "C")//jika user mennginputkan kode kamar C
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargac * lama; // adm1*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargac * lama;// adm2*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargac * lama;// adm3*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 * hargac * lama;// adm4*hargac*lama untuk menghitung rumus biaya adm
			}
		}
		else if(kodekamar == "D")//jika user mennginputkan kode kamar D
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargad * lama;// adm1*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargad * lama;// adm2*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargad * lama;// adm3*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 * hargad * lama;// adm4*hargac*lama untuk menghitung rumus biaya adm
			}
		}
		else if(kodekamar == "E")//jika user mennginputkan kode kamar E
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargae * lama;// adm1*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargae * lama;// adm2*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargae * lama;// adm3*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 * hargae * lama;// adm4*hargac*lama untuk menghitung rumus biaya adm
			}
		}
		else if(kodekamar == "F")//jika user mennginputkan kode kamar F
		{
			if(kodeasal == "1")//jika user mennginputkan kode asal 1
			{
				cout << "Biaya Adm\t\t:"<< adm1 * hargaf * lama;// adm1*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "2")//jika user mennginputkan kode asal 2
			{
				cout << "Biaya Adm\t\t:"<< adm2 * hargaf * lama;// adm2*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "3")//jika user mennginputkan kode asal 3
			{
				cout << "Biaya Adm\t\t:"<< adm3 * hargaf * lama;// adm3*hargac*lama untuk menghitung rumus biaya adm
			}
			else if(kodeasal == "4")//jika user mennginputkan kode asal 4
			{
				cout << "Biaya Adm\t\t:"<< adm4 * hargaf * lama;// adm4*hargac*lama untuk menghitung rumus biaya adm
			}
		}
		
		//assignt atau buat tugas/rumus
		biayasewaa = hargaa*lama; //untuk menghitung rumus biaya sewa kamar A
		biayasewab = hargab*lama; //untuk menghitung rumus biaya sewa kamar B
		biayasewac = hargac*lama; //untuk menghitung rumus biaya sewa kamar C
		biayasewad = hargad*lama; //untuk menghitung rumus biaya sewa kamar D
		biayasewae = hargae*lama; //untuk menghitung rumus biaya sewa kamar E
		biayasewaf = hargaf*lama; //untuk menghitung rumus biaya sewa kamar F
		total1 = adm2 * hargaa * lama; //untuk menghitung biaya adm jika kode asal 2
		total2 = adm3 * hargaa * lama; //untuk menghitung biaya adm jika kode asal 3
		total3 = adm4 * hargaa * lama; //untuk menghitung biaya adm jika kode asal 4
		PPN1 = PPN * (lama*hargaa);	//untuk menghitung ppn 10%*biaya sewa
		cout << endl;
		
		
		if (kodekamar =="A") //jika user menginputkan kode kamar A
		{
			if(kodetamu == "1")//jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1") //jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaa + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total1 +PPN1 + biaya1;
				}
				else if(kodeasal == "3") //jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4") //jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2")//jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaa  + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3")//jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaa + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4")//jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaa  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaa + total3 + PPN1 + biaya4;
				}
			}
		}
		else if (kodekamar =="B")//jika user menginputkan kode kamar B
		{
			if(kodetamu == "1")//jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab  + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewab + total1 + PPN1 + biaya1;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewab + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewab + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2")//jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3")//jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab  + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewab + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewab + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewab + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4")//jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewab  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewab + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewab + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewab + total3 + PPN1 + biaya4;
				}
			}
		}
		else if (kodekamar =="C")//jika user menginputkan kode kamar C
		{
			if(kodetamu == "1")//jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewac + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewac + total1 + PPN1 + biaya1;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewac + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4") //jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewac + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2") //jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewac + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewac + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewac + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewac + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3") //jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewac  + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewac + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewac + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewac + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4") //jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewac  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewac + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewac + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewac + total3 + PPN1 + biaya4;
				}
			}
		}
		else if (kodekamar =="D") //jika user menginputkan kode kamar D
		{
			if(kodetamu == "1") //jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewad + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewad + total1 + PPN1 + biaya1;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewad + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewad + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2")//jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewad + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewad + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewad + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewad + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3") //jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewad + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewad + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewad + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewad + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4") //jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewad  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewad + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewad + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewad + total3 + PPN1 + biaya4;
				}
			}
		}
		else if (kodekamar =="E") //jika user menginputkan kode kamar E
		{
			if(kodetamu == "1")//jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewae  + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewae + total1 + PPN1 + biaya1;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewae + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewae + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2") //jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewae + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewae + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewae + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewae + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3") //jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewae + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewae + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewae + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewae + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4") //jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewae  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewae + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewae + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewae + total3 + PPN1 + biaya4;
				}
			}
		}
		else if (kodekamar =="F") //jika user menginputkan kode kamar F
		{
			if(kodetamu == "1") //jika user menginputkan kode tamu 1
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaf + PPN1 + biaya1;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total1 + PPN1 + biaya1;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total2 + PPN1 + biaya1;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total3 + PPN1 + biaya1;
				}
			}
			else if (kodetamu == "2") //jika user menginputkan kode tamu 2
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaf  + PPN1 + biaya2;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total1 + PPN1 + biaya2;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total2 + PPN1 + biaya2;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total3 + PPN1 + biaya2;
				}
			}
			else if (kodetamu == "3") //jika user menginputkan kode tamu 3
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaf  + PPN1 + biaya3;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total1 + PPN1 + biaya3;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total2 + PPN1 + biaya3;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total3 + PPN1 + biaya3;
				}
			}
			else if (kodetamu == "4") //jika user menginputkan kode tamu 4
			{
				if(kodeasal == "1")//jika user menginputkan kode asal 1
				{
					cout << "Total Biaya\t\t:" << biayasewaf  + PPN1 + biaya4;
				}
				else if(kodeasal == "2")//jika user menginputkan kode asal 2
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total1 + PPN1 + biaya4;
				}
				else if(kodeasal == "3")//jika user menginputkan kode asal 3
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total2 + PPN1 + biaya4;
				}
				else if(kodeasal == "4")//jika user menginputkan kode asal 4
				{
					cout << "Total Biaya\t\t:" << biayasewaf + total3 + PPN1 + biaya4;
				}
			}
		}
	
	return 0;
}
