// 38_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Queue.h"
#include "Music.h"
#include <deque>
#include <ctime>

int main()
{

    srand(time(0));
    /*
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
    */

    std::deque<Music> folder;

    folder.push_back(Music("Single Ladies", "Beyonce", 2008));
    folder.push_back(Music("Umbrella", "Rihanna featuring Jay - Z", 2007));
    folder.push_back(Music("Shake it Off", "Taylor Swift", 2010));

    myQueue::Queue<Music> play;

    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);

    while (!play.isEmpty())
    {
        Music item = play.first();
        cout << item.getName() << " " << item.getAuthor() << " " << item.getYear() << endl;
        play.pop_front();
        cout << endl;
    }

    return 0;
}


