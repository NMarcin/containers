#pragma once
#include <Queue.hpp>
#include <iostream>


void queueMenu()
{
    std::string menuQueue = "Stack menu :\nEmpty = e:\nSize = s\nFront = f\nBack = b\nPush = u\nPop = o\nQuit = q\n";
    std::cout << "Type 'm' for menuQueue" << std::endl;
    char option;
    std::cin >> option;
    Queue queue;
    while('q' != option)
    {
        switch (option)
        {
            case 'e':
                std::cout << queue.empty() << std::endl;
                break;
            case 's':
                std::cout << queue.size() << std::endl;
                break;
            case 'f':
                if(nullptr != queue.front())
                {
                    std::cout << queue.front()->getValue() << std::endl;
                }
                else
                {

                    std::cout << "Queue is empty!" << std::endl;
                }
                break;
            case 'b':
                if(nullptr != queue.back())
                {
                    std::cout << queue.back()->getValue() << std::endl;
                }
                else
                {

                    std::cout << "Queue is empty!" << std::endl;
                }
                break;
            case 'u':
                int value;
                std::cout << "Value to push: " << std::endl;
                std::cin >> value;
                queue.push(value);
                break;
            case 'o':
                queue.pop();
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