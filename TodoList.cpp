#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

int main() {
    std::vector<Task> tasks;

    while (true) {
        std::cout << "To-Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].description;
            if (tasks[i].completed) {
                std::cout << " (Completed)";
            }
            std::cout << std::endl;
        }

        std::cout << "\nOptions:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Exit\n";
        std::cout << "3. Continue\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Task newTask;
            std::cout << "Enter task description: ";
            std::cin.ignore();  // Clear the input buffer
            std::getline(std::cin, newTask.description);
            newTask.completed = false;
            tasks.push_back(newTask);
        } else if (choice == 2) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
