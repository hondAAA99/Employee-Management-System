# Employee Management Program

## Overview
This program allows users to manage a list of employees by adding their details (name, email, and ID) and searching for employees by their employee number. Additionally, the program can be exited upon the user's request.

## Features
1. **Add New Employees**: 
   - Enter the number of employees you want to add, and input their details (name, email, and ID).
   
2. **Search Employees**: 
   - Search for an employee by entering their employee number. If found, their details (name, email, ID) will be displayed.
   
3. **Exit the Program**: 
   - Exits the program when prompted.

## How to Set Up and Run the Program

### Prerequisites
- A **C++ compiler** such as `g++` is needed to compile and run the program.
- The program can be run on any system that supports C++.

### Steps to Run
1. **Clone the Repository**
   - Open a terminal (or Command Prompt on Windows) and run the following command to clone the repository:
   ```bash
   git clone https://github.com/your-username/employee-management-system.git

## How the Program Works

### Program Workflow

1. **User Input**:
    - The program starts by asking the user to choose an operation:
      - **'A'**: Add new employees.
      - **'S'**: Search for an employee.
      - **'E'**: Exit the program.
  
2. **Add Employees**:
    - When the user selects 'A', they are asked to enter the number of employees they want to add.
    - For each employee, the user is prompted to enter:
      - Employee name
      - Employee email
      - Employee ID
    - The employee number is automatically assigned.

3. **Search for an Employee**:
    - When the user selects 'S', they are asked to enter the employee number they want to search.
    - If the employee is found, the program prints their details (name, email, ID).
    - If the employee is not found, the program will display a "not found" message.

4. **Exit the Program**:
    - When the user selects 'E', the program displays a message and exits.

### Sample Workflow:

1. **Add Employees**:
    ```bash
    please enter the operation you need  ('A' for adding new employees, 'S' for searching, 'E' for exit the program): A
    enter the number of employees: 2
    Please enter name, email, id
    Employee number: 1
    Name: John Doe
    Email: john.doe@example.com
    ID: 12345
    Please enter name, email, id
    Employee number: 2
    Name: Jane Smith
    Email: jane.smith@example.com
    ID: 67890
    ```

2. **Search for Employee**:
    ```bash
    please enter the operation you need  ('A' for adding new employees, 'S' for searching, 'E' for exit the program): S
    enter the employee number: 1
    The name is: John Doe
    The email is: john.doe@example.com
    The ID is: 12345
    ```

3. **Exit Program**:
    ```bash
    please enter the operation you need  ('A' for adding new employees, 'S' for searching, 'E' for exit the program): E
    The program is ended.
    ```

## Future Enhancements
- Save employee data to a file for persistence across sessions.
- Load employee data from a file on startup.
- Add functionality to delete or update employee details.

## License
This project is licensed under the MIT License.
