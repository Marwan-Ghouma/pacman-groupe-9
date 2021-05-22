#include <iostream>
#include <stdlib.h>
#include "pacman.h"
#include "adversaire.h"
using namespace std ;

int x,y,x1,y1,score1; //x1,h,score1 copie de les coordonnés de pacman
int r1,r2 ; // rapidité des adversaires
int dif=0 ;   // difficulté
           char map[21][41]={"########################################",
                  "#................#.....................#",
                  "#####.##########.#......########.......#",
                  "#............................##........#",
                  "#$...............#...........#########.#",
                  "###.##############$....#####...........#",
                  "#................#..................##.#",
                  "#.########..##.....#...######...######.#",
                  "#.#.........#.##...#..##..........##...#",
                  "#.########..#...##.#....##........##...#",
                  "#.#.........#.....##......##......##...#",
                  "#.########..#......#.######.....######.#",
                  "#......................................#",
                  "#.#########......#..####..##########$..#",
                  "#......................................#",
                  "#.##########################.#########.#",
                  "#......................................#",
                  "#.#####$##########...#################.#",
                  "#......................................#",
                  "########################################"} ;
int nbp=451 ; // nombre de pastille
char dep ;
using namespace std  ;
int main() {
 while (dif==0  ) {

 cout <<"\n                              BIENVENUE DANS  PACMAN  \n\n\n\n  " ;
  cout<<"\n                            les clés utiliser sont : \n\n                                        z \n                                     q  s  d \n\n\n\n"  ;
 cout<<"\n                      choisir la 'difficulté' souhaiter \n\n     '1'  :facile \n     '2'  :simple  \n     '3'  :difficile \n" ;
  cin>>dif ;
  switch(dif) {
  case 1:
    r1=1;
    r2=1 ;
    break;
    case 2 :
    r1=1 ;
    r2=2 ;
    break ;
  case 3:
    r1=2 ;
    r2=3 ;
    break;

    default :
    dif=0 ;

}
 }
pacman p(10,10,map) ;

adversaire ad1(15,20,r1,0,map) ;
adversaire ad2(14,20,r2,1,map) ;
adversaire ad3(15,21,1,2,map) ;
adversaire ad4(14,21,1,3,map) ;
for(x=0;x<20;x++){
            cout<<map[x]<<endl  ;
    }
while ((nbp*p.getvie())!=0  ) {
    x1=p.getx();
    y1=p.gety();
    cout<<"\n donner le sens de deplacement \n " ;
     system("stty raw"); // input without enter
    cin>>dep ;
     system("stty cooked");
    ad1.deplacement(map) ;
    if(ad1.getren()) {p.Rencontre() ;}
    ad2.deplacement(map) ;
     if(ad2.getren()) {p.Rencontre() ;}
    ad3.deplacement(map) ;
     if(ad3.getren()) {p.Rencontre() ;}
    ad4.deplacement(map) ;
     if(ad4.getren()) {p.Rencontre() ;}
    p.deplacement(dep,map) ;
     score1=p.getscore() ;
    p.manger(x1,y1,map);
    if(score1!=p.getscore()) nbp-- ;
    if(p.getre()) {p.Rencontre() ;}
     for(x=0;x<20;x++){
       cout<<map[x]<<endl  ;
    }
    p.resultats(nbp) ;

}



return 0 ;

}
