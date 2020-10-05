
memo[];
noofways(route[], n, i, routeE[]){
    routeE[i] = route[];
    if(i+1<=n){
   if(memo[i+1]!=0)a = memo[i+1];
   else{ a = noofways(route, i+1);
        memo[i+1] = a;
   }
}
if(i+2<=n){
    if(memo[i+2]!=0)a = memo[i+2];
   else{ b = noofways(route, i+2);
        memo[i+2] = b;
   }
//    if(i==n)print(routeE[]);
//    erase(routeE[i]);
   return a+b;
}
}

main(){
    for(i=0 to n-1){
        routeE[];
        print(noofways(routei, n, l[i]), routeE);
    }
}


for printing all sequences, we have to go through all possible cases