
#include<iostream>

using namespace std;

class arra{
private:
    int size;
    int lastPos = -1;
    string *arr;
public:
    arra(int size){
        this->size = size;
        this->arr = new string[size];
    }
    void insert(string data){
        if(this->lastPos >= this->size - 1){
            cout << "array is already full, so can not insert" << endl;
            return;
        }
        this->lastPos = this->lastPos + 1;
        this->arr[this->lastPos] = data;
        cout << "inserted successfully" << endl;
    }  

    void remove(string data){
       
        for(int i = 0 ; i <= this->lastPos; i++){
            if(arr[i] == data){
                // 5 10 15 20 25
                for(int j = i ; j < this->lastPos ; j++){
                    arr[j] = arr[j+1];

                }
                this->lastPos = this->lastPos -1;
                cout << data << " removed successfully" << endl;
                return;
            }
             
        }
        cout << "data not found ... can not remove." << endl;
    }
    void b_2(string data){
        string temp;
        for (int i = 0; i <= lastPos; i++){
            if(arr[i] > data){
                temp = arr[i];
                arr[i] = data;
                data = temp;
            }

           
        }
        lastPos = lastPos + 1;
        arr[lastPos] = temp;
    }

    void d_2(string data, int pos){
        string temp = arr[pos-1];
        arr[pos-1] = data;
        data = temp;
        for (int i = pos; i <= lastPos; i++){
            temp = arr[i];
            arr[i] = data;
            data = temp;
        }
        lastPos = lastPos + 1;
        arr[lastPos] = temp;
        
    }
    // ela esha mominur rabitry Karim  pakistan india tarik
    // ela esha mominur rabitry pakistan india tarik
    void a_3(string data){

        for(int i = 0 ; i <= lastPos; i++){
            if(data == arr[i]) {
                for(int j = i ; j < lastPos; j++)
                    arr[i] = arr[i+1];
                lastPos = lastPos -1;
                return;   
            }
        }
        cout << "the data " << data << " can not be found." << "so can't delete" << endl;
    }

    void print(){
          
        for(int i = 0; i <= this->lastPos; i++){
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }      

};

int main(){
    arra* roll = new arra(10);
    roll->insert("ela");
    roll->insert("esha");
    roll->insert("mominur");
    roll->insert("rabitry");
    roll->insert("karim");
    roll->insert("tarik");
    roll->insert("pakistan");
    roll->insert("india");

    roll->print();
    roll->a_3("karim");
    roll->print();


    return 0;
}


