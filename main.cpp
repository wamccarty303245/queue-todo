#include <iostream>
#include "queue_head.h"
using std::string;
using namespace std;


int main() {
    string title, description, status;
    int taskCount;
    cout << "How many tasks would you like to add?" << endl;
    cin >> taskCount;





    vector<tasksToDo> toDoList;


    for (int i = 0; i < taskCount; i++ ){
        cout << "Please input your title." << endl;
        cin.ignore();
        getline (cin, title);
        cout << endl;
        cout << "Please input your description." << endl;
        getline (cin, description);
        cout << endl;
        cout << "Please input your status." << endl;
        getline (cin, status);
        cout << endl;
        addTask(toDoList, title, description, status);
    }

    displayTasks(toDoList);



}
