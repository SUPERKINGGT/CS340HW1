/**
* @file
* @author Luc Renambot
* @version 1.1
* @section LICENSE
*  none - freeware
* @section DESCRIPTION
*  the main runner file for homework 1
*/

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    /*! \brief {Runner class
     *         of my application for project CS340.}
     */
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}

