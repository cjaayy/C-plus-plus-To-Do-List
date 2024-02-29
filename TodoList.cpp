#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
   string description;
    bool completed;
};

int main() {
    vector<Task> tasks;

    while (true) {
        cout << "To Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
           cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed) {
               cout << " (Completed)";
            }
            cout << endl;
        }

       cout << "\nOptions:\n";
       cout << "1. Add Task\n";
       cout << "2. Exit\n";
       cout << "3. Continue\n";
       cout << "Enter your choice: ";

        int choice;
       cin >> choice;

        if (choice == 1) {
            Task newTask;
            cout << "Enter task description: ";
            cin.ignore();  // Clear the input buffer
            getline(cin, newTask.description);
            newTask.completed = false;
            tasks.push_back(newTask);
        } else if (choice == 2) {
            break;
        } else {
           cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
