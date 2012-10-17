#include "stdafx.h"
#include "Director.h"
#include "Builder.h"

Director::Director(Builder* aBuilder):builder(aBuilder)
{
}

Director::~Director()
{
    builder = NULL;
}

void Director::Construct()
{
    //rather simplistic for demonstration purposes

    builder->BuildPartA();
    builder->BuildPartB();
    builder->BuildPartC();
}