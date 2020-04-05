#include "Student.h"
#include "ui_Student.h"

struct StudentPrivate
{
  StudentPrivate(){}
};

Student::Student(QWidget* parent)
  : QWidget(parent)
  , _p(new StudentPrivate)
{
  ui = new Ui::Student;
  ui->setupUi(this);
}

Student::~Student()
{
  delete _p;
  delete ui;
}