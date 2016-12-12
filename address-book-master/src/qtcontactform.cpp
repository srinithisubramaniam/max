#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit())
{
    addRow(" <font color='green'>First Name <font color='red'> *</font>", firstNameField);
    addRow(" <font color='green'>Last Name <font color='red'>*", lastNameField);
    addRow("<font color='green'>Address", addressField);
    addRow("<font color='green'>Phone Number", phoneNumberField);
    addRow("<font color='green'>Email", emailField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
}
