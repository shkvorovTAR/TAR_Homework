#include "pch.h"
/*
#include <QCoreApplication>
#include <QDebug>
#include <QString>

//functions headers delcaration, boath function return nothing - void
void printMSpaseAndLStars(int M,int L); //Function header to print one row with M spases and L stars

void printTriangle(int N); //Function header to print triangle and call function printMSpaseAndLStars N times

// main program, function headers shall be declare before main
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	int height = 5;
	qDebug() << "Start, shall print triangle with"<< height << "rows";
	printTriangle(height); // call function printTriangle with arg height

	qDebug() << "End";
	return a.exec();
}

void printMSpaseAndLStars(int M,int L) //Function body, M spases and L stars counts
{
	QString qsOneRow;
	for (int i=0; i<M; i++) qsOneRow+=' '; // += this is adding one char to end of string
	for (int i=0; i<L; i++) qsOneRow+='*'; // += can be use and to concatinate 2 and more strings together

	qDebug() << qsOneRow;                        // Now  show string borders
	//qDebug() << qsOneRow.toLocal8Bit().data(); //don't show string borders
}

void printTriangle(int N) //Function body
{
	qDebug() << "Hello from function printTriangle";
	for (int i=0; i<N; i++)    {
		printMSpaseAndLStars(5, i);
	}
	qDebug() << "Exit from function printTriangle";
}
*/
