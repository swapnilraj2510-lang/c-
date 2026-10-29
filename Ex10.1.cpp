#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    if (!fout) {
        cerr << "Could not open sample.txt for writing." << endl;
        return 1;
    }

    string line;
    cout << "Enter text to write to file (type -1 to stop):" << endl;
    while (getline(cin, line)) {
        if (line == "-1") {
            break;
        }
        fout << line << endl;
    }
    fout.close();

    if (!fout) {
        cerr << "An error occurred while writing to sample.txt." << endl;
        return 1;
    }

    ifstream fin("sample.txt");
    if (!fin) {
        cerr << "Could not open sample.txt for reading." << endl;
        return 1;
    }

    cout << "\nReading contents from file:" << endl;
    while (getline(fin, line)) {
        cout << line << endl;
    }

    return 0;
}