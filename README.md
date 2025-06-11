# TASK-1-CPP-FILE-MANAGEMENT-TOOL

COMPANY: CODTECH IT SOLUTIONS

NAME: SOUMIK SAHA

INTERN ID: CTO4DN437

DOMAIN: C++ PROGRAMMING 

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH

DESCRIPTION OF THE TASK: 
This C++ program is a simple File Management Tool that allows users to perform basic file operations such as writing, reading, and appending text in a file. The program demonstrates file handling using standard C++ libraries (<iostream> and <fstream>), and provides a menu-driven interface for user interaction.

The tool uses a fixed filename, sampleFile.txt, and offers the following functionalities:

Write to File (Overwrite):
The writeFile() function allows the user to enter new data that completely replaces the existing content of the file. It uses the ofstream object to open the file in default (overwrite) mode. If the file cannot be opened, an error message is displayed.

Read from File:
The readFile() function reads and displays the contents of the file line by line using the ifstream object. It checks for file access errors and informs the user if the file cannot be opened.

Append to File:
The appendFile() function lets the user add data to the end of the file without deleting the existing content. It uses the ofstream object with the ios::app flag to open the file in append mode.

The program’s main() function displays a user-friendly menu that continuously prompts the user until the exit option is selected. Based on the user's input, it calls the corresponding function to perform the chosen operation. Error handling is also included to notify users of invalid inputs or file access issues.

This tool provides a foundational understanding of file operations in C++, making it useful for beginners learning about persistent data storage and file I/O handling in software development.

Key Features:

Simple user interface via console.

File operations: overwrite, read, and append.

Use of ofstream and ifstream for file handling.

Includes basic error checking and input validation.

Overall, this project serves as a basic but practical implementation of file manipulation in C++, ideal for educational purposes or small utility applications.




