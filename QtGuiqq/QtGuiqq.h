#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtGuiqq.h"

class QtGuiqq : public QWidget
{
	Q_OBJECT

public:
	QtGuiqq(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiqqClass ui;
};
