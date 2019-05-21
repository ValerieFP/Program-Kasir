#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
            char nama[100];
            int i;
            int nomormeja;
            int tanggal, bulan;
            float tahun;
    { //Program Login
        system("cls");

        int i;
        char ch;

        login:
            cout<<"\t\t\t\t\t\t\t\t\t\t\t===========================================\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t|  Selamat Datang Di Form Login BoooTeam  |\n";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t===========================================\n\n";

        for (i=1; i<=3; i++)
        {
            string user = "";
            string pass = "";
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<USERNAME> : "; cin>>user;
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\t<PASSWORD> : ";
                ch = _getch();

                while(ch != 13)
                {//character 13 is enter
                    pass.push_back(ch);
                    cout<<'*';
                    ch = _getch();
                }

        beranda:
            if (user=="BoooTeam" && pass=="041218")
            {
                int enter;
                int makanan, minuman, jumlah;
                double harga, hargamakanan, hargaminuman, harga1, harga2;
                double jumlah1, jumlah2, totalsemua;
                int bayar, bayar1, kembalian, kekurangan, total;
                int pilihanmakanan, pilihanminuman;
                int semuamakanan=0,semuaminuman=0;
                int pembayaran;
                double nomoratm;
                string JenisMakanan, JenisMinuman;
                char namaatm[25];
                char yt;
                char ch;

                cout<<"\n\nAnda berhasil login"<<endl;

                system("cls");

                cout<<"\t\t\t\t\t\t\t\t\t\t\t====================================="<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t| SELAMAT DATANG DI BOOO RESTAURANT |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t=====================================\n\n"<<endl;

                cout<<"\t\t\t\t\t\t\t\t\t >>>>>>>********************MENU BOO RESTAURANT********************<<<<<<<"<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |                Menu Makanan            |\t\t|                Menu Minuman            |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |1. Nasi Putih               Rp. 5.000,- |\t\t|1. Air Mineral              Rp. 4.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |2. Nasi Uduk                Rp. 7.000,- |\t\t|2. Teh Tawar Hangat         Rp. GRATIS,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |3. Nasi Goreng              Rp. 15.000,-|\t\t|3. Es Teh Tawar             Rp. 1.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |4. Nasi Goreng Spesial      Rp. 20.000,-|\t\t|4. Teh Manis Hangat         Rp. 3.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |5. Nasi Goreng Seafood      Rp. 30.000,-|\t\t|5. Es Teh Manis             Rp. 4.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |6. Ayam Goreng              Rp. 20.000,-|\t\t|6. Jeruk Hangat             Rp. 6.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |7. Ayam Bakar               Rp. 20.000,-|\t\t|7. Es Jeruk                 Rp. 7.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |8. Ayam Saus Teriyaki       Rp. 25.000,-|\t\t|8. Lemon Tea Hangat         Rp. 9.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |9. Mie Ayam                 Rp. 15.000,-|\t\t|9. Es Lemon Tea             Rp. 10.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |10.Mie Goreng Ayam          Rp. 20.000,-|\t\t|10.Green Tea                Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |11.Mie Goreng Sapi          Rp. 30.000,-|\t\t|11.Thai Tea                 Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |12.Mie Goreng Seafood       Rp. 30.000,-|\t\t|12.Teh Botol Sosro          Rp. 5.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |13.Kwetiau Goreng           Rp. 15.000,-|\t\t|13.Fanta                    Rp. 5.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |14.Kwetiau Kuah             Rp. 15.000,-|\t\t|14.Coca-Cola                Rp. 5.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |15.Kwetiau Ayam             Rp. 20.000,-|\t\t|15.Sprite                   Rp. 5.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |16.Kwetiau Sapi             Rp. 30.000,-|\t\t|16.Jus Melon                Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |17.Kwetiau Seafood          Rp. 30.000,-|\t\t|17.Jus Strawberry           Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |18.Bihun Ayam               Rp. 20.000,-|\t\t|18.Jus Alpukat              Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |19.Bihun Sapi               Rp. 30.000,-|\t\t|19.Blackcurrant             Rp. 15.000,-|\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    |20.Bihun Seafood            Rp. 30.000,-|\t\t|20.Es Batu                  Rp. 1.000,- |\t\t"<<endl;
                cout<<"\t\t\t\t\t\t\t    ==========================================\t\t==========================================\t\t\n\n"<<endl;

 //===================================================================================================================================================

    { //Program Data
        program:
            char nama[100];
            int i;
            int nomormeja;
            int tanggal;
            string bulan;
            double tahun;

            cout<<"\n\n\t\t\t\t\t\t\t    Tanggal    : "; cin>>tanggal;
            cout<<"\t\t\t\t\t\t\t    Bulan      : "; cin>>bulan;
            cout<<"\t\t\t\t\t\t\t    Tahun      : "; cin>>tahun;

            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t<SILAKAN MASUKAN DATA ANDA>"<<endl;
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\tNama Pembeli     : ";
            cin>>nama;
            cout<<"\t\t\t\t\t\t\t\t\t\t\t\tNomor Meja       : ";
            cin>>nomormeja;
    }

//====================================================================================================================================================

    { //Program Pemesanan
        pemesanan:
            cout<<"\n\n\n\n\n\t\t\t\t\t\t\t    MAU PESAN MAKANAN (Y/T) ? "; cin>>yt;
            cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
            if(yt=='Y'||yt=='y') {goto YA;}     if(yt=='T'||yt=='t') {goto TIDAK;}

            YA:
              cout<<"\n\n\t\t\t\t\t\t\t    Banyak jenis makanan yang di pesan  : "; cin>>makanan;

            pemesanan_makanan:
            for(i=1; i<=makanan; i++)
            {
                cout<<"\n\n\t\t\t\t\t\t\t    Jenis makanan ke-"<<i<<"   : "; cin>>pilihanmakanan;

                switch(pilihanmakanan)
                {
                    case 1:
                        {
                            harga1=5000;
                            JenisMakanan    = "Nasi Putih";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi Putih"<<endl; break;
                        }

                    case 2:
                        {
                            harga1=7000;
                            JenisMakanan    = "Nasi Uduk";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi Uduk"<<endl; break;
                        }

                    case 3:
                        {
                            harga1=15000;
                            JenisMakanan    = "Nasi Goreng";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi Goreng"<<endl; break;
                        }

                    case 4:
                        {
                            harga1=20000;
                            JenisMakanan    = "Nasi Goreng Spesial";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi Goreng Spesial"<<endl; break;
                        }

                    case 5:
                        {
                            harga1=30000;
                            JenisMakanan    = "Nasi Goreng Seafood";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Nasi Goreng Seafood"<<endl; break;
                        }

                    case 6:
                        {
                            harga1=20000;
                            JenisMakanan    = "Ayam Goreng";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ayam Goreng"<<endl; break;
                        }

                    case 7:
                        {
                            harga1=20000;
                            JenisMakanan    = "Ayam Bakar";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ayam Bakar"<<endl; break;
                        }

                    case 8:
                        {
                            harga1=25000;
                            JenisMakanan    = "Ayam Saus Teriyaki";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Ayam Saus Teriyaki"<<endl; break;
                        }

                    case 9:
                        {
                            harga1=15000;
                            JenisMakanan    = "Mie Ayam";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Mie Ayam"<<endl; break;
                        }

                    case 10:
                        {
                            harga1=20000;
                            JenisMakanan    = "Mie Goreng Ayam";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Mie Goreng Ayam"<<endl; break;
                        }

                    case 11:
                        {
                            harga1=30000;
                            JenisMakanan    = "Mie Goreng Sapi";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Mie Goreng Sapi"<<endl; break;
                        }

                    case 12:
                        {
                            harga1=30000;
                            JenisMakanan    = "Mie Goreng Seafood";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Mie Goreng Seafood"<<endl; break;
                        }

                    case 13:
                        {
                            harga1=15000;
                            JenisMakanan    = "Kwetiau Goreng";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kwetiau Goreng"<<endl; break;
                        }

                    case 14:
                        {
                            harga1=15000;
                            JenisMakanan    = "Kwetiau Kuah";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kwetiau Kuah"<<endl; break;
                        }

                    case 15:
                        {
                            harga1=20000;
                            JenisMakanan    = "Kwetiau Ayam";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kwetiau Ayam"<<endl; break;
                        }

                    case 16:
                        {
                            harga1=30000;
                            JenisMakanan    = "Kwetiau Sapi";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kwetiau Sapi"<<endl; break;
                        }

                    case 17:
                        {
                            harga1=30000;
                            JenisMakanan    = "Kwetiau Seafood";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Kwetiau Seafood   "<<endl; break;
                        }

                    case 18:
                        {
                            harga1=20000;
                            JenisMakanan    = "Bihun Ayam";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Bihun Ayam"<<endl; break;
                        }

                    case 19:
                        {
                            harga1=30000;
                            JenisMakanan    = "Bihun Sapi";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Bihun Sapi"<<endl; break;
                        }

                    case 20:
                        {
                            harga1=30000;
                            JenisMakanan    = "Bihun Seafood";
                            cout<<"\n\t\t\t\t\t\t\t    Makanan                      : Bihun Seafood"<<endl; break;
                        }

                    default:
                        {
                            cout<<"\t\t\t\t\t\t\t    Maaf jenis makanan tersebut tidak ada pada daftar menu"; break;
                        }
                }
                    cout<<"\n\t\t\t\t\t\t\t    Jumlah pemesanan             : "; cin>>jumlah1;
                    hargamakanan=jumlah1*harga1;
                    cout<<"\n\t\t\t\t\t\t\t    Harga                        : "<<hargamakanan<<endl;
                    cout<<"\n\t\t\t\t\t\t\t    ---------------------------------------------"<<endl;

                total=jumlah1*harga1;
                semuamakanan=semuamakanan+total;
            }

                cout<<"\n\n\t\t\t\t\t\t\t    TOTAL HARGA MAKANAN        = "<<semuamakanan<<endl;
                cout<<"\t\t\t\t\t\t\t    *********************************************"<<endl;
        }



        TIDAK:
        { //Program Minuman
            cout<<"\n\n\t\t\t\t\t\t\t    MAU PESAN MINUMAN (Y/T) ? "; cin>>yt;
            cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
            if(yt=='Y'||yt=='y') {goto YA1;}    if(yt=='T'||yt=='t') {goto BAYAR;}

            YA1:
            cout<<"\n\n\t\t\t\t\t\t\t    Banyak jenis minuman yang di pesan  : "; cin>>minuman;

            for(int i=1; i<=minuman; i++)
            {
                cout<<"\n\n\t\t\t\t\t\t\t    Jenis minuman ke-"<<i<<"   : "; cin>>pilihanminuman;

                switch(pilihanminuman)
                {
                    case 1:
                        {
                            harga2=4000;
                            JenisMinuman    = "Air Mineral";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Air Mineral"<<endl; break;
                        }

                    case 2:
                        {
                            harga2=0;
                            JenisMinuman    = "Teh Tawar Hangat";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Teh Tawar Hangat"<<endl; break;
                        }

                    case 3:
                        {
                            harga2=1000;
                            JenisMinuman    = "Es Teh Tawar";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Es Teh Tawar"<<endl; break;
                        }

                    case 4:
                        {
                            harga2=3000;
                            JenisMinuman    = "Teh Manis Hangat";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Teh Manis Hangat"<<endl; break;
                        }

                    case 5:
                        {
                            harga2=4000;
                            JenisMinuman    = "Es Teh Manis";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Es Teh Manis"<<endl; break;
                        }

                    case 6:
                        {
                            harga2=6000;
                            JenisMinuman    = "Jeruk Hangat";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Jeruk Hangat"<<endl; break;
                        }

                    case 7:
                        {
                            harga2=7000;
                            JenisMinuman    = "Es Jeruk";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Es Jeruk"<<endl; break;
                        }

                    case 8:
                        {
                            harga2=9000;
                            JenisMinuman    = "Lemon Tea Hangat";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Lemon Tea Hangat"<<endl; break;
                        }

                    case 9:
                        {
                            harga2=10000;
                            JenisMinuman    = "Es Lemon Tea";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Es Lemon Tea"<<endl; break;
                        }

                    case 10:
                        {
                            harga2=15000;
                            JenisMinuman    = "Green Tea";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Green Tea"<<endl; break;
                        }

                    case 11:
                        {
                            harga2=15000;
                            JenisMinuman    = "Thai Tea";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Thai Tea"<<endl; break;
                        }

                    case 12:
                        {
                            harga2=5000;
                            JenisMinuman    = "Teh Botol Sosro";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Teh Botol Sosro"<<endl; break;
                        }

                    case 13:
                        {
                            harga2=5000;
                            JenisMinuman    = "Fanta";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Fanta"<<endl; break;
                        }

                    case 14:
                        {
                            harga2=5000;
                            JenisMinuman    = "Coca-Cola";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Coca-Cola"<<endl; break;
                        }

                    case 15:
                        {
                            harga2=5000;
                            JenisMinuman    = "Sprite";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Sprite"<<endl; break;
                        }

                    case 16:
                        {
                            harga2=15000;
                            JenisMinuman    = "Jus Melon";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Jus Melon"<<endl; break;
                        }

                    case 17:
                        {
                            harga2=15000;
                            JenisMinuman    = "Jus Strawberry";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Jus Strawberry"<<endl; break;
                        }

                    case 18:
                        {
                            harga2=15000;
                            JenisMinuman    = "Jus Alpukat";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Jus Alpukat"<<endl; break;
                        }

                    case 19:
                        {
                            harga2=15000;
                            JenisMinuman    = "Blackcurrant";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Blackcurrant"<<endl; break;
                        }

                    case 20:
                        {
                            harga2=1000;
                            JenisMinuman    = "Es Batu";
                            cout<<"\n\t\t\t\t\t\t\t    Minuman                      : Es Batu"<<endl; break;
                        }

                    default:
                        {
                            cout<<"\t\t\t\t\t\t\t    Maaf jenis minuman tersebut tidak ada pada daftar menu"; break;
                        }
                }

                    cout<<"\n\t\t\t\t\t\t\t    Jumlah pemesanan             : "; cin>>jumlah2;
                    hargaminuman=jumlah2*harga2;
                    cout<<"\n\t\t\t\t\t\t\t    Harga                        : "<<hargaminuman<<endl;
                    cout<<"\n\t\t\t\t\t\t\t    ---------------------------------------------"<<endl;

                total=jumlah2*harga2;
                semuaminuman=semuaminuman+total;
            }

            cout<<"\n\n\t\t\t\t\t\t\t    TOTAL HARGA MINUMAN            = "<<semuaminuman<<endl;
            cout<<"\t\t\t\t\t\t\t    *********************************************"<<endl;
        }

        BAYAR :
        {
            bayar:
                totalsemua=semuamakanan+semuaminuman;
                cout<<"\n\n\t\t\t\t\t\t\t    -> TOTAL PEMBAYARAN        : "<<totalsemua<<endl;
                cout<<"\n\n\t\t\t\t\t\t\t    MAU MELAKUKAN PEMBAYARAN (Y/T) ? "; cin>>yt;
                cout<<"\n\t\t\t\t\t\t\t    ============================================="<<endl;
                if(yt=='Y'||yt=='y') {goto TIDAK1;}    if(yt=='T'||yt=='t') {goto pemesanan;}
        }


        TIDAK1 :
        { //Program Total Harga
            total:
                system("cls");

                cout<<"\t\t\t\t\t\t\t\t\t\t\t====================================="<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t|     SILAKAN LAKUKAN PEMBAYARAN    |"<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t=====================================\n\n"<<endl;

                cout<<"\n\n\t\t\t\t\t\t\t    -> TOTAL PEMBAYARAN : "<<totalsemua<<endl;

                cout<<"\n\n\t\t\t\t\t\t\t    Jenis Pembayaran : "<<endl;
                cout<<"\t\t\t\t\t\t\t    1. Cash"<<endl;
                cout<<"\t\t\t\t\t\t\t    2. BCA"<<endl;
                cout<<"\t\t\t\t\t\t\t    3. Mandiri"<<endl;
                cout<<"\t\t\t\t\t\t\t    4. BRI"<<endl;
                cout<<"\t\t\t\t\t\t\t    5. BNI"<<endl;
                cout<<"\t\t\t\t\t\t\t    6. BTN"<<endl;

                cout<<"\n\t\t\t\t\t\t\t    Pilih jenis pembayaran   : "; cin>>pembayaran;

                if (pembayaran==1)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan uang cash"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Dibayar dengan jumlah uang   : "; cin>>bayar;

                    if (bayar==totalsemua)
                    {
                        cout<<"\t\t\t\t\t\t\t    Uangnya Pas"<<endl;
                    }

                    else if(bayar>totalsemua)
                    {
                        kembalian=bayar-totalsemua;
                        cout<<"\t\t\t\t\t\t\t    Uang kembaliannya            : "<<kembalian<<endl;
                    }
                }

                else if (pembayaran==2)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BCA"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
                }

                else if (pembayaran==3)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM Mandiri"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
                }

                else if (pembayaran==4)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BRI"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
                }

                else if (pembayaran==5)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BNI"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
                }

                else if (pembayaran==6)
                {
                    cout<<"\n\n\t\t\t\t\t\t\t    Pembayaran menggunakan ATM BTN"<<endl;
                    cout<<"\t\t\t\t\t\t\t    Nomor ATM        : "; cin>>nomoratm;
                    cout<<"\t\t\t\t\t\t\t    Nama             : "; cin>>namaatm;
                    cout<<"\t\t\t\t\t\t\t    Total Pembayaran : "; cin>>bayar;
                }
        }

//====================================================================================================================================================

    { //Program Terahir
        cout<<"\n\n\t\t\t\t\t\t\t    -> Ada yang bisa di bantu lagi (Y/T) ? "; cin>>yt;
        cout<<"\n\t\t\t\t\t\t\t    ------------------------------------------------------------------------------------------"<<endl;
        if(yt=='Y'||yt=='y') {goto beranda;}       if(yt=='T') {goto TIDAK_AKHIR;}

        TIDAK_AKHIR:
        cout<<"\t\t\t\t\t\t\t\t\t\t-------------------------------------"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t|   Terimakasih Telah Mengunjungi   |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t|          Booo Restaurant          |"<<endl;
        cout<<"\t\t\t\t\t\t\t\t\t\t-------------------------------------"<<endl<<endl;
        getch();
    }
}

        else
        {
            cout<<"\n\nMaaf Username & Password yang Anda masukan salah!!!\n\n";
        }
   }

   while (i<=3);

   cout<<"Anda telah 3x memasukan Username & Password yang salah.\n";
   cout<<"Mohon maaf akun Anda kami Blokir untuk sementara.\n";
   cout<<"Silahkan hubungi kami melalui e-mail <booo.team@gmail.com>. Terima Kasih..";
   getch();
}

getch();
return 0;
}
