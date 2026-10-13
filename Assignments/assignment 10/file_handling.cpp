/* File Handling with C++ using ifstream & ofstream class object */
/* To write the content in file */
/* Then to read the content of file */

#include <iostream>   // for standard input/output
#include <fstream>    // for ifstream, ofstream, fstream classes
using namespace std;

int main() {
    // Creation of ofstream class object
    ofstream fout;
    string line;

    // By default ios::out mode is used, which deletes old content.
    // To append content, use: fout.open("sample.txt", ios::app);
    fout.open("sample.txt",ios::app);

    // Execute a loop if file successfully opened
    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    cout << "Enter text (type -1 to stop):" << endl;
    while (true) {
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fout << line << endl;
    }

    // Close the file
    fout.close();

    // Creation of ifstream class object to read the file
    ifstream fin;
    fin.open("sample.txt");

    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nFile content:\n";
    // Execute a loop until EOF (End of File)
    while (getline(fin, line)) {
        // Print line (read from file) in Console
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}