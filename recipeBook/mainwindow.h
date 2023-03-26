#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QListWidgetItem"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    void on_listWidget_itemClicked(QListWidgetItem *item);

public slots:

    void on_listWidget_itemClicked(QListWidgetItem *item);
private:

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
