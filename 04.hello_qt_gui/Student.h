#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <QWidget>

struct StudentPrivate;

namespace Ui {
  class Student;
};

class Student : public QWidget
{
  Q_OBJECT
public:
  Student(QWidget* parent = nullptr);
  ~Student();

private:
  Ui::Student* ui;
  StudentPrivate* _p;
};

#endif