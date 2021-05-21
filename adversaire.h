#ifndef adversaire_h
#define adversaire_h
class adversaire
{
private:
    int x,y ;
    bool ren=false ; // detecter le rencontre avec pacman
    char old=' ' ;  // pour sauvegarder le contenue de position
    int vitesse ;  // combien de case le fantome peux passer par boucle
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

