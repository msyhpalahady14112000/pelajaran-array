#include <iostream>
using namespace std;
int main(){
    
    int data[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    for(int i = 0; i < 20; i++){
        cout<<data [i]<<",";

    }
    cout<<endl;

    cout<<"tampilkan data ke 8 dan 15"<<endl;

    cout<<"data ke 8 = "<<data[8]<<endl;
    cout<<"data ke 15 ="<<data[15]<<endl;
   
    
        cout<<endl;
    cout<<"menampilkan bilangan ganjil"<<endl;
        for(int i =0; i < 20; i++){

            if(data[i]&2 != 1)
            {
                 cout<<data[i]<<",";
            }
           
        }


    // mengisi data
        // data[0]=1;
        // data[1]=2;
        // data[2]=3;
        // data[3]=4;
        // data[4]=5;
        // data[5]=6;
        // data[6]=7;
        // data[7]=8;
        // data[8]=9;
        // data[9]=10;
        // data[10]=11;
        // data[11]=12;
        // data[12]=13;
        // data[13]=14;
        // data[14]=15;
        // data[15]=16;
        // data[16]=17;
        // data[17]=18;
        // data[18]=19;
        // data[19]=20;

        // //mencetak isi array

        // cout<<"data ke 1 ="<<data[0]<<endl;
        // cout<<"data ke 2 ="<<data[1]<<endl;
        // cout<<"data ke 3 ="<<data[2]<<endl;
        // cout<<"data ke 4 ="<<data[3]<<endl;
        // cout<<"data ke 5 ="<<data[4]<<endl;
        // cout<<"data ke 6 ="<<data[5]<<endl;
        // cout<<"data ke 7 ="<<data[6]<<endl;
        // cout<<"data ke 8 ="<<data[7]<<endl;
        // cout<<"data ke 9 ="<<data[8]<<endl;
        // cout<<"data ke 10 ="<<data[9]<<endl;
        // cout<<"data ke 11 ="<<data[10]<<endl;
        // cout<<"data ke 12 ="<<data[11]<<endl;
        // cout<<"data ke 13 ="<<data[12]<<endl;
        // cout<<"data ke 14 ="<<data[13]<<endl;
        // cout<<"data ke 15 ="<<data[14]<<endl;
        // cout<<"data ke 16 ="<<data[15]<<endl;
        // cout<<"data ke 17 ="<<data[16]<<endl;
        // cout<<"data ke 18 ="<<data[17]<<endl;
        // cout<<"data ke 19 ="<<data[18]<<endl;
        // cout<<"data ke 20 ="<<data[19]<<endl;

        // cout<<endl;


        return 0;

}