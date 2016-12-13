#include <iostream>
#include <cmath>
using namespace std;
struct Point {
	int x;
	int y;
};

int main(){
 int n;
 cin >> n;
 double g=0;
 Point a[n];
for(int i=0;i<n;i++){
	cin >> a[i].x >> a[i].y;
}
for(int i=0; i<n; i++){
	for(int j=0; j<n ; j ++){
        if(g<sqrt((a[i].x – a[j].x)*(a[i].x – a[j].x) + (a[i].y – a[j].y)*(a[i].y – a[j].y))){
	g = sqrt((a[i].x – a[j].x)*(a[i].x – a[j].x) + (a[i].y – a[j].y)*(a[i].y – a[j].y));   
		}
	}
}
printf ("%.15f", g);
return 0;
}

