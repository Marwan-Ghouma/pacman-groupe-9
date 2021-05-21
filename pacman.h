#ifndef pacman_h
#define pacman_h
class pacman
{
private:
   int x,y,score=0,vie=4 ;
   bool sp=false,re=false ;//sp pour speciale re pour rencontre
public:
    pacman(int,int,char  c[21][41]);
    ~pacman();
  void  Manger() ;

 void deplacement(char , char a[21][41]) ;
 void manger(int,int, char a[21][41]) ;
 void Rencontre () ;
 void resultats(int) ;

 void setx(int )      ;
 int getx() ;
 void sety(int )      ;
 int gety()      ;
 int getvie() ;
 int getscore() ;
 bool getre() ; // get rencontre


};


#endif


