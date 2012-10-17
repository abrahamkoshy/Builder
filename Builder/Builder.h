#pragma once

class Builder
{
public:
    virtual ~Builder() {};

    virtual void BuildPartA() = 0;
    virtual void BuildPartB() = 0;
    virtual void BuildPartC() = 0;
};

