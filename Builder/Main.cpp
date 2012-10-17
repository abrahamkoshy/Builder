// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcreteBuilder.h"
#include "Product.h"
#include "Director.h"

int _tmain(int argc, _TCHAR* argv[])
{
    ConcreteBuilder* builder = new ConcreteBuilder();
    Director* director = new Director(builder);
    director->Construct();
    Product* product = builder->GetResult();

    //clean up
    delete product;
    delete director;
    delete builder;

	return 0;
}

