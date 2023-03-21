/*
 * FindDialog
 * author:Lixinhang
 * date:202303
 *
 */
#include "finddialog.h"
#include <QApplication>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto window {std::make_unique<FindDialog>()};
    window->show();

//    FindDialog w1;
//    w1.show();

    return a.exec();
}
