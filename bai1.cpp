#include <bits/stdc++.h>
using namespace std;

ifstream o("THONGKEXAU.INP");
ofstream c("THONGKEXAU.OUT");
string chuoi;
int dem = 0;
int d = -1;
string dulieu[500000] = {};
int tong[500000] = {};

int cover(string t)
{
    char ducnghia;
    ducnghia = '0';
    int tongnek = -1;
    string danhsach[500] = {};
    for(ducnghia='Z';ducnghia>='A';ducnghia--)
    {
        tongnek+=1;
        danhsach[tongnek] = ducnghia;
    }
    for(ducnghia='z';ducnghia>='a';ducnghia--)
    {
        tongnek+=1;
        danhsach[tongnek] = ducnghia;
    }
    for(ducnghia='9';ducnghia>='0';ducnghia--)
    {
        tongnek+=1;
        danhsach[tongnek] = ducnghia;
    }

    for(int i=0;i<=tongnek;i++)
    {
        string name;
        name = danhsach[i];
        if(t == name)
        {
            return i;
        }
    }





    return 0;
}

int main()
{
    o >> chuoi;
    dem = chuoi.length();
    for(int i =0;i<=dem;i++)
    {
        string text;
        text = chuoi[i];
        //start
        int c1 = 0;
        for(int j=0;j<=dem;j++)
        {
            if(dulieu[j] == text)
            {
                c1 = 1;
            }
        }
        if(c1 ==0)// neu trong dulieu chua ton tai text nay se tien hanh add
        {
            d+=1;
            dulieu[d] = text;
            tong[d] = 1;

        }
        else //neu da ton tai text nay, thi se cong so luong text
        {
            tong[d]+=1;
        }
    }
    /// theo thu tu số , in thường, in hoa
    ///sắp xếp
    string tg;
    string num;
    for(int i = 0; i < d - 1; i++){
        for(int j = i + 1; j < d; j++){
            if(cover(dulieu[i]) < cover(dulieu[j])){
                // Hoan vi 2 so a[i] va a[j]
                tg = dulieu[i];
                num = tong[i];
                dulieu[i] = dulieu[j];
                dulieu[j] = tg;
                tong[i] = tong[j];
                dulieu[j] = num;
            }
        }
    }
    // show man hinh
    cout << d << endl;
    for(int i=0;i<=d;i++)
    {
        cout << tong[i] << " " << dulieu[i] << endl;
    }



    return 0;
}
