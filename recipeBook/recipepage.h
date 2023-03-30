#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H

#include <QMainWindow>
#include "recipe.h"

namespace Ui
{
    class recipePage;
}

class recipePage : public QMainWindow
{
Q_OBJECT

public:
    explicit recipePage(QWidget *parent = nullptr);

    ~recipePage();

public slots:

    void addRecipe(recipe);

    void on_horizontalSlider_valueChanged(int);

private:
    Ui::recipePage *ui;
    recipe recipeInput;
};

#endif // RECIPEPAGE_H
