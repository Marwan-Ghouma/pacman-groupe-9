#ifndef adversaire_h
#define adversaire_h
class adversaire
{
private:
    int x,y ;
    bool ren=false ;
    char old=' ' ;
    int vitesse ;
public:
    adversaire(int,int,int,char d[21][41]);
    ~adversaire();

 void deplacement(char d[21][41]) ;
 void setx(int ) ;
 int getx() ;
 void sety(int ) ;
 int gety() ;
 bool getren() ; // get rencontre
 void setren() ;
    } ;
#endif

