#include <iostream>
#include <cmath>
using namespace std;
#define D(x) cout<<#x<<'='<<x<<endl;
double all_money(double every_month,double cpi){//抛开通货膨胀相当于今天的多少钱
	double sum=0;
	double every_year=every_month*12;
	for(int i=0;i<12;i++){
		sum+=every_year;
		every_year/=cpi;
//	D(sum)	
	}
	return sum;
}
int main(int argc, char *argv[]) {
	//卖房子大家一样的卖，或者到时候定价；这里考虑的是贷款怎样能使支出较少
double R=0.0539/12;//月利率
double N=180;//贷款月数
double rate=0.7;//1-首付比例
double every_month=361.51*10000*rate*R*pow((1+R),N)/(pow((1+R),N)-1);
D(every_month)//首付30%每月还款¥20529.5
double cpi=1.03;
double money2bank=all_money(every_month,cpi);//给银行的钱抛开通货膨胀
double moneyAlready=361.51*10000*(1-rate);//首付款
D(money2bank)D(moneyAlready)
double sum=money2bank+moneyAlready;//抛开通货膨胀实际总支出
D(sum)
double future_price=361.51*pow(cpi,15);
D(future_price)
}