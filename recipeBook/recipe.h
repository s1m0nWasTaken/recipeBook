#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H

#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"
#include "vector"
#include <string>

using namespace std;

class recipe : public Image, public recipeText
{
public:
    struct NationalCuisine
    {
        bool Polish;
        bool Italian;
        bool Ukrainian;
        bool Russian;
    };

    void showText();

    void setText(string input);

    recipe *operator+(ingredients);

    const std::string &getImage() const;

    void setImage(const std::string &image);

    const std::vector<ingredients> &getListIngredients() const;

    void setListIngredients(const std::vector<ingredients> &listIngredients);

    std::string getIngredientName(ingredients ingredient);

    const std::string &getName() const;

    void addIngredient(ingredients);

    void setName(const std::string &name);

    void setCuisine(int type);

    void deepCopy(recipe &i);

    void copy(recipe &i);

    bool getCuisine(int);

    string getText();

private:

    void addImage(std::string string) override;

    void removeImage() override;

private:
    std::string Name;
    std::string Image;
    std::string Image2;
public:
    const string &getImage2() const;

    void setImage2(const string &image2);

private:
    std::vector<ingredients> listIngredients;
    NationalCuisine cuisine;
};


#endif //RECIPEBOOK_RECIPE_H
