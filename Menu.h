void xuatMenu();
int chonMenu(int soMenu);
void xuLiMenu(int soMenu, MaTran a, int& n);
void ChayChuongTrinh();


void xuatMenu(){
    cout << "\n0. thoat khoi chuong trinh"
        << "\n1. tao ma phuong le";
}

int chonMenu(int soMenu){
    int chon;
    do{
        xuatMenu();
        cout << "nhap chon";
        cin >> chon;
        if(chon >= 0 && chon <= soMenu){
            break;
        }
    }while(true);
    return chon;
}

void xuLiMenu(int chon, MaTran a, int& n){
    switch (chon)
    {
    case 0:
        cout << "thoat khoi chuong trinh";
        break;
    case 1:
        cout << "nhap cap ma phuong le muon tao (nhap so le): ";
        cin >> n;
        if(n % 2 == 0){
            cout << n << " la so chan ";
            break;
        }
        else{
            maPhuongLe(a, n);
        }
    
    default:
        break;
    }
    _getch();
}

void ChayChuongTrinh(){
    int soMenu = 2;
    int n, chon;
    MaTran a;
    do{
        system("cls");
        chon = chonMenu(soMenu);
        xuLiMenu(chon, a, n);
    }while (chon !=0);
    
    
}