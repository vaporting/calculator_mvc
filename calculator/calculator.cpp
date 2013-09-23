#include "calculator.h"

calculator_view::calculator_view( calculator_model *model_in, QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	model = model_in;
}

calculator_view::~calculator_view()
{

}

void calculator_view::Button_1_click()
{
	ui.lcdNumber->display(model->number_process(1));
}
void calculator_view::Button_2_click()
{
	ui.lcdNumber->display(model->number_process(2));
}
void calculator_view::Button_3_click()
{
	ui.lcdNumber->display(model->number_process(3));
}
void calculator_view::Button_4_click()
{
	ui.lcdNumber->display(model->number_process(4));
}
void calculator_view::Button_5_click()
{
	ui.lcdNumber->display(model->number_process(5));
}
void calculator_view::Button_6_click()
{
	ui.lcdNumber->display(model->number_process(6));
}
void calculator_view::Button_7_click()
{
	ui.lcdNumber->display(model->number_process(7));
}
void calculator_view::Button_8_click()
{
	ui.lcdNumber->display(model->number_process(8));
}
void calculator_view::Button_9_click()
{
	ui.lcdNumber->display(model->number_process(9));
}
void calculator_view::Button_0_click()
{
	ui.lcdNumber->display(model->number_process(0));
}
void calculator_view::Button_dot_click()
{
	model->integer_or_float(1);
}
void calculator_view::Button_add_click()
{
	ui.lcdNumber->display(model->Operator('+'));
}
void calculator_view::Button_sub_click()
{
	ui.lcdNumber->display(model->Operator(2));
}
void calculator_view::Button_mul_click()
{
	ui.lcdNumber->display(model->Operator(3));
}
void calculator_view::Button_div_click()
{
	ui.lcdNumber->display(model->Operator(4));
}
void calculator_view::Button_equal_click()
{
	ui.lcdNumber->display(model->Operator(0));
}
void calculator_view::Button_cancel_click()
{
	ui.lcdNumber->display(model->Operator(5));
}

calculator_model::calculator_model()
{
	sol=0;
	temp=0;
	dot=0;
	integer_digit=10;
	float_digit=0.1;
	digit_length=1;
	front_op=0;
	zero="";
	float_length=0;
}

calculator_model::~calculator_model()
{}

QString calculator_model::number_process (int num)
{
	if(front_op>-1&&front_op<5&&dot==1&&sol!=0)// <@PTA TPNAME="line 102" TCNAME="trace_test" Doc="51te04-cheng-proof.pdf">
	{
		temp=sol;
		sol=0;
	}
	if(num!=0)
	{
		if(dot==0&&digit_length<11)
		{
			temp=temp*integer_digit+num;
			digit_length++;
		}
		if(dot==1&&digit_length<11)
		{
			temp=temp+num*float_digit;
			float_digit*=0.1;
			zero="";
			digit_length++;
			float_length++;
		}
	}
	else
	{
		if(dot==0&&digit_length<11&&temp!=0)
		{
			temp*=integer_digit;
			digit_length++;
		}
		if(dot==1&&digit_length<11)
		{
			float_digit*=0.1;
			if(temp==0&&zero=="")
				zero+=".";
			zero+="0";
			digit_length++;
			float_length++;
		}
	}
	return (QString::number(temp, 'f',float_length )+zero);
}

double calculator_model::Operator (int op)
{
	if(op==5) //為了讓c進switch<@PTA TPNAME="line 145" TCNAME="trace_test" Doc="">
	{
		front_op=op;
		sol=temp;
	}
	if(sol!=0&&front_op!=0)
	{
		switch(front_op)
		{
		case 0:	//=
			break;
		case 1: //+
			sol+=temp;
			break;
		case 2: //-
			sol-=temp;
			break;
		case 3: //*
			sol*=temp;
			break;
		case 4: ///
			sol/=temp;
			break;
		case 5: //c
			sol=0;
			op=0;
			break;
	}
	}
	else
		sol+=temp;
	digit_length=1;
	float_digit=0.1;
	temp=0;
    dot=0;
	front_op=op;
	zero="";
	float_length=0;
	return sol;
}

void calculator_model::integer_or_float(int point)
{
	dot=point;
	if(temp==0)
		digit_length++;
	digit_length++;
}