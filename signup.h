#ifndef SIGNUP_H
#define SIGNUP_H

#include <QMainWindow>

namespace Ui {
class signup;
}

class signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void onSignupClicked(); // Add this line

private:
    Ui::signup *ui;
    QString hashPassword(const QString &password);
};

#endif // SIGNUPPAGE_H
