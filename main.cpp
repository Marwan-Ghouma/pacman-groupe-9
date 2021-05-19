#include <iostream>
#include <stdlib.h>
#include "pacman.h"
#include "adversaire.h"
using namespace std ;

int x,y,x1,h,score1; //x1,h,score1 copie de les coordonnés de p
           char map[21][41]={"########################################",
                  "#................#.....................#",
                  "#####.##########.#......########.......#",
                  "#............................##........#",
                  "#$...............#...........#########.#",
                  "###.##############$....#####...........#",
                  "#................#..................####",
                  "#.########..##.....#...######...######.#",
                  "#.#.........#.##...#..##..........##...#",
                  "#.########..#...##.#....##........##...#",
                  "#.#.........#.....##......##......##...#",
                  "#.########..#......#.######.....######.#",
                  "#......................................#",
                  "###########......#..####..##########$..#",
                  "#......................................#",
                  "#.##########################.###########",
                  "#......................................#",
                  "#######$##########...###################",
                  "#......................................#",
                  "########################################"} ;
int nbp=606 ; // nombre de pastille
char dep ;
using namespace std  ;
int main() {
pacman p(10,10,map) ;
adversaire ad1(15,20,1,map) ;
adversaire ad2(14,20,2,map) ;
adversaire ad3(15,21,2,map) ;
adversaire ad4(14,21,1,map) ;
for(x=0;x<20;x++){
            cout<<map[x]<<endl  ;
    }
while ((nbp*p.getvie())!=0  ) {
    x1=p.getx();
    h=p.gety();
    cout<<"\n donner le sens de deplacement \n " ;
    cin>>dep ;
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
    p.manger(x1,h,map);
    if(score1!=p.getscore()) nbp-- ;
    if(p.getre()) {p.Rencontre() ;}
     for(x=0;x<20;x++){
       cout<<map[x]<<endl  ;
    }
    p.resultats(nbp) ;
}



return 0 ;

}
