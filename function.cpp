#include <bits/stdc++.h>

using namespace std;
ifstream o("TONGCAPSO.INP");
ofstream c("TONGCAPSO.OUT");
string tinh(string a, string b)
{
    while(a.length() != b.length())
    {
        if(a.length() < b.length())
        {
            a = "0"+a;
        }
        else
        {
            b = "0"+b;
        }
    }
    //12345678911

    string ketqua ="";
    int sodu = 0;
    for(int i=a.length()-1;i >=0;i--)
    {
        int so1 = (int) a[i]-48;
        int so2 = (int) b[i]-48;

        if(i ==0)
        {
            ketqua = to_string(so1 + so2 + sodu)+ketqua;
        }
        else
        {
            if(so1 + so2 + sodu >=10)
            {
                ketqua = to_string(so1 + so2 + sodu)[1]+ketqua;
                sodu = 1;
            }
            else
            {
                ketqua = to_string(so1 + so2 + sodu)+ketqua;
                sodu = 0;

            }
        }


    }
    return ketqua;

}
int main()
{
    int n = 0;
    o >> n;
    int  A[n] = {};
    int  B[n] = {};


   

    for(int i=1;i<=0;i++)
    {
        o >> A[i] >> B[i];
        string call = tinh(to_string(A[i]),to_string(B[i]));
        int so = (int) call[call.length()-1]-48;
        if(so%2 ==0)
        {
            c << call << endl;
        }
    }



}
