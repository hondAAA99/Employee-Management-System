#include <iostream>
#include <string>
using namespace std ;

struct emps {
unsigned numberOfworker, id;
string name , email ;
};

void looping (emps arr[], unsigned index);
void Search(emps arr[], unsigned index);
void program (char& opr, emps arr[], unsigned index);

void looping (emps arr[], unsigned index){

    int i = 0;
    char answer ;

    for( ; i<index ; i++){
    arr[i].numberOfworker = i+1 ;
    cout << " enter the info of your worker:\t(number of worker , ID , name , email) \n";
    cout << "the number of your worker is  " << arr[i].numberOfworker << "\n";
    cin >> arr[i].id >> arr[i].name >> arr[i].email ;
    cout << "is there other worker?  (y/n)" "\n";
    cin >> answer ;
    if (answer == 'n' || answer == 'N'){
        break;
}
    }
        }

void Search(emps arr[], unsigned index){
        index = index -1 ;
        cout << "enter the number you want to search: \t";
        cin >> index ;
        cout << arr[index].numberOfworker << arr[index].id << arr[index].name , arr[index].email;
}

void program (char& opr, emps arr[], unsigned index){
        for (int i=0  ; i <=1000 ; i++){
            cout << "enter the operation ('S' for search , 'A' for add new worker , 'E' for exit ) \n" ;

            cin >> opr ;

        if (opr == 'E'){

            cout << " the program is ended" ;

            break ;
    }
        else if ( opr == 'A' ){
            looping( arr, 100);
            break ;
        }
            else {
            Search( arr, 100);
            }
}
}

int main (){
    emps Array[100];
    char operation ;
    program (operation, Array, 100);
return 0 ;
    }
