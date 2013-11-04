/**
* @file
* @author Luc Renambot
* @version 1.1
* @section LICENSE
*  none - freeware
* @section DESCRIPTION
*  the window source code file for homework 1
*/

#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*! \brief Homework1 buttons
 *The code with signals for the buttons. */

void MainWindow::on_pushButton_clicked()
{
    /*! \brief push button 1
     * Precondition: The user will select a button and click.
     * Postcondition: a message will be printed.
     * \return display message 1 */
    std::cout << "Hello, World! " << std::endl;
}

void MainWindow::on_pushButton_2_clicked()
{
    /*! \brief push button 2
     * Precondition: The user will select a button and click.
     * Postcondition: a message will be printed.
     * \return display message 2 */
    std::cout << "Hello, back!" <<std::endl;
}

void MainWindow::on_pushButton_3_clicked()
{
    /*! \brief push button 3
     * Precondition: The user will select a button and click.
     * Postcondition: a message will be printed.
     * \return display message 3 */
    std::cout << "Quit?!" <<std::endl;
    exit (EXIT_SUCCESS);

}

