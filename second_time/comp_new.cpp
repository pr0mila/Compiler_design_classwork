#include <bits/stdc++.h>

using namespace std;


int main()
{
    ifstream readfile("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//second_time/preprossed.txt");
    ofstream writefile ("//home//monty//Desktop//compiler_final_final_final_dude//Compiler_design//second_time/write.txt");
    string oneline,newoneline;
    string str[100],variable[100],str1[500],str3[100],str21[100],str11[100],str31[100],str22[100],str12[100],str20[100],key[100];
    char newonelin1[500];
    int flag=0,store,flag1=0;
    int j=0,m=0,len,k,l,p,x=0,y=0,i,z,f=0,g=0,h=0,q=0;
    writefile<<"--------------------------------------------------------"<<endl;
    writefile<<"--------------------------------------------------------"<<endl;
    writefile<<"|    Lexems      |   Token Name   |  Atrribute value   |"<<endl;
    writefile<<"--------------------------------------------------------"<<endl;
    writefile<<"--------------------------------------------------------"<<endl;
    if(readfile.is_open())
    {
        while(getline(readfile,oneline))
        {
            int length=oneline.length();
            int i;
            char* newoneline=new char[length];
            strcpy(newoneline,oneline.c_str());
            /*

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

                        // str1[j]+=newoneline[i];
                        str1[j]=newoneline[i];
                        newonelin1[j]=newoneline[i];
                        //writefile<<str1[j];
                        j++;
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
            }*/


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
                        str22[g]=var;
                        //writefile<<"\n"<<var<<"     "<<"keywords"<<endl;
                        // g++;

                        if(var=="int"||var=="float"||var=="double"||var=="char")
                        {
                            writefile<<"\n"<<var<<"     "<<"keywords"<<"    data type"<<endl;
                            writefile<<"--------------------------------------------------------"<<endl;

                        }

                        else
                        {
                            writefile<<"\n"<<var<<"     "<<"keywords"<<endl;
                            writefile<<"--------------------------------------------------------"<<endl;

                        }

                    }


                }
                else
                {


                    var+=newoneline[i];
                }
                //variable check

                if( newoneline[i]==' '||  newoneline[i] =='\n' )
                {


                    if( temp=="double"||temp=="int"||temp=="float"||temp=="char"||temp=="long int"||temp=="long long int"||temp=="String")
                    {

                        for(k=i; k<length-1; k++)

                        {

                            if(newoneline[k]==' ')
                                writefile<<endl;
                            else if(newoneline[k]==',')
                            {
                                writefile<<"    "<<"id"<<"    "<<temp<<endl;
                                writefile<<"--------------------------------------------------------"<<endl;
                            }
                            else if(newoneline[k]==';')
                            {
                                writefile<<"    "<<"id"<<"    "<<temp<<endl;
                                writefile<<"--------------------------------------------------------"<<endl;
                            }
                            else if(newoneline[k]=='(')
                            {
                                writefile<<"    "<<"id"<<"    "<<endl;
                                writefile<<"--------------------------------------------------------"<<endl;
                            }
                            else if(newoneline[k]==')')
                                newoneline[k]==' ';
                            else
                            {

                                writefile<<newoneline[k];
                            }



                        }

                    }
                }









                else
                {


                    temp+=newoneline[i];
                }

                //number check incomplete

                if( newoneline[i]=='0'||  newoneline[i] =='1'||newoneline[i]=='2'||  newoneline[i] =='3'
                        ||newoneline[i]=='4'||  newoneline[i] =='5'||newoneline[i]=='6'||  newoneline[i] =='7'||newoneline[i]=='8'||  newoneline[i] =='9')
                {


                    *str11=" ";
                    for(m=i; m<length-1; m++)
                    {


                        if(newoneline[m]==';')
                            continue;
                        str11[g]+=newoneline[m];
                        if(newoneline[m]=='.')
                        {
                            flag1=1;
                        }


                    }
                    if(flag1==1)
                    {
                        writefile<<*str11<<"       numeric value"<<"    float"<<endl;
                        writefile<<"--------------------------------------------------------"<<endl;
                    }

                    else
                    {
                        writefile<<*str11<<"       numeric value"<<"    integer"<<endl;
                        writefile<<"--------------------------------------------------------"<<endl;
                    }


                }
                else
                {
                    temp0+=newoneline[i];

                }





                //special symbol

                switch(newoneline[i])
                {
                case '#':
                    writefile<<newoneline[i]<<"             Special symbol"<<"     Hash           \n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '(':
                    writefile<<newoneline[i]<<"            Special symbol"<<"First bracket opening\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case ')':
                    writefile<<newoneline[i]<<"    Special symbol"<<"         First bracket closing\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '{':
                    writefile<<newoneline[i]<<"     Special symbol"<<"         Second bracket opening\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '}':
                    writefile<<newoneline[i]<<"     Special symbol"<<"         Second bracket closing\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '[':
                    writefile<<newoneline[i]<<"    Special symbol"<<"      Third bracket opening\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case ']':
                    writefile<<newoneline[i]<<"   Special symbol"<<"       Third bracket closing\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;

                case '&':
                    writefile<<newoneline[i]<<"   Special symbol"<<"        Ampersand\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '|':
                    writefile<<"   "<<newoneline[i]<<"     Special symbol"<<"         OR\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '.':
                    writefile<<newoneline[i]<<"     Special symbol"<<"         Dot\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '$':
                    writefile<<newoneline[i]<<"     Special symbol"<<"     Doller sign\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '-':
                    writefile<<newoneline[i]<<"     Operator"<<"         Substraction|\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '/':
                    writefile<<newoneline[i]<<"     Operator"<<"         Division\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '+':
                    writefile<<newoneline[i]<<"     Operator"<<"         Addition\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '*':
                    writefile<<newoneline[i]<<"     Operator"<<"     Asterisk\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '=':
                    writefile<<newoneline[i]<<"     Operator"<<"     Assignment\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '<':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Less than\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '>':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Greater than\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '%':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Percentage\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '^':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Carat\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '~':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Tilde\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case ':':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Colon\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case ',':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Comma\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case ';':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Semi-colon\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '_':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Underscore\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '?':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Question Mark\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '\'':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Single quote\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '\"':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     Single quote\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;
                case '@':
                    writefile<<newoneline[i]<<"     Special Symbol"<<"     At\n";
                    writefile<<"--------------------------------------------------------"<<endl;
                    break;

                }


            }
        }
    }

    return 0;
}

