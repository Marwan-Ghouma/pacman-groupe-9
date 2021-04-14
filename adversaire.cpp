#include <iostream>
#include "adversaire.h"
adversaire::adversaire(int a,int b, char d[21][41]):x(a),y(b)
{d[x][y]=char('&');
}

adversaire::~adversaire()
{
}
void adversaire::speciale ()
{

}
void adversaire::deplacement ()
{

}
void adversaire::setx(int s) {
     this->x = s;
    }
    
    int adversaire::gety() {
      return y;
    }
    void adversaire::sety(int s) {
      y = s;
    }
   
    int adversaire::gety() {
      return y;
    }
