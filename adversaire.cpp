#include <iostream>
#include "adversaire.h"
adversaire::adversaire(int a,int b,int c,int w ,char d[21][41]):x(a),y(b),vitesse(c),sens(w)
{d[x][y]=char('&');
}

adversaire::~adversaire()
{

}
void adversaire::deplacement (char a[21][41] )
{  int i=0 ;
  int xx=x ;
  int yy=y ;
   int r = rand() % 4 ;  // choix aléatoire du sens de deplacement

   ren=false ;
   for(i=0;i<vitesse && !(ren);i++) {


if(sens==0 && a[x+1][y]!=('#') ){
 if(old!=('&') && old!=('@')) a[x][y]=old ; // controler le contenu de case suivante
  x++ ;
  if (a[x][y]==('@')) ren=true ;            // vérifier s'il y'a rencontre avec pacman
  old=a[x][y] ;                             // sauvegarder le contenu de case
  a[x][y]=('&') ;                           // deplacemenr d'adversaire

  }
  else if(sens==1 && a[x][y+1]!=('#')){
   if(old!=('&') && old!=('@')) a[x][y]=old ;
  y++ ;
    old=a[x][y] ;
  if (a[x][y]==('@')) ren=true ;
  a[x][y]=('&') ;

  }
  else if(sens==2 && a[x-1][y]!=('#')){
   if(old!=('&') && old!=('@')) a[x][y]=old ;
  x-- ;
    old=a[x][y] ;
  if (a[x][y]==('@')) ren=true ;
  a[x][y]=('&') ;

  }
else if(sens==3 && a[x][y-1]!=('#')){
 if(old!=('&') && old!=('@')) a[x][y]=old ;
  y-- ;
  if (a[x][y]==('@')) ren=true ;
    old=a[x][y] ;
  a[x][y]=('&') ;


  }
  }
     if ( xx==x && yy==y )  sens = ( (sens + random() % 4) % 4) ; // pour assurer le parcours de la totalité d'une ligne/colonne



}

void adversaire::setx(int s) {
     this->x = s;
    }

    int adversaire::getx() {
      return x;
    }
    void adversaire::sety(int s) {
      y = s;
    }

    int adversaire::gety() {
      return y;
    }
bool adversaire::getren(){
      return ren ;
    }
