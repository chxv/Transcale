/*************************************************************************
	> File Name: scale.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 19时45分55秒
 ************************************************************************/

#ifndef _SCALE_H
#define _SCALE_H

#include<string>
#include<vector>
#include "IntWithChar.h"


//x表示n进制
std::string TenToX(int ten,int x)
{
    std::string str1;
    std::vector<int> vec;
    while(ten!=0)
    {
        vec.push_back(ten%x);
        ten/=x;
    }
    for(auto iter=vec.end()-1;iter>=vec.begin();--iter)
    {
        char ch;
        if(!IntToChar(*iter,ch))
            throw std::runtime_error("IntToChar at TenToX first!");
        str1+=ch;
    }
    return str1;
}

//num的n次方
int Nth_power(int n,int num=10)
{
    int result=1;
    for(int i=0;i<n;++i)
        result*=num;
    return result;
}

//x进制的数num转换为十进制
//直接用string保存原数据
int XToTen(std::string str,int x)
{
    int mid,sum=0;
    for (int i=0;i<str.size();++i)
    {
        CharToInt(str[i],mid);
        sum+=mid*Nth_power(str.size()-i-1,x);
    }
    return sum;
}
#endif
