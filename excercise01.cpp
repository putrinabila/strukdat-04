/*
Nama : Putri Nabila 
NPM : 140810180007
Kelas : A 
Tanggal Pembuatan : 19 Maret 2019
Deskripsi : jawaban tugas EXCERCISE 04 
*/

#include <iostream>
using namespace std;

struct pegawai{
 char nPgw[25];
 char bidang[10];
 int gaji;
 pegawai* next;
};
typedef pegawai* pointer;
typedef pointer List;

	void createlist(List& first){
 	first=NULL;
}
	void createElemt(pointer& pBaru){
 		pBaru= new pegawai;
 		cout<<"Masukan Nama Panjang Pegawai :"; 
 		cin.ignore();
 		cin.getline(pBaru->nPgw,25);
 		cout<<"Masukkan bidang :";
    	cin.ignore();
    	cin.getline(pBaru->bidang,10);
    	cout<<"Masukan jumlah gaji:"; 
		cin>>pBaru->gaji;
    	pBaru->next=NULL;

}
	void insertFirst(List& first,pointer pBaru){
 		if(first==NULL){
  		first=pBaru;
 }
 			else{
  				pBaru->next=first;
  				first=pBaru;
 }
}
	void traversal(List first){
 		pointer pBantu;
 		pBantu=first; 
 		while(pBantu != NULL) { 
 		cout <<"Nama Panjang Pegawai:"<<pBantu->nPgw<<endl;
 		cout<<" Bidang :"<<pBantu->bidang<<endl;;
 		cout<<" Gaji:"<<pBantu->gaji<<endl;
 		pBantu = pBantu->next; 
 }
 }
	void deleteFirst(List& first, pointer& pHapus){
 
 		cout<<"Delete First"<<endl;
 			if (first==NULL){ 
 			pHapus=NULL;
 			cout<<"List kosong, tidak ada yang dihapus"<<endl;
 			}
 
 
 				else if (first->next==NULL){ 
 				pHapus=first;
 				first=NULL;
 }
 					else { 
 					pHapus=first; 
 					first=first->next; 
 					pHapus->next=NULL; 
 		}
}
	void insertLast(List& first, pointer pBaru){
 	pointer last;
 	cout<<"Insert Last"<<endl;
 		if (first==NULL){ 
 		first=pBaru;
 }
 			else { 
 			last=first; 
 				while (last->next!=NULL){
				last=last->next;
 }				last->next=pBaru;
 }
 }
	void deleteLast(List& first, pointer& pHapus){

 	pointer last,precLast;
 	cout<<"Delete Last"<<endl;
 	if (first==NULL){ 
 	pHapus=NULL;
 	cout<<"List kosong, tidak ada yang dihapus"<<endl;
 }
 		else if (first->next==NULL){ 
 		pHapus=first;
 		first=NULL;
 }
 			else { 
 			last=first; 
			precLast=NULL;
 				while (last->next!=NULL){
 				precLast=last; 
 				last=last->next; 
 }
 			pHapus=last;
 			precLast->next=NULL;
 }
 }
 
main(){
	
 pointer Baru,hapus;
 
 int x,n;
 List list;
 createlist(list);
 
 while(x!=4){
 cout<<"Menu "<<endl;
 cout<<"1.insert First"<<endl;
 cout<<"2.Insert Last"<<endl;
 cout<<"3.Delete First"<<endl;
 cout<<"4.Delete Last"<<endl;
 cout<<"5.Transversal"<<endl;
 cout<<"6.Exit"<<endl;
 
 cout<<"Masukkan Pilihan Menu = "; cin>>x;
 
	switch(x){
 			case 1:
 			cout<<"Masukan banyak pegawai:";
 			cin>>n;
 				for(int i=0;i<n;i++){
 				createElemt(Baru); 
 				insertFirst(list,Baru);
}
 			traversal(list);
 			cout<<"\n"<<endl;
			break; 
 
 			case 2:
 			cout<<"Masukan banyak pegawai:";
 			cin>>n;
 				for(int i=0;i<n;i++){
 				createElemt(Baru); 
 				insertLast(list,Baru);
 				cout<<endl;
}
 				traversal(list);
 				cout<<"\n"<<endl;   
 				break; 
 				
 			case 3:
 			deleteFirst(list,hapus); 
 			break; 
 			
 			case 4:
 			deleteLast(list,hapus); 
 			break;
 			
 			case 5:
 			traversal(list); 
 			default:
  			cout<<"Exit\n";
  			break;
}
}
}
