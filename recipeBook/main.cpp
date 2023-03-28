#define TESTING

#ifdef TESTING
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
#else
#include <iostream>
#include "recipe.h"
#include "ingredients.h"

int main()
{
    recipe sut;
    ingredients *name = new ingredients(1.5, 2, "test");
    sut = *(sut + *name);
    sut.replaceText("we are testing does it work");
    sut.showText();
    sut.setCuisine(1);
    sut.setCuisine(4);

    std::cout << sut.getCuisine(1) << std::endl;
    std::cout << sut.getCuisine(3) << std::endl;
}

#endif
