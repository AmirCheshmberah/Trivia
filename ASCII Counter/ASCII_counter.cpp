#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

void counter(const string& input);

int main (int argc, char* argv[])
{
    if(argc == 1)
    {
        string input{};
        cout << "Enter something: ";
        getline(cin, input);
        counter(input);
    }

    else if(argc == 2)
    {
        counter(argv[1]);
    }

    else
    {
        cout << "1) Usage: ./ASCII_counter\n";
        cout << R"(2) Usage: ./ASCII_counter "SOME_STRING")" << endl;
    }
    return 0;
}

void counter(const string& input)
{
    char input_copy[input.length()+1] = {0};
    input_copy[input.length()] = '\0';

    for(int i = 0; i < input.length(); i++)
    {
        char j{0};
        if(input[i] >= 'A' && input[i] <= 'Z') // upperCase
        {
            j = 'A';
            while(j <= input[i])
            {
                input_copy[i] = j++;
                cout << input_copy << '\n';
                usleep(100000);
            }
        }

        else if(input[i] >= 'a' && input[i] <= 'z') // lowerCase
        {
            j = 'a';
            while(j <= input[i])
            {
                input_copy[i] = j++;
                cout << input_copy << '\n';
                usleep(100000);
            }
        }
        else if(input[i] >= '0' && input[i] <= '9') // numbers
        {
            j = '0';
            while(j <= input[i])
            {
                input_copy[i] = j++;
                cout << input_copy << '\n';
                usleep(100000);
            }
        }
        else // others characters
        {
            input_copy[i] = input[i];
            cout << input_copy << '\n';
            usleep(100000);
        }
    }
    system("pause");


}