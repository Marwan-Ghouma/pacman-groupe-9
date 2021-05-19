#include <iostream>
#include "adversaire.h"
adversaire::adversaire(int a,int b,int c, char d[21][41]):x(a),y(b),vitesse(c)
{d[x][y]=char('&');
}

adversaire::~adversaire()
{

}
void adversaire::deplacement (char a[21][41] )
{  int i=0 ;
   int r = rand() % 4 ;
   ren=false ;
   for(i=0;i<vitesse && !(ren);i++) {


if(r==0 && a[x+1][y]!=('#') ){
 if(old!=('&') && old!=('@')) a[x][y]=old ;
  x++ ;
  if (a[x][y]==('@')) ren=true ;
  old=a[x][y] ;
  a[x][y]=('&') ;

  }
  else if(r==1 && a[x][y+1]!=('#')){
   if(old!=('&') && old!=('@')) a[x][y]=old ;
  y++ ;
    old=a[x][y] ;
  if (a[x][y]==('@')) ren=true ;
  a[x][y]=('&') ;

  }
  else if(r==2 && a[x-1][y]!=('#')){
   if(old!=('&') && old!=('@')) a[x][y]=old ;
  x-- ;
    old=a[x][y] ;
  if (a[x][y]==('@')) ren=true ;
  a[x][y]=('&') ;

  }
else if(r==3 && a[x][y-1]!=('#')){
 if(old!=('&') && old!=('@')) a[x][y]=old ;
  y-- ;
  if (a[x][y]==('@')) ren=true ;
    old=a[x][y] ;
  a[x][y]=('&') ;


  }

  }


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
