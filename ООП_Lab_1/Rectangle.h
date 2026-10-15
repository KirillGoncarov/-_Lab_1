#pragma once

class Rectangle {
private:
    double* x1; double* y1;
    double* x2; double* y2;
    double* x3; double* y3;
    double LenX;
    double LenY;

public:
    Rectangle(double value_x = 0, double value_y = 0, double ValLenX = 0, double ValLenY = 0);
    Rectangle(double vx1, double vy1, double vx2, double vy2, double vx3, double vy3);

    ~Rectangle();

    double Square();
    double Diagonal();

    Rectangle operator-() const;
    bool operator==(const Rectangle& s) const;

    void ÑalculateFirdCord();


    double GetLenX();
    double GetLenY();
    double GetCordX1();
    double GetCordY1();
    double GetCordX2();
    double GetCordY2();
    double GetCordX3();
    double GetCordY3();

};
