#include <iostream>
#include "pacman.h"
using namespace std ;
pacman::pacman(int a,int b,char c[21][41]):x(a),y(b) 
{c[x][y]=char('@');
}

pacman::~pacman()
{
}
void pacman::deplacement(char c, char a[21][41])
{ if(c==char("s") && a[x+1][y]!="#") {
    x++;
      }
  if(c==char("z")&& a[x-1][y]!="#") {
    x--;
       }
  if(c==char("d")&& a[x][y+1]!="#") {
    y++;
  }
  if(c==char("q")&& a[x][y-1]!="#") {
    y--;
  }

}
void pacman::manger(int n1,int n2 ,char a[21][41])
{if(n1!=x || n2!=y){
 a[n1][n2]=char(" ") ;
 if(a[x][y]==".") score+=20 ;
 if(a[x][y]=="$") {score+=20 ;
   sp=true ; }
 if(a[x][y]=="&") re=true ;
   
   a[x][y]=char("@"); }
}
void pacman::Rencontre () {
  if( sp ) score+= 1000 ;
  else vie-- ;
  sp=false ;
} ;
void pacman::resultats(int a) {
  
  
  if(vie==0) cout<<"echec ";
  if (a==0) cout<<"vous avez gagné" ;
  cout<<"\n score"<<score<<endl ;
  cout<<"il vous reste"<<vie<<"vies"<<endl ;
}


void pacman::setx(int s) {
      x = s;
    }
    
    int pacman::gety() {
      return y;
    }
    void pacman::sety(int s) {
      y = s;
    }
   
    int pacman::gety() {
      return y;
    }
    int pacman::getvie(){
      return vie ;
    }
    int pacman::getscore() {
      return score ;  
    };
    bool pacman::getre(){
      return re ;
    }
