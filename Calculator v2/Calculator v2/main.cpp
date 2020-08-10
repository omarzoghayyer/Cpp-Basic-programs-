//
//  main.cpp
//  Calculator v2
//
//  Created by Omar Zoghayyer on 8/9/20.
//  Copyright © 2020 Omar Zoghayyer. All rights reserved.
//

#include <iostream>


int main() {
    int num1,num2;
    char op;
    
    std::cout << "Enter a number"<< std::endl;
    std::cin >> num1;
    std::cout << "Enter an operator" << std::endl;
    std::cin >> op;
    std::cout << "Enter a second number"<< std::endl;
    std::cin >> num2;

    int results;
    
    if(op == '+'){
        results  = num1 + num2;
    } else if (op == '-') {
        results = num1 - num2;
    } else if (op == '/'){
        results = num1 / num2;
    } else if ( op == '*'){
        results = num1 * num2;
    }else{
        std::cout << "Invalid Attempt; please enter a valid operator such as `+`, `-`, `*`, `/ ` ";
    }
    std::cout << "The result is: " << results << std::endl;
}
