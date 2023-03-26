//
// Created by szymo on 26/03/2023.
//

#ifndef RECIPEBOOK_RECIPETEXT_H
#define RECIPEBOOK_RECIPETEXT_H
#include <string>

namespace baseTextEdit
{
    class recipeText;
}

class recipeText
{
public:
    virtual void showText();
    void replaceText(std::string storeText);
protected:
    std::string storeText;
};


#endif //RECIPEBOOK_RECIPETEXT_H
