/*************************************************************************
	> File Name: tran.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 18时41分00秒
 ************************************************************************/

#include<iostream>
#include<string>
#include "info.h"
#include "scale.h"
#include "detect.h"


using std::cout;
using std::endl;
using std::string;

int main(int argc ,char *argv[])
{
    if(argc==1){
        //进入无参数自定输入的模式
    }if(argc==2){
        string str1(argv[1]);
        if(str1==string("-help"))
            output_help();
        else 
            param_error_info();
    }if(argc==3){
        //有参数，有数值
        string param(argv[1]);
        string number(argv[2]);

        int jinzhi=detect_num(number);//检测数值的进制
        int obj=detect_param(param);//检测参数，得到目标进制
        int ten_mid=XToTen(number,jinzhi);//转换为十进制
        string result=TenToX(ten_mid,obj);//再转换为目标进制

        cout<<"结果为"<<obj<<"进制的:"<<result<<endl;

    }if(argc>3){
        param_error_info("参数输入过多");
    }
}
