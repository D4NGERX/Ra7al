#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_home_login_clicked();

    void on_home_register_clicked();

    void on_Login_Button_clicked();

    void on_back_button_1_clicked();

    void on_back_button_2_clicked();

    void on_Register_Button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
