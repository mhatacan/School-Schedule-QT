#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    printSelectionMenu();
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->textBrowser_2->clear();
    Course.makeSchedule();
    printSchedule();
}

void MainWindow::on_pushButton_5_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->label_2->setText("Enter the courseID and hour like 151214002 8 or press Exit");
    try {
        Course.setCourseID(ui->lineEdit->text().toInt());
        Course.setCourseHour(ui->lineEdit_2->text().toInt());
        Course.addCourse();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }  catch (invalid_argument &e) {
        ui->label_2->setText(e.what());
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->label_3->setText("Enter the studentName like harun or press Exit");
    try {
        Student.setStudentName(ui->lineEdit_3->text().toStdString());
        Student.addStudent();
        ui->lineEdit_3->clear();
    }  catch (invalid_argument &e) {
        ui->label_3->setText(e.what());
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->label_4->setText("First select the student and then select the lessons or press Exit");
    try {
        foreach(QListWidgetItem *item, ui->listWidget_2->selectedItems()){
            Student.setStudentName(ui->listWidget->currentItem()->text().toStdString());
            Student.addLessontoStudent(item->text().toInt());
        }
        on_pushButton_3_clicked();
    }  catch (invalid_argument &e) {
        ui->label_4->setText(e.what());
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::printSelectionMenu(){
    Students ST_Map = Student.getStudentMap();
    Courses CR_Map = Course.getCourseMap();

    Students::iterator location1, location2;
    auto ctr=0;
    string temp = " ";

    ui->textBrowser->clear();
    ui->listWidget->clear();
    ui->listWidget_2->clear();

    for(Students::iterator it=ST_Map.begin(); it!=ST_Map.end(); it++){
        if(it->second == 0){
            location1 = ST_Map.lower_bound(it->first);
            location2 = ST_Map.upper_bound(it->first);
            for(; location1!=location2; location1++){
                (ctr)++;
            }
            if((ctr)<2){
                ui->listWidget->addItem(it->first.c_str());
                ui->textBrowser->insertPlainText(it->first.c_str() + QString(" is free at any time of the week.\n"));
            }    //ui->listWidget->addItem(it->first.c_str() + QString(" is free at any time of the week."));
            ctr=0;
        }
    }

    for(Students::iterator it=ST_Map.begin(); it!=ST_Map.end(); it++){
        if(it->second != 0){
            if(temp==it->first)
                ui->textBrowser->insertPlainText(QString(", ") + QString::number(it->second));
            else{
                ui->textBrowser->insertPlainText(QString("\n") + it->first.c_str() + QString(" -->") + QString::number(it->second));
                ui->listWidget->addItem(it->first.c_str());
            }
            temp = it->first;
        }
    }

    for(Courses::iterator it=CR_Map.begin(); it!=CR_Map.end(); it++){
        ui->listWidget_2->addItem(QString::number(it->first));
    }
}

void MainWindow::printSchedule(){
    Mid Sch_Map = Course.getSchMap();
    Courses CR_Map = Course.getCourseMap();
    Students ST_Map = Student.getStudentMap();

    auto ctr=0, ctr_1=0;

    for (Courses::iterator it=CR_Map.begin();it!=CR_Map.end();it++){
        ui->textBrowser_2->insertPlainText(QString::number(it->first) + QString(" -->"));
        for(Mid::iterator it_2=Sch_Map.begin(); it_2!=Sch_Map.end(); it_2++){
            if(it->first == it_2->second.second && it_2->first == "Monday"){
                ctr++;
                if(ctr == 1)
                    ui->textBrowser_2->insertPlainText(QString(" Monday ") + QString::number(it_2->second.first));
                else
                    ui->textBrowser_2->insertPlainText(QString::number(it_2->second.first));
            }
        }ctr=0;
        for(Mid::iterator it_2=Sch_Map.begin(); it_2!=Sch_Map.end(); it_2++){
            if(it->first == it_2->second.second && it_2->first == "Tuesday"){
                ctr++;
                if(ctr == 1)
                    ui->textBrowser_2->insertPlainText(QString(" Tuesday ") + QString::number(it_2->second.first));
                else
                    ui->textBrowser_2->insertPlainText(QString::number(it_2->second.first));
            }
        }ctr=0;
        for(Mid::iterator it_2=Sch_Map.begin(); it_2!=Sch_Map.end(); it_2++){
            if(it->first == it_2->second.second && it_2->first == "Wednesday"){
                ctr++;
                if(ctr == 1)
                    ui->textBrowser_2->insertPlainText(QString(" Wednesday ") + QString::number(it_2->second.first));
                else
                    ui->textBrowser_2->insertPlainText(QString::number(it_2->second.first));
            }
        }ctr=0;
        for(Mid::iterator it_2=Sch_Map.begin(); it_2!=Sch_Map.end(); it_2++){
            if(it->first == it_2->second.second && it_2->first == "Thursday"){
                ctr++;
                if(ctr == 1)
                    ui->textBrowser_2->insertPlainText(QString(" Thursday ") + QString::number(it_2->second.first));
                else
                    ui->textBrowser_2->insertPlainText(QString::number(it_2->second.first));
            }
        }ctr=0;
        for(Mid::iterator it_2=Sch_Map.begin(); it_2!=Sch_Map.end(); it_2++){
            if(it->first == it_2->second.second && it_2->first == "Friday"){
                ctr++;
                if(ctr == 1)
                    ui->textBrowser_2->insertPlainText(QString(" Friday ") + QString::number(it_2->second.first));
                else
                    ui->textBrowser_2->insertPlainText(QString::number(it_2->second.first));
            }
        }ctr=0;
        ui->textBrowser_2->insertPlainText(QString("\n"));
    }

    Students::iterator location1, location2;
    string temp = " ";
    ui->textBrowser_2->insertPlainText(QString("\n"));
    for(Students::iterator it=ST_Map.begin(); it!=ST_Map.end(); it++){
        if(it->second == 0){
            location1 = ST_Map.lower_bound(it->first);
            location2 = ST_Map.upper_bound(it->first);
            for(; location1!=location2; location1++){
                (ctr_1)++;
            }
            if((ctr_1)<2){
                ui->textBrowser_2->insertPlainText(it->first.c_str() + QString(" is free at any time of the week.\n"));
            }
            ctr_1=0;
        }
    }

    for(Students::iterator it=ST_Map.begin(); it!=ST_Map.end(); it++){
        if(it->second != 0){
            if(temp==it->first)
                ui->textBrowser_2->insertPlainText(QString(", ") + QString::number(it->second));
            else{
                ui->textBrowser_2->insertPlainText(QString("\n") + it->first.c_str() + QString(" -->") + QString::number(it->second));
            }
            temp = it->first;
        }
    }
}
