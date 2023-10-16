#include <iostream>
using namespace std;

struct barang{
    int kode_barang;
    string nama_barang;
    float harga_barang;
    int jumlah_barang;
    
   
};

barang List[50];
 
int main()
{
    int n, jumlah, avg;
    cout << "Masukan jumlah barang : " ;
    cin >> n;
    
    
    for(int i = 0; i<n; i++){
        cout << "MASUKAN DATA BARANG"<<endl;
        cout << "Kode Barang : ";
        cin >> List[i].kode_barang;
        cout << "Nama Barang : ";
        cin >> List[i].nama_barang;
        cout << "Harga Barang : ";
        cin >> List[i].harga_barang;
        cout << "Jumlah Barang : ";
        cin >> List[i].jumlah_barang;
    }
    
    cout << "==== DATA BARANG ====" << endl;
    for(int i = 0; i<n; i++){
        cout << "Jumlah Input Barang" << i+1<< endl;
        cout << "Kode Barang : " << List[i].kode_barang<<endl;
        cout << "Nama Barang : " << List[i].nama_barang<<endl;
        cout << "Harga Barang : " << List[i].harga_barang<<endl;
        cout << "Jumlah Barang : " << List[i].jumlah_barang<<endl;
    
        
    }
    for(int i = 0; i<n; i++){
    jumlah += List[i].jumlah_barang;
    avg += List[i].harga_barang;
    }
    
    avg = avg/n;
    cout << "Jumlah Semua Barang: "<< jumlah <<endl;
    cout  << "Rata rata Semua Barang: "<< avg <<endl;

    return 0;
}
