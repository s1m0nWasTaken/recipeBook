#ifndef RECIPEPAGE_H
#define RECIPEPAGE_H

#include <QMainWindow>

namespace Ui {
class recipePage;
}

class recipePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit recipePage(QWidget *parent = nullptr);
    ~recipePage();

private:
    Ui::recipePage *ui;
};

#endif // RECIPEPAGE_H
