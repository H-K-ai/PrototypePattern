#include <QCoreApplication>

#include "concrete_prototype.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete (p);(p)=NULL;}}
#endif

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // 孙悟空
       Monkey *pSWK = new SunWuKong("Qi Tian Da Sheng");

   // 克隆猴子猴孙
       Monkey *pSWK1 = pSWK->Clone();
       Monkey *pSWK2 = pSWK1->Clone();

       pSWK1->Play();
       pSWK2->Play();

       SAFE_DELETE(pSWK);
       SAFE_DELETE(pSWK1);
       SAFE_DELETE(pSWK2);

    return a.exec();
}

//原型模式（Prototype Pattern）是一种创建型设计模式，
//允许一象再创建另外一个可定制的对象，而无需知道任何创建的细节

//优点：

//如果创建新的对象比较复杂，可以利用原型模式简化对象的创建过程，同时也能够提高效率。
//简化对象的创建，无需理会创建过程。
//可以在程序运行时（对象属性发生了变化）获得一份内容相同的实例，他们之间不会相互干扰。

//缺点：
//在实现深拷贝时可能需要比较复杂的代码
//需要为每一个类配备一个克隆方法，而且该克隆方法需要对类的功能进行通盘考虑，
//这对全新的类来说不是很难，但对已有的类进行改造时，不一定是件容易的事，必须修改其源代码，违背了“开闭原则”。
