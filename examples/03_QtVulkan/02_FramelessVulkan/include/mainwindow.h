#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class StaticTriangle;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);

private:
    void vkRender();

private slots:
    void setAutoRotate();

private:
    Ui::MainWindow *ui=nullptr;
    StaticTriangle* m_pStatictriangle=nullptr;
    bool m_quitRender=false;
    bool m_rotate=false;
};
#endif
