#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        bloodGroupField(new QLineEdit())
{
    addRow(" <font color='green'>First Name <font color='red'> *</font>", firstNameField);
    firstNameField->setPlaceholderText("Enter First name");
    addRow(" <font color='green'>Last Name <font color='red'>", lastNameField);
    lastNameField->setPlaceholderText("Enter Last name");
    addRow("<font color='green'>Address", addressField);
   addressField->setPlaceholderText("Enter address");
    addRow("<font color='green'>Phone Number<font color='red'>*", phoneNumberField);
    phoneNumberField->setPlaceholderText("Enter Contact number");
    addRow("<font color='green'>Email", emailField);
    emailField->setPlaceholderText("Enter email Id");
    addRow("<font color='green'>Blood group",bloodGroupField);
    bloodGroupField->setPlaceholderText("Enter Blood group");


}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
   bloodGroupField->setText("");
}
