#include <iostream>
using namespace std;

struct Data{
    int siswa_id;
    int uts_score;
    int uas_score;
};


int main()
{
    int n, avg = 0;
    cout << "Masukan jumlah mahasiswa : ";
    cin >> n;
    Data mahasiswa[n];
    
    for(int i = 0; i < n; i++){
        cout << "Masukan ID Mahasiswa : ";
        cin >> mahasiswa[i].siswa_id;
        cout << "Masukan nilai uts Mahasiswa : ";
        cin >> mahasiswa[i].uts_score;
        cout << "Masukan nilai uas Mahasiswa : ";
        cin >> mahasiswa[i].uas_score;
    }
    
    for(int i = 0; i < n; i++){
        cout << "ID Mahasiswa: "<< mahasiswa[i].siswa_id << endl;
        avg = mahasiswa[i].uts_score + mahasiswa[i].uas_score;
        cout << "Rata-Rata: " << avg / 2 << endl;
    }
    

    return 0;
}
