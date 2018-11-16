#ifndef TODOWINDOW_H
#define TODOWINDOW_H

#include <QMainWindow>

namespace Ui {
class todoWindow;
}

class todoWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit todoWindow(QWidget *parent = nullptr);
    ~todoWindow();

private:
    Ui::todoWindow *ui;
};

#endif // TODOWINDOW_H
