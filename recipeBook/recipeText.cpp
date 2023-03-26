//
// Created by szymo on 26/03/2023.
//

#include "recipeText.h"
#include <iostream>

void recipeText::showText() //virtual function
{
    std::cout << storeText << std::endl; // define base-case for class
};
void recipeText::replaceText(std::string storeText) // Function for every class that will set text for my data field.
{
    this->storeText = storeText;
};
