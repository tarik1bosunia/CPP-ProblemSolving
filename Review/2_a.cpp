// #include<iostream>

// using namespace std;

// typedef struct Array{
//     int size = 0;
//     int *arr;
//     int lastPos = -1;

//     Array(int size){
//         size = size;
//         arr = new int[size];
//     }
// } arra;

// void insert(int data, arra* studentRoll){

//     if(studentRoll->lastPos >= studentRoll->size){
//         cout << "array is already full, so can not insert" << endl;
//         return;
//     }
//     studentRoll->lastPos = studentRoll->lastPos + 1;
//     studentRoll->arr[studentRoll->lastPos] = data;
// }


// int main(){
//    arra* studentRoll = new arra(3);
//    insert(5, studentRoll);
//    insert(10, studentRoll);
//    insert(15, studentRoll);

//     cout << studentRoll->size << endl;
//    for(int i = 0; i <= studentRoll->lastPos; i++){
//     cout << studentRoll->arr[i] << " ";
//    }
//    cout << endl;


   
    
//     return 0;
// }


#include<iostream>

using namespace std;

class arra{
private:
    int size;
    int lastPos = -1;
    int *arr;
public:
    arra(int size){
        this->size = size;
        this->arr = new int[size];
       
    }
    void insert(int data){
        if(this->lastPos >= this->size - 1){
            cout << "array is already full, so can not insert" << endl;
            return;
        }
        this->lastPos = this->lastPos + 1;
        this->arr[this->lastPos] = data;
        cout << "inserted successfully" << endl;
    }  

    void remove(int data){
       
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
    // data = 7
    // temp = 9
    // 1 2 3 4 5 7
    void a_2(int data){
        int temp;
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

    // pos = 5
    // data = 55
    // temp = 55
    // 5 10 15 20 99 25 30 55
    void c_2(int data, int pos){
        int temp = arr[pos-1];
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

    void print(){
          
        for(int i = 0; i <= this->lastPos; i++){
            cout << this->arr[i] << " ";
        }
        cout << endl;
    }      

};

int main(){
    arra* roll = new arra(10);
    roll->insert(1);
    roll->insert(2);
    roll->insert(3);
    roll->insert(5);
    roll->insert(7);
    roll->insert(9);

// 2_a
    // roll->print();
    // roll->a_2(4);
    // roll->print();

// 2_c
    roll->print();
    roll->c_2(99, 5);
    roll->print();


    
    return 0;
}


