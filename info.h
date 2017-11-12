/*************************************************************************
	> File Name: info.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 18时26分53秒
 ************************************************************************/

#ifndef _INFO_H
#define _INFO_H

#include<string>

//输出提示帮助信息
void output_help()
{
    std::cout<<"\t\t\t欢迎使用xtrans\n"
        <<"\t\t本产品对于个人用户完全免费，但不支持商业用途\n"
        <<"\n用法    xtrans  [选项] [待转换数字]\n"
        <<"对于待转换的数字，需按以下格式表示:\n"
        <<"0x10\t表示一个十六进制的数，即数字前加0x\n"
        <<"10\t表示一个十进制的10，即数字前不加符号\n"
        <<"010\t表示一个八进制的10，即数字前加0\n"
        <<"0010\t表示一个二进制的10,即数字前加两个0\n"
        <<"\nnotice:\t只接受一个参数\n\n"
        <<"-help\t\t获取帮助信息\n"
        <<"-b\t\t将数值转换为二进制\n"
        <<"-o\t\t将数值转换为八进制\n"
        <<"-d\t\t将数值转换为十进制\n"
        <<"-h\t\t将数值转换为十六进制\n"
        <<"\n\n\t\t如有其他问题欢迎联系[1149277941@qq.com]"
        <<std::endl;
}

void param_error_info(const std::string &str=" ")
{
    if(str==" ")
        std::cout<<"你刚刚输入了一个错误的参数，请重试"<<std::endl;
    else
        std::cout<<"参数输入错误，错误信息为:"<<str<<std::endl;
}

void error(const std::string &str=" ")
{
    throw std::runtime_error(str);
}

#endif
