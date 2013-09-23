#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QtGui/QMainWindow>
#include "ui_calculator.h"


class calculator_model
{
public:
	calculator_model();
	~calculator_model();
	QString number_process (int num);
	double Operator (int op);
	void integer_or_float(int point);

private:
	double sol,temp,float_digit,float_length;
	long int integer_digit,dot,digit_length,front_op;
	QString zero;
};

class calculator_view : public QMainWindow
{
	Q_OBJECT

public:	
	Ui::calculatorClass ui;
	calculator_view( calculator_model *model_in, QWidget *parent = 0, Qt::WFlags flags = 0);
	~calculator_view();
public slots:
	void Button_1_click();
	void Button_2_click();
	void Button_3_click();
	void Button_4_click();
	void Button_5_click();
	void Button_6_click();
	void Button_7_click();
	void Button_8_click();
	void Button_9_click();
	void Button_0_click();
	void Button_dot_click();
	void Button_add_click();
	void Button_sub_click();
	void Button_mul_click();
	void Button_div_click();
	void Button_equal_click();
	void Button_cancel_click();
		
private:
	calculator_model *model;
};



#endif // CALCULATOR_H