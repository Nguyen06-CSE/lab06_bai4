#define MAX 100
#define TAB '\t'

typedef int MaTran[MAX][MAX];

void xuatMaTran(MaTran a, int n);
void maPhuongLe(MaTran a, int& n);



void xuatMaTran(MaTran a, int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            cout << a[i][j] << TAB;
        }
        cout << endl;
    }
}


void maPhuongLe(MaTran a, int& n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }
    int hang = 0, cot = n / 2;
    int dem = 1;
    while(dem <= n * n){
        a[hang][cot] = dem;   

        int hangMoi = (hang - 1 + n) % n;
        int cotMoi = (cot + 1) % n;

        if(a[hangMoi][cotMoi] != 0){
            hang = (hang + 1) % n;
        }
        else {
            hang = hangMoi;
            cot = cotMoi;
        }

        ++dem;   
    }
    xuatMaTran(a, n);
}
