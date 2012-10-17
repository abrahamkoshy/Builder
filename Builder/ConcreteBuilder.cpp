#include "stdafx.h"
#include "ConcreteBuilder.h"
#include "Product.h"

ConcreteBuilder::ConcreteBuilder():product(new Product())
{
}

ConcreteBuilder::~ConcreteBuilder()
{
    delete product;
}

void ConcreteBuilder::BuildPartA()
{
    product->SetPartA();
}

void ConcreteBuilder::BuildPartB()
{
    product->SetPartB();
}

void ConcreteBuilder::BuildPartC()
{
    product->SetPartC();
}

Product* ConcreteBuilder::GetResult() const
{
    return new Product(*product);
}