#ifndef adversaire_h
#define adversaire_h
class adversaire
{
private:
    int x,y ;
public:
    adversaire(int,int,char d[21][41]);
    ~adversaire();
 
 void deplacement() ; 
 void setx(int ) ; 
 int getx() ; 
 void sety(int ) ; 
 int gety() ;
      
    } ;
#endif
