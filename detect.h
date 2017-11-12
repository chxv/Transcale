/*************************************************************************
	> File Name: detect.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 20时33分24秒
 ************************************************************************/

#ifndef _DETECT_H
#define _DETECT_H

#include<string>
#include<vector>
#include"info.h"

//检测输入的数是几进制的
int detect_num(const std::string &s)
{
    if(s.size()==1)
        return 16;
    else if(s[0]=='0')
    {
       //2
        if(s[1]=='0')
        {
            //检测数值，若满座错误条件则报错，否则返回
            for(auto c:s)
                if(c!='1'&&c!='0')
                    error();
            return 2;
        }
        //16
        else if(s[1]=='x')
        {
            //若满足条件则返回，否则报错
            for(int i=2;i<s.size();++i)
                if((int(s[i])-int('0')<=9&&int(s[i])-int('0')>=0)
                        ||s[i]=='A'||s[i]=='B'||s[i]=='C'
                        ||s[i]=='D'||s[i]=='E'||s[i]=='F')
                    return 16;
            error("错误的16进制信息");
        }
        //8
        else if(int(s[1])>int('0')&&int(s[1]<int('8')))
        {
            for(int i=2;i<s.size();++i)
                if(int(s[i])-int('0')>=0&&int(s[i])-int('0')<8)
                    return 8;
            error("错误的8进制信息");
        }
        else
            error("错误的数值，错误位：1");
    }
    //10
    else if(int(s[0])>int('0')&&int(s[0])-int('0')<10)
    {
        for(int i=0;i<s.size();++i)
            if(int(s[0])>int('0')&&int(s[0])-int('0')<10)
                return 10;
        error("错误的10进制信息");
    }
    else
        error("错误的数值,错误位：0");
}



/*
 *  本文件存放参数的检测函数
 *  用以判断参数是否合法
 *  专用于本次程序
*/

int detect_param(const std::string &lhs)
{
    if(lhs=="-b"){
        return 2;
    }else if(lhs=="-o"){
        return 8;
    }else if(lhs=="-d"){
        return 10;
    }else if(lhs=="-h"){
        return 16;
    }else 
        throw std::runtime_error("输入参数错误");
}



#endif
