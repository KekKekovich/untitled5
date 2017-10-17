

#ifndef UNTITLED5_PRYAMCOORD_H
#define UNTITLED5_PRYAMCOORD_H
class pryam {
private: double x,y,z;
public:
    pryam ();
    pryam (double x, double y, double z) ;
    double getX() const;

    void setX(double x);

    double getY() const;

    void setY(double y);

    double getZ() const;

    void setZ(double z);
    void getpryamcoord ();
};
#endif //UNTITLED5_PRYAMCOORD_H
