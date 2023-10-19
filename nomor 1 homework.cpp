#include <iostream>
using namespace std;

struct Zodiak{
    int bulan_lahir;
    int tanggal_lahir;
};

int main(){
    int n;
    cout << "Masukan ada berapa orang : ";
    cin >> n;
    Zodiak zodiak[n];
    
    
    for(int i = 0; i < n; i++){
    cout << "Masukan tanggal dan bulan kelahiran : ";
    cin >> zodiak[i].tanggal_lahir >> zodiak[i].bulan_lahir;
        
    if((zodiak[i].tanggal_lahir >= 21 && zodiak[i].bulan_lahir == 3) || (zodiak[i].tanggal_lahir <=19 && zodiak[i].bulan_lahir == 4)){
        cout << "Zodiak anda adalah Aries" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 20 && zodiak[i].bulan_lahir == 4)||(zodiak[i].tanggal_lahir <= 20 && zodiak[i].bulan_lahir == 5)){
        cout << "Zodiak anda adalah Taurus" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 21 && zodiak[i].bulan_lahir == 5)||(zodiak[i].tanggal_lahir <= 20 && zodiak[i].bulan_lahir == 6)){
        cout << "Zodiak anda adalah Gemini" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 21 && zodiak[i].bulan_lahir == 6)||(zodiak[i].tanggal_lahir <= 22 && zodiak[i].bulan_lahir == 7)){
        cout << "Zodiak anda adalah Cancer" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 23 && zodiak[i].bulan_lahir == 7)||(zodiak[i].tanggal_lahir <= 22 && zodiak[i].bulan_lahir == 8)){
        cout << "Zodiak anda adalah Leo" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 23 && zodiak[i].bulan_lahir == 8)||(zodiak[i].tanggal_lahir <= 22 && zodiak[i].bulan_lahir == 9)){
        cout << "Zodiak anda adalah Virgo" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 23 && zodiak[i].bulan_lahir == 9)||(zodiak[i].tanggal_lahir <= 22 && zodiak[i].bulan_lahir == 10)){
        cout << "Zodiak anda adalah Libra" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 23 && zodiak[i].bulan_lahir == 10)||(zodiak[i].tanggal_lahir <= 21 && zodiak[i].bulan_lahir == 11)){
        cout << "Zodiak anda adalah Scorpio" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 22 && zodiak[i].bulan_lahir == 11)||(zodiak[i].tanggal_lahir <= 21 && zodiak[i].bulan_lahir == 12)){
        cout << "Zodiak anda adalah Sagitarius" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 22 && zodiak[i].bulan_lahir == 12)||(zodiak[i].tanggal_lahir <= 19 && zodiak[i].bulan_lahir == 1)){
        cout << "Zodiak anda adalah Carpicorn" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 20 && zodiak[i].bulan_lahir == 1)||(zodiak[i].tanggal_lahir <= 18 && zodiak[i].bulan_lahir == 2)){
        cout << "Zodiak anda adalah Aquarius" << endl;
    }
    
    else if((zodiak[i].tanggal_lahir >= 19 && zodiak[i].bulan_lahir == 2)||(zodiak[i].tanggal_lahir <= 20 && zodiak[i].bulan_lahir == 3)){
        cout << "Zodiak anda adalah Pisces" << endl;
    }
    }
    }




   
