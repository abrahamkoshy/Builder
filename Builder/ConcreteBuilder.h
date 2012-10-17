#pragma once

#include "Builder.h"

class Product;

class ConcreteBuilder : public Builder
{
public:
    ConcreteBuilder();
    virtual ~ConcreteBuilder();

    virtual void BuildPartA();
    virtual void BuildPartB();
    virtual void BuildPartC();

    Product* GetResult() const;

private:
    Product* product;
};

