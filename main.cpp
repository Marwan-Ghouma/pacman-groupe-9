#include <iostream>
#include "pacman.h"
#include "adversaire.h"


int x,y,x1,y1,score1; //x1,y1,score1 copie de les coordonnés de p 

           char map[21][41]={"########################################",
                  "#................#.....................#",
                  "#................#......########.......#",
                  "#......................................#",
                  "#$...............#.....................#",
                  "########.........#$....######..........#",
                  "#................#..........#..........#",
                  "#...........######..........#..........#",
                  "#...........................#..........#",
                  "#...........#...............#..........#",
                  "#...........############...............#",
                  "#......................................#",
                  "#...........................########...#",
                  "#...........................#$.........#",
                  "#...........................#..........#",
                  "#......................................#",
                  "######$.#######........................#",
                  "#...........................#..........#",
                  "#...........................#..........#",
                  "########################################"} ;
int nbp=606 ; // nombre de pastille 
char dep ;
using namespace std  ;
int main() {
    for(x=0;x<20;x++){
            cout<<map[x]<<endl  ;
    }
pacman p(10,10,map) ;
adversaire ad1(15,20,map) ;
adversaire ad2(14,20,map) ;
adversaire ad3(15,21,map) ;
adversaire ad4(14,21,map) ;
while ((nbp*p.getvie())!=0  ) {
    x1=p.getx();
    y1=p.gety();
    score1=p.getscore() ;
    cout<<"\n donner le sens de deplacement" ;
    cin>>dep ;
    p.deplacement(dep,map) ;
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
