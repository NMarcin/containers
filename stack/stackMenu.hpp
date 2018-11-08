#pragma once
#include <Stack.hpp>
#include <iostream>


void stackMenu()
{
    std::string menuStack = "Stack menu :\nEmpty = e:\nSize = s\nTop = t\nPush = u\nPop = a\nQuit = q\n";

    char option;
    std::cin >> option;
    Stack stack;
    while('q' != option)
    {
        switch (option)
        {
            case 'e':
                std::cout << stack.empty() << std::endl;
                break;
            case 's':
                std::cout << stack.size() << std::endl;
                break;
            case 't':
                if(nullptr != stack.top())
                {
                    std::cout << stack.top()->getValue() << std::endl;
                }
                else
                {

                    std::cout << "Stack is empty!" << std::endl;
                }
                break;
            case 'u':
                int value;
                std::cout << "Value to push: " << std::endl;
                std::cin >> value;
                stack.push(value);
                break;
            case 'o':
                stack.pop();
                break;
            case 'm':
                std::cout << menuStack << std::endl;
                break;
            default:
                std::cout << "Wrong optiont, try again" << std::endl;
                break;
        }
        std::cin >> option;
        std::cin.get();
    }
}