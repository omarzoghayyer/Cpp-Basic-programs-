//
//  main.cpp
//  Mad Lips
//
//  Created by Omar Zoghayyer on 8/8/20.
//  Copyright © 2020 Omar Zoghayyer. All rights reserved.
//

#include <iostream>

int main()
{
    std::string color, flowerName, celebrity;
    
    std::cout << "Enter a color: ";
        getline(std::cin, color);

    std::cout << "Enter a Flower Name: ";
       getline(std::cin, flowerName);
    std::cout << "Enter a celebrity name: ";
       getline(std::cin, celebrity);
        
    std::cout << "Roses are " << color << std::endl;
    std::cout << flowerName <<  " are blue "<< std::endl;
    std::cout << "I love " << celebrity << " <3" << std::endl;

    
    return 0;
}
