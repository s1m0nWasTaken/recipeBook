#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QListWidgetItem"
#include <QMainWindow>
#include "recipe.h"
#include "recipepage.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

template<class T>
void showWindow(T window);

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

//    void on_listWidget_itemClicked(QListWidgetItem *item);

public slots:

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

    void on_actionReset_triggered();

signals:

    void sendRecipe(recipe);
private:
    recipe *recipes[4];
    recipePage *page;

    Ui::MainWindow *ui;

    void setRecipes();
};

#endif // MAINWINDOW_H
