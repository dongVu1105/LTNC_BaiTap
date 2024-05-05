#include <bits/stdc++.h>

using namespace std;

double solve(double meal_cost, int tip_percent, int tax_percent) {
    double total_cost = meal_cost*(1+(double)tip_percent/100 + (double)tax_percent/100);
    return round(total_cost);
}

int main(){
    double meal_cost;
    cin>>meal_cost;
    int tip_percent, tax_percent;
    cin>>tip_percent>>tax_percent;
    cout<<solve(meal_cost, tip_percent, tax_percent);
    return 0;
}
