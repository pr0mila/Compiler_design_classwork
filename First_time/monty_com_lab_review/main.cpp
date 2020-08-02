#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream readfile("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//First_time/read.txt");
    ofstream writefile ("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//First_time/write.txt");
    string oneline,newoneline;
    string str[100],variable[100],str1[100],str3[100],str11[100],str21[100],str31[100],str22[100],str12[100],str20[100],key[100];
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


            string temp,temp0,var,temp1;

            //keywords check


            for(int i=0; i<length; i++)
            {
                if( newoneline[i]==' '||  newoneline[i] =='\n' )
                {

                    if(var=="auto"|| var=="double"||var=="int"||var=="struct"||var=="break"||var=="else"||var=="long"||var=="switch"||var=="case"||
                    var=="enum"||var=="register"||var=="typedef"||var=="char"||var=="extern"||var=="return"||var=="union"||var=="const"||var=="float"
                    ||var=="short"||var=="unsigned"||var=="continue"||var=="for"||var=="signed"||var=="void"||var=="default"||var=="goto"||var=="sizeof"||var=="voltile"||var=="do"||var=="if"||var=="static"||var=="while")
                    {
                        key[g]=var;
                        g++;
                    }
                }
                else
                {


                    var+=newoneline[i];
                }
            }


            //variable check


            for(int i=0; i<length; i++)
            {
                if( newoneline[i]==' '||  newoneline[i] =='\n' )
                {

                    if( temp=="double"||temp=="int"||temp=="float"||temp=="char")
                    {
                        str[j]=temp;
                        j++;
                    }
                    if( temp=="double"||temp=="int"||temp=="float"||temp=="char")
                    {
                        for(k=i; k<length-1; k++)
                        {

                            str1[m]+=newoneline[k];
                            m++;
                        }
                    }
                }
                else
                {


                    temp+=newoneline[i];
                }
            }

            //Special symbol list:

            for(int i=0; i<length; i++)
            {

                if( newoneline[i]=='#')
                {

                    str31[f]+="# - hash";
                    f++;

                }
                else if( newoneline[i]=='<')
                {
                    str31[f]+="< - less than";
                    f++;


                }
                else if( newoneline[i]=='.')
                {
                    str31[f]+=". - dot";
                    f++;


                }
                else if( newoneline[i]=='@')
                {
                    str31[f]+="@ - at the rate";
                    f++;


                }
                else if( newoneline[i]=='%')
                {
                    str31[f]+="%- percentage";
                    f++;


                }
                else if( newoneline[i]=='!')
                {
                    str31[f]+="%- not";
                    f++;


                }
                else if( newoneline[i]=='>')
                {
                    str31[f]+="> - greater than";
                    f++;

                }
                else if( newoneline[i]=='$')
                {
                    str31[f]+="$ - DOLLARs";
                    f++;

                }
                else if( newoneline[i]==';')
                {
                    str31[f]+="; - Semi-colon";
                    f++;

                }
                else if( newoneline[i]==':')
                {
                    str31[f]+=": - Colon";
                    f++;

                }
                else if( newoneline[i]=='*')
                {
                    str31[f]+="* - Asterisk";
                    f++;

                }
                 else if( newoneline[i]=='(')
                {
                    str31[f]+="( - First Bracket opening";
                    f++;

                }
                else if( newoneline[i]==')')
                {
                    str31[f]+=") - First Bracket closing";
                    f++;

                }


            }

        }


         //print keywords

        writefile<<"\nKeywords:"<<endl;
        for(int i=0;i<g;i++)
        {
                writefile<<key[i]<<endl;
        }


        //print varibales
        writefile<<"\nVariables: \n"<<endl;
        for( i=8; i<m; i++)
        {
            if(str1[i]==")")
                continue;

            str11[x]=str1[i];
            x++;
        }

        z=1,h=1,q=1;
        for( x=0; x<i; x++)
        {


            if(str11[x]==";")

            {
                writefile<<" - ";
                str11[x]=str[z];
                h=z;
                z++;

            }



            if(str11[x]==",")
            {

                writefile<<" - ";
                str11[x]=str[z];
                h++;
                //q=x;
                //str11[q-2]==" ";

            }



            writefile<<str11[x];
            if(str11[x]=="int"||str11[x]=="double"||str11[x]=="float"||str11[x]=="char")
            {
                writefile<<endl;

            }

        }
        //print special symbols

        writefile<<"\nSpecial symbol list: \n"<<endl;
        for(i=0; i<f; i++)
        {
            writefile<<str31[i]<<"\n";
        }

    }


    return 0;
}
