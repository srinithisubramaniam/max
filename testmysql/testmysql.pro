QT += core sql
QT -= gui
QT += sql
QT += sql widgets

CONFIG += c++11

TARGET = testmysql[master]
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp
