
#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream readfile("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//second_time/read.txt");
    ofstream writefile ("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//second_time/preprossed.txt");
    string oneline,newoneline;
    string str[100],variable[100],str1[500],str3[100],str11[100],str21[100],str31[100],str22[100],str12[100],str20[100];
    char newonelin1[500];
    int flag=0,store;
    int j=0,m=0,len,k,l,p,x=0,y=0,i,z,f=0,g=0,h=0,q=0;
    if(readfile.is_open())
    {
        while(getline(readfile,oneline))
        {
            int length=oneline.length();
            int i;
            char* newoneline=new char[length];
            strcpy(newoneline,oneline.c_str());


            //comment line removing


            if(flag==0)
            {
                for( i=0; i<length; i++)
                {
                    if(newoneline[i]=='/' && newoneline[i+1]=='/')
                    {
                        break;
                    }
                    else if(newoneline[i]=='/' && newoneline[i+1]=='*')
                    {

                        flag=1;
                        break;
                    }
                    else
                    {
                        writefile<<newoneline[i];
                        //ST+=
                    }
                }
                if(flag==0)
                {
                    writefile<<endl;
                }
            }
            else
            {
                for( i=0; i<length; i++)
                {
                    if(newoneline[i]=='*' && newoneline[i+1]=='/')
                    {

                        flag=0;
                        break;
                    }
                }
            }


}
}
    return 0;
}

