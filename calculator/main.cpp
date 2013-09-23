#include "calculator.h"
#include <QtGui/QApplication>



int main(int argc, char *argv[])
{
	
	QApplication a(argc, argv);
	calculator_model *model_in =new calculator_model;
	calculator_view *w = new calculator_view(model_in);
	//calculator_view *w = new calculator_view;
	w->show();
    return a.exec();
}

