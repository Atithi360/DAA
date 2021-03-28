#include<bits/stdc++.h>
using namespace std;

// Assumed (0,0) as center of polygon.
// function to calculate area of Polygon using divide and conquer algorithm. 
double  areaofPolygon(vector<pair<double,double> >&v, int i, int j)
{
    int length = j-i+1;
    if(length == 2)
    {
        double ans = v[i].first*v[j].second - v[j].first*v[i].second;
        return ans;
    }
    int mid = i+((j-i)/2);
    double area1 = areaofPolygon(v,i,mid);
    double area2 = areaofPolygon(v,mid,j);
    return area1 + area2;
}

int main(){
    int n;
     // Input  the number of vertex in polygon.

    cin>>n;
    if(n<=2)
    {
        cout<<"Polygon does not exist";
        return 0;
    }
    vector<pair<double,double > >v;
    double x,y;
    
    //  Inputs the points of the polygon in either clockwise or anticlockwise direction\n";
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    v.push_back(v[0]); 
    
    double ans=areaofPolygon(v,0,n);
    ans/=2.0;
    cout<<abs(ans)<<endl;
    return 0;
}
