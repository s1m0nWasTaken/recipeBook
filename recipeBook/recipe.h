#ifndef RECIPEBOOK_RECIPE_H
#define RECIPEBOOK_RECIPE_H
#include "recipeText.h"
#include "Image.h"
#include "ingredients.h"
#include "vector"


class recipe : public Image, public recipeText
{
public:
    struct NationalCuisine{
        bool Polish;
        bool Indian;
        bool Italian;
        bool Chinese;
        bool Russian;
        bool Ukrainian;
    };

    void showText();
    recipe* operator+(ingredients);

    const std::string &getImage() const;

    void setImage(const std::string &image);

    const std::vector<ingredients> &getListIngredients() const;

    void setListIngredients(const std::vector<ingredients> &listIngredients);

    std::string getIngredientName(ingredients ingredient);

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    void addImage(std::string string) override;

    void removeImage() override;

private:
    std::string Name;
    std::string Image;
    std::vector <ingredients> listIngredients;
};


#endif //RECIPEBOOK_RECIPE_H
