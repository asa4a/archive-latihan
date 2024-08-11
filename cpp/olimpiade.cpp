// masukkan
// banyak seleksi >> peserta | peringkat >> cek id >> nilai sesi >> repeat

#include <iostream>
using namespace std;

int main(){
    int t;
    // input seleksi
    cin >> t;
    cout << "\n";
    
    int n,m,yesno;
    int s1[8];
    int s2[8];
    int s3[8];
    int id1[8] = {1,2,3,4,5,6,7,8};
    int id2[8] = {1,2,3,4,5,6,7,8};
    int id3[8] = {1,2,3,4,5,6,7,8};

    // input peserta | peringkat
    cin >> n;
    cin >> m;
    cout <<"\n";

    // cek id 
    int cekID;
    cout << "P000";
    cin >> cekID;
    cout << "\n";

    // isi nilai
    for (int i = 0; i < n; i++){
        int p_nilai[3];
        int id;
        cout << "P000";
        cin >> id;
        cin >> s1[id-1];
        cin >> s2[id-1];
        cin >> s3[id-1];
        cout << "\n";
    }

    // sort
    for (int i = 0; i < n; i++){
        if (s3[i] < s3[i+1]){
            int temp = s3[i];
            s3[i] = s3[i+1];
            s3[i+1] = temp;
            int temp_id = id3[i];
            id3[i] = id3[i+1];
            id3[i+1] = temp_id;
        }
    }

    cout << "\n";

    // if s3 sama
    if (s3[0] == s3[1]){

        // s2
        int n_2;
        for (int i = 0; i < n; i++){
            if (s3[i] == s3[n-i]){
                n_2 = n-i;
            }
        }
        for(int i = 0; i < n_2; i++){
            if (s2[i] < s2[i+1]){
                int temp = s2[i];
                s2[i] = s2[i+1];
                s2[i+1] = temp;
                int temp_id = id2[i];
                id2[i] = id2[i+1];
                id2[i+1] = temp_id;
            }
        }

        // if s2 sama
        if(s2[0] == s2[1]){

            // s1
            int n_1;
            for (int i = 0; i < n_2; i++){
                if (s2[i] == s2[n_2-i]){
                    int n_1 = n-i;
                }
            }
            for(int i = 0; i < n_1; i++){
                if (s2[i] < s2[i+1]){
                    int temp_id = id2[i];
                    id2[i] = id2[i+1];
                    id2[i+1] = temp_id;
                }
            }

            // keluaran s1
            for (int i=0; i<m; i++){
                if (id1[i] == cekID){
                    cout << "YA";
                    yesno = 1;
                }
            }
            if (yesno == 0){ cout << "TIDAK";}
        } else{

            // keluaran s2
            for (int i=0; i<m; i++){
                if (id2[i] == cekID){
                    cout << "YA";
                    yesno = 1;
                }
            }
            if (yesno == 0){ cout << "TIDAK";}
        }
    } else {

        // keluaran s3
        for (int i=0; i<m; i++){
            if (id3[i] == cekID){
                cout << "YA";
                yesno = 1;
            }
        }
        if (yesno == 0){ cout << "TIDAK";}
    }
}