#include <iostream>
#include <string>
using namespace std ;

    struct emps {
    unsigned number , id ;
    string email , name;
    };

    class funs {
    private :
        unsigned employeeNum=0;
        unsigned i=0;
        emps arr[1000];
    public :
        void operation_adding (char O){
            cout << "enter the number of employees: ";
            cin >> employeeNum ;
            if (O == 'A'){
            for ( i=0 ; i<employeeNum ; i++ ){
                cout << "please enter the data: " << endl;
                cout << "name: " ;
                cin >> arr[i].name;
                cout << "email: ";
                cin >> arr[i].email;
                cout << "id: ";
                cin >> arr[i].id;
                cout << "the number of the employee: " << i+1 << endl;
                }
            }
        }
         void operation_search (char O){
             unsigned searched ;
            if (O == 'S'){
                cout << "enter the emplyee number: ";
                cin >> searched ;
                for (  i=0 ; i<employeeNum ; i++ ){
                    if (arr[1].number == searched){
                        cout << "the name is: " << arr[i].name << endl;
                        cout << "the mail is: " << arr[i].email << endl;
                        cout << "the id is: " << arr[i].id << endl;
                        return;
                    } else
                        cout << "the employee not found";
                }
            }
        }
         void operation_exit (char O){
            if (O == 'E'){
                cout << "the programe is ended";
                exit(0);
                }
            }
        };
    int main (){
        char operation ;
        char Return ;

        funs fun_op;
do{
         for (int i = 0 ; i<=10000 ; i++ ){
        cout << "('A' for adding new employees, 'S'for searching, 'E'for exit the programe)" << endl;
        cout << "please enter the operation you need: " ;
        cin >> operation ;
            fun_op.operation_adding(operation);
            fun_op.operation_search(operation);
            fun_op.operation_exit(operation);
        cout << "do you ant anther operation (y/n): ";
        cin >> Return ;
         }
}while (Return == 'y');
    }
