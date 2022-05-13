#include<iostream>
   
   
using namespace std;

 struct Friend
{
    string name;
    string address;

    Friend* Nextaddress;
    
    
};
    
int main(){
   
   Friend tarik,rabitry, esha;
   tarik.name = "Tarik";
   tarik.address = "Rangpur";
   tarik.Nextaddress = &rabitry;
  


   rabitry.name = "Rabitry";
   rabitry.address = "Naogaon";
   rabitry.Nextaddress = &esha;

   esha.name = "Esha";
   esha.address = "Chuadnagga";
   esha.Nextaddress = NULL;


   cout << tarik.Nextaddress->Nextaddress->name << endl;
   cout << tarik.Nextaddress->Nextaddress->address << endl;

   
    return 0;
}
