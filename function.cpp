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
