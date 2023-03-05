#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream file;
    string data;
    cout << "File: " << argv[1] << endl;
    file.open(argv[1]);
    if (file.is_open())
    {
        char curr_char;
        while (file)
        {
            curr_char = file.get();
            data += curr_char;
        }
    }
    file.close();
    vector<string> lines;
    string curr;
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] != '\n')
        {
            curr += data[i];
        }
        else if (data[i] == '\n')
        {
            lines.push_back(curr);
            curr = '\0';
        }
    }
    for (int j = 0; j < lines.size(); j++)
    {
        // Interpreter code for the actual execution per line
        string curr_line = lines[j];
        cout << "[" << curr_line << "] ";
    }
    return 0;
}
