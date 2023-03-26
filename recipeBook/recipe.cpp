#include <iostream>
#include "recipe.h"
#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"

/*
 * Overloading the "+" operator
 */
recipe* recipe::operator+(ingredients newIngredient)
{
    listIngredients.push_back(newIngredient);
    return this;
};

void recipe::addImage(std::string string)
{
    Image = string;
}

const std::string &recipe::getImage() const
{
    return Image;
}

void recipe::setImage(const std::string &image)
{
    Image = image;
}

const std::vector<ingredients> &recipe::getListIngredients() const
{
    return listIngredients;
}

void recipe::setListIngredients(const std::vector<ingredients> &listIngredients)
{
    recipe::listIngredients = listIngredients;
}


void recipe::removeImage()
{
    Image = "";
}

void recipe::showText()
{
    for(ingredients i: listIngredients)
    {
        std::cout << i.toString() << getIngredientName(i) << std::endl;
    }
    std::cout << storeText << std::endl;
};

std::string recipe::getIngredientName(ingredients ingredient)
{
    return ingredient.name;
}

const std::string &recipe::getName() const
{
    return Name;
}

void recipe::setName(const std::string &name)
{
    Name = name;
}
