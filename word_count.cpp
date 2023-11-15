#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Unable to open the file." <<endl;
        return -1; // Return -1 to indicate an error
    }

    string word;
    int wordCount = 0;

    while (file >> word) {
        wordCount++;
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    int totalWords = countWordsInFile(filename);

    if (totalWords != -1) {
        cout << "Total words in the file: " << totalWords <<endl;
    }
    return 0;
}
