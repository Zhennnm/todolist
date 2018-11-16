#include "todowindow.h"
#include "ui_todowindow.h"

todoWindow::todoWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::todoWindow)
{
    ui->setupUi(this);
}

todoWindow::~todoWindow()
{
    delete ui;
}
