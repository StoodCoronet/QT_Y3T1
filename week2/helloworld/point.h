#ifndef POINT_H
#define POINT_H



class Point
{
public:
private:
    double x;
    double y;

public:
    Point(double a = 0,double b = 0);
    void Set(double a, double b);
    void Show();
    void Add();
};

#endif // POINT_H
