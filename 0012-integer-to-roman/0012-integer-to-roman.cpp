class Solution {
public:
    int counter(int n)
    {
        if(n == 0)
        return 1;

    int count = 0;

    while(n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
    }
    string roman(int num)
    {
        if(num==1)
        return "I";
        else if(num==2)
        return "II";
        else if(num==3)
        return "III";
        else if(num==4)
        return "IV";
        else if(num==5)
        return "V";
        else if(num==6)
        return "VI";
        else if(num==7)
        return "VII";
        else if(num==8)
        return "VIII";
        else if(num==9)
        return "IX";
        else if(num==10)
        return "X";
        else if(num==20)
        return "XX";
        else if(num==30)
        return "XXX";
        else if(num==40)
        return "XL";
        else if(num==50)
        return "L";
        else if(num==60)
        return "LX";
        else if(num==70)
        return "LXX";
        else if(num==80)
        return "LXXX";
        else if(num==90)
        return "XC";
        else if(num==100)
        return "C";
        else if(num==200)
        return "CC";
        else if(num==300)
        return "CCC";
        else if(num==400)
        return "CD";
        else if(num==500)
        return "D";
        else if(num==600)
        return "DC";
        else if(num==700)
        return "DCC";
        else if(num==800)
        return "DCCC";
        else if(num==900)
        return "CM";
        else if(num==1000)
        return "M";
        else if(num==2000)
        return "MM";
        else if(num==3000)
        return "MMM";

        return "";
    }
    string intToRoman(int num) {
       int count=counter(num);
        int digit;
        string str;
        while(num)
        {
        digit=num/pow(10,count);
        string c=roman(digit*pow(10,count));
        str=str+c;
        num=num%int(pow(10,count));
        count--;
        }
        return str;
    }
};