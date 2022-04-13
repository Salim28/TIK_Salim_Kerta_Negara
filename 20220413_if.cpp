#include <iostream>
using namespace std;

int main(){
   /*
   jika nilai>=90 lulus sangat memuaskan
   jika nilai>=80 lulus memuaskan
   jika nilai>=75 cukup
   <=75 tidak lulus
   <=0 nilai melebihi jangkauan
   >=100 nilai melebihi jangkauan
   */
   int nilai;
   cout<<"Masukan Nilai=";cin>>nilai;
   if (nilai >100 || nilai<0)
   cout<<"diluar jangkauan";
}
   if (nilai>=90){
     cout<<"lulus sangat memuaskan";
}
else if (nilai>=80){
     cout<<"lulus memuaskan";
}
else if (nilai>=75){
     cout<<"cukup";
}
else{
cout<<"tidak lulus";



 return 0;
}//end of main function
