#pragma once

class Builder;

class Director
{
public:
    Director(Builder* aBuilder);
    ~Director();

    void Construct ();

private:
    Builder* builder; 
};

