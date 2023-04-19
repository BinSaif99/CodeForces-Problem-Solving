#include <iostream>
#include <string>

int main(void) {

    int flag = 0;
    std::string input;
    std::cin >> input;

    for(int i = 0; i < input.size(); ++i)
    {
        if(input[i] == '4' || input[i] == '7')
        {
            flag++;
        }
    }

    if(flag == 4 || flag == 7)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    return 0;
}
