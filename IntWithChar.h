/*************************************************************************
	> File Name: IntWithChar.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 20时02分35秒
 ************************************************************************/

#ifndef _INTWITHCHAR_H
#define _INTWITHCHAR_H

/*
 *  这是为了实现int与char的相互转换的
 *  for 16进制内
 */

//十以上用ABCDEF表示，暂支持16位
bool IntToChar(int i,char &ch)
{
    switch(i){
        case 0:
            ch='0';
            return true;
        case 1:
            ch='1';
            return true;
        case 2:
            ch='2';
            return true;
        case 3:
            ch='3';
            return true;
        case 4:
            ch='4';
            return true;
        case 5:
            ch='5';
            return true;
        case 6:
            ch='6';
            return true;
        case 7:
            ch='7';
            return true;
        case 8:
            ch='8';
            return true;
        case 9:
            ch='9';
            return true;
        case 10:
            ch='A';
            return true;
        case 11:
            ch='B';
            return true;
        case 12:
            ch='C';
            return true;
        case 13:
            ch='D';
            return true;
        case 14:
            ch='E';
            return true;
        case 15:
            ch='F';
            return true;
        default:
            return false;
  }
}

bool CharToInt(char ch,int &i)
{
    char midch;
    int j;

    //迭代判断，直至j==ch
    for(j=0;j<16;++j)
    {
        IntToChar(j,midch);
        if(midch==ch)
            break;
    }
    if(j<16)
    {
        i=j;
        return true;
    }
    else 
        return false;
}
#endif
