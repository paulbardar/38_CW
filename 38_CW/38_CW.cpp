// 38_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Queue.h"

int main()
{
    myQueue::Queue<std::string> nums;
    nums.show();

    nums.push_back("Pavlo");
    nums.push_back("Olena");
    nums.push_back("Dmytro");
    nums.push_back("Volodymyr");
    nums.show();

    cout << "=============================\n\n";

    while (!nums.isEmpty()) {
        cout << " FIRST " << nums.first() << endl;
        nums.show();
        nums.pop_front();
    }
    cout << endl;
    nums.show();


    return 0;
}


