#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <string>

using namespace std;

//Function Prototypes
void MainMenu();
void CurrentTasks();
void ManageTasks();
void AddTasks();
void Exit();

//Function declaration
void CurrentTasks(){
    cout << "- - - Task Tracker cli - - -" << endl;
    cout << "- - - CURRENT TASKS - - -" << endl;
}
void ManageTasks(){
    cout << "- - - Task Tracker cli - - -" << endl;
    cout << "- - - MANAGE TASK - - -" << endl;
}
void AddTasks(){
    cout << "- - - Task Tracker cli - - -" << endl;
    cout << "- - - ADD A TASK - - -" << endl;
}
void Exit(){

}

void MainMenu(){
    int option;

    cout << "- - - Task Tracker cli - - -" << endl;
    cout << "[1] View Current Tasks" << endl;
    cout << "[2] Manage Tasks" << endl;
    cout << "[3] Add Task" << endl;
    cout << "[4] Exit " << endl;
    cout << "Enter Option: "; cin >> option;

    switch (option){
        case 1:
        system("cls");
        CurrentTasks();
        break;
        case 2:
        system("cls");
        ManageTasks();
        break;
        case 3:
        system("cls");
        AddTasks();
        break;
        case 4:
        system("cls");
        Exit();
        break;
        default:
        system("cls");
        cout << "Wrong Input, Please input a valid option" << endl;
        Sleep(3000);
        system("cls");
        MainMenu();

    }
}

int main(){
    MainMenu();
}