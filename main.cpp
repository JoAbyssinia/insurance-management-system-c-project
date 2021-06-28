#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
using namespace std;
void listemploy();
void update();
int searchList();
void deleteList();
void payment();

fstream bothfile;
ifstream readfile,readfilepay;
ofstream writefile,writefilepay;
string id,idholder,autoidJ,autoidJpa,filDe,filep,all,allpay,giftid,searchId,deleteID,universal;
string idno[]={"001","002","003","004","005","006","007","008","009","010","011","012","013","014","015"
              ,"016","017","018","019","020"};
int main()
{


        filep= "pay/";
        filDe= "outs/";
    idholder="RVU";
    id = ".out";
    for(int i = 0;i<=19;i++){
        autoidJ=(filDe+idholder+idno[i]+id);
        const int result = remove(autoidJ.c_str());
        if(result==0){
        cout << "deleted"<< endl;
    }
            //universal = autoidJpa;
            //readfile.open(autoidJ.c_str());
            //giftid = (idholder+idno[i]);
            //if(readfile.fail()){
        //writefile.open(autoidJ.c_str());
        //writefile << "id number is :"<< giftid<< endl;
        cout << " enter your name "<<endl;
       // writefile << "Name :";
       //cin >>  all ;
        //writefile << all << endl;
        //writefile.close();

        //autoidJpa=(filep+idholder+idno[i]+id);

        //writefilepay.open(autoidJpa.c_str(),ios::app);
        //cout << "enter this year pay :";
        //cin >> allpay ;
        //writefilepay << "name :" << all <<endl;
        //writefilepay << "id no :"<< giftid << endl;
        //writefilepay.close();
            //}else{
              //  if(idno[i]=="020"){
                //    cout << "data base out of memory" <<endl;
                //}
            //}
            //readfile.close();

    }

 cout << "\n\n\nsearch engine...."<< endl;
    //searchList();
       //payment();
    //deleteList();
    //update();
return 0;
}
int searchList(){
    cin >> searchId;
    if(searchId.length()<3||searchId.length()>3){
        cout << "enter correct password length 3 digit"<<endl;
    }else{
    idholder=(filDe+idholder+searchId+id);
    readfile.open(idholder.c_str());
    if(readfile.fail()){
        cerr << idholder <<": file not found"<< endl;
    }else {
    char re;
    while(readfile.get(re)){
           cout  <<  re ;
                if(re=='\n'){
                    cout << "\t";
                }
           }
        }
    }
    readfile.close();
    cout << "\n\n\n list of accounts\n\n\n\n"<< endl;
   // listemploy();
    return 0;
}
void listemploy(){
    string idholderList,idex,id,idholderRefernce,filDe;
    filDe= "out/";
    idholderList.append("RVU");
    idex.append(".txt");

    for(int i=0; i<=11; i++){
     idholderRefernce= (filDe+idholderList+idno[i]+idex);
     readfile.open(idholderRefernce.c_str());
     if(readfile.fail()){
        cout << "the file "<< idholderRefernce << " could't get"<< endl;
     }else{
    char re;
    cout << "\t" << idholderRefernce << endl;
        while(readfile.get(re)){
                cout  <<  re ;
                if(re=='\n'){
                    cout << "\t";
                }
        }
        readfile.close();
     }
    }
}
void deleteList(){
     filDe= "pay/";
    idholder="RVU";
    id = ".out";
    cout << "enter id for delete" << endl;
    cin >> deleteID;
    if(deleteID.length()<3||deleteID.length()>3){
        cout << "enter correct password length 3 digit"<<endl;
    }else{
    autoidJ=(filDe+idholder+deleteID+id);
    readfile.open(autoidJ.c_str());
    if(readfile.fail()){
        cerr << autoidJ <<": file not found"<< endl;
    }else {

           cout  <<  "are you sure Y/N" <<endl;
                char ans;
                cin >> ans;
                if (ans == 'y'){

                    writefile.open(autoidJ.c_str());
                    writefile<< ""<<endl;
                    writefile.close();
                    cout << "delete sucessful"<<endl;
                }else {
                cout << "back to menu >>>" <<endl;
                }
        }
    }
    readfile.close();
}
void payment(){
   cin >> searchId;
    if(searchId.length()<3||searchId.length()>3){
        cout << "enter correct password length 3 digit"<<endl;
    }else{
    idholder=(filep+idholder+searchId+id);
    readfilepay.open(idholder.c_str());
    char re;
    while(readfilepay.get(re)){
        cout << re;
    }
    readfile.close();
    cout << endl;
    cout << universal << endl;
    writefilepay.open(idholder.c_str(),ios::app);
    cout << " enter this year pay :";
    cin >> all;
    writefilepay <<" + " <<  all <<endl;
    writefilepay.close();
    }
}
void update(){
    //writefile.open("out/RVU002.txt");
    readfile.open("out/RVU002.txt");

    if(readfile.fail()){
        cout << "error" ;
    }else{
    char next ;

        while (readfile.get(next)){
            cout << next;
        if(next==':'){
          cout << "yohannes kassa";
        }
        //cout<<next;
        }
        //writefile.close();
        readfile.close();
    }
}










