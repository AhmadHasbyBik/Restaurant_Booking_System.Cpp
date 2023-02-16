#include <iostream>
#include <cstring>
using namespace std;

class items
{
	private:
		string itemname[100];
		int itemPrice[100];
		int count = 0;
		
		typedef struct menu {
		    char menu[20];
		} menu;

		struct datamenu {
		    menu menu;
		    int harga;
		} datamenu[20], swap;
		
	public:
		void getitem();
		void display();
		void displaysum();
		void remove();
};


void items :: getitem()
{
	
	strcpy(datamenu[0].menu,"Ayam Goreng");
	datamenu[0].harga = 10000;
	
	strcpy(datamenu[1].menu,"Mie Ganas");
	datamenu[1].harga = 8000;
	
	strcpy(datamenu[2].menu,"Nasi Goreng");
	datamenu[2].harga = 10000;
	
	strcpy(datamenu[3].menu,"Es Teh");
	datamenu[3].harga = 3000;
	
	strcpy(datamenu[4].menu,"Teh Hangat");
	datamenu[4].harga = 2000;
	
	strcpy(datamenu[5].menu,"Air Putih");
	datamenu[5].harga = 1500;
	
	int itemcode,i,z,b;
	b++;
up:
	system ("cls");
 	cout<<"==== Menu Makanan dan Minuman ====\n";
 	cout<<"\n1. Ayam Geprek Rp.10.000";
 	cout<<"\n2. Mie Ganas Rp.8.000";
 	cout<<"\n3. Nasi Goreng Rp.10.000";
 	cout<<"\n4. Es Teh Rp.3000";
 	cout<<"\n5. Teh Hangat Rp.2000";
 	cout<<"\n6. Air Putih Rp.1500\n";
	
	cout<<"\nMasukkan Nomor Menu : ";
	cin>>itemcode;
	
	if (itemcode == 1){
    		itemPrice[count] = datamenu[0].harga;
        	itemname[count] = datamenu[0].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else if (itemcode == 2){
        itemPrice[count] = datamenu[1].harga;
        itemname[count] = datamenu[1].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else if (itemcode == 3){
        itemPrice[count] = datamenu[2].harga;
        itemname[count] = datamenu[2].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else if (itemcode == 4){
        itemPrice[count] = datamenu[3].harga;
        itemname[count] = datamenu[3].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else if (itemcode == 5){
        itemPrice[count] = datamenu[4].harga;
        itemname[count] = datamenu[4].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else if (itemcode == 6){
        itemPrice[count] = datamenu[5].harga;
        itemname[count] = datamenu[5].menu;
            printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
			cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
    else {
    	printf ("Data Tidak Ditemukan\n");
    	
        	printf("\nTekan 1 untuk kembali menu awal, 2 untuk melanjutkan beli makanan minuman : ");
		    cin>>z;
		
		    switch(z) {
		    case 1:
		        return;
		        break;
		    case 2:
		        b++;
		        goto up;
		    }
	}
}

void items :: displaysum()
{
	int sum =0;
	char name;
	for(int i=0;i<count;i++)
	{
		name = itemname[count];
		sum = sum+itemPrice[count];
	}
	cout<<"\nNama Makanan/Minuman :"<<name<<"\n";
	cout<<"Total Harga :"<<sum<<"\n";

	
}
void items :: remove()
{
	int a;
	cout<<"Enter item code: ";
	cin>>a;
	for(int i=0;i<count;i++)
	   if(itemcode[i] == a)
	       itemPrice[i] = 0;
 } 

int main()
{
system ("cls");


 items order;
 int x;
 do{
 	cout<<"==== Menu Program Restoran ====\n";
 	cout<<"\n1. Pesan Makanan dan Minuman";
 	cout<<"\n2. Total Pesanan";
 	cout<<"\n3. Hapus Pesanan";
 	cout<<"\n4. Quit";
 	cout<<"\n\n Pilih Menu : ";
 	cin>>x;
 	 switch(x)
 	 {
 		case 1:
 			order.getitem();
 			break;
 		case 2:
		    order.displaysum();
		    break;
		case 3:
		    order.remove();
			break;
		case 4:
		    break;
		default:
		   cout<<"Invalid Output\n"	;
		 	
	 }
 	
   }while(x!=4);
return 0;

}
