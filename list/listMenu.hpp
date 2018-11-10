#pragma once
#include <List.hpp>


void listMenu()
{
    std::string menuQueue = "List menu :\nEmpty = e:\nSize = s\nFront = f\nBack = b\nPush = u\nPop = o\nQuit = q\n";
    std::cout << "Type 'm' for menuQueue" << std::endl;
    char option;
    std::cin >> option;
    List list;
    while('q' != option)
    {
        switch (option)
        {
            case 'e':
                std::cout << list.empty() << std::endl;
                break;
            case 's':
                std::cout << list.size() << std::endl;
                break;
            case 'f':
                if(nullptr != list.front())
                {
                    std::cout << list.front()->getValue() << std::endl;
                }
                else
                {

                    std::cout << "Queue is empty!" << std::endl;
                }
                break;
            case 'b':
                if(nullptr != list.back())
                {
                    std::cout << list.back()->getValue() << std::endl;
                }
                else
                {

                    std::cout << "Queue is empty!" << std::endl;
                }
                break;
            case ',':
                int valueF;
                std::cout << "Value to push: " << std::endl;
                std::cin >> valueF;
                list.push_front(valueF);
                break;
            case '.':
                int valueB;
                std::cout << "Value to push: " << std::endl;
                std::cin >> valueB;
                list.push_back(valueB);
                break;
            case 'k':
                list.pop_front();
                break;
            case 'l':
                list.pop_back();
                break;
            case 'm':
                std::cout << menuQueue << std::endl;
                break;
            default:
                std::cout << "Wrong optiont, try again" << std::endl;
                break;
        }
        std::cin >> option;
        std::cin.get();
    }
}