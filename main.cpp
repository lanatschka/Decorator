#include <QCoreApplication>
#include <iostream>
#include "beverage.h"
#include "houseblend.h"
#include "darkroast.h"
#include "condimentdecorator.h"
#include "milk.h"
#include "mocha.h"
#include "whiskey.h"
#include "strawberryjuice.h"
#include "honey.h"
#include "cinnamon.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Beverage *beverage1 = new HouseBlend();
    cout << beverage1->getDescription().toStdString()
         << " " << beverage1->cost() << "p." << endl;

    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Milk(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whiskey(beverage2);
    /*beverage2 = new StrawberryJuice(beverage2);*/

    cout << beverage2->getDescription().toStdString()
         << " " << beverage2->cost() << "p." << endl;

    Beverage *beverage3 = new  DarkRoast();
        beverage3 = new Milk(beverage3);
        beverage3 = new Honey(beverage3);
        beverage3 = new Cinnamon(beverage3);
        cout <<beverage3->getDescription().toStdString()
            <<" "<<beverage3->cost() << "p." << endl;

    return a.exec();
}
