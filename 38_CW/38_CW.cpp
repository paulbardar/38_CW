// 38_CW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Queue.h"
#include "Music.h"
#include <deque>
#include <ctime>
#include "PriorityQueue.h"
#include "Person.h"


int main()
{
    

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
    /*
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
    */

    /*
    myQueue::PriorityQueue<int> nums;
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(1);

    nums.show();

    */

    //Task 4
    myQueue::PriorityQueue<Person> hospital;
    hospital.push_back(Person("Elisey"));
    hospital.push_back(Person("Mikhaylo", 0, 0, 1));
    hospital.push_back(Person("Iryna", 0, 0, 1));
    hospital.push_back(Person("Iryna", 1, 1, 0));
    hospital.push_back(Person("Maxim", 1, 0, 0));

    while (!hospital.isEmpty()) {
        hospital.first().showInfo();
        hospital.pop_front();

    }

    return 0;
}


