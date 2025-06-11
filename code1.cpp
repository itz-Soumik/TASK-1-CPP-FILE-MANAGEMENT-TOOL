#include<iostream>
#include<fstream>
using namespace std;

//Functions for files
void writeFile(const string &file); 
void readFile(const string &file);
void appendFile(const string &file);

void writeFile(const string &file){ //Function for Overwriting in file
    ofstream zout(file); //Accessing the file
    if(!zout){
        cerr<<"Can't open File!"<<endl;
        return;
    }
    string str;
    cout<<"Enter Data to write(overwrite): ";
    cin.ignore();
    getline(cin,str);
    zout<<str;
    zout.close(); //Closing the file
    cout<<"Data entered and Overwritten successfully!!!"<<endl;
}

void readFile(const string &file){ //Function for Reading in file
    ifstream zin(file); //Accessing the file
    if(!zin){
        cerr<<"Can't open File!"<<endl;
        return;
    }
    string str;
    cout<<"\n-----Reading From File-----\n";
    while(getline(zin,str)){
        cout<<str;
    }
    zin.close(); //Closing the File
}

void appendFile(const string &file){ //Function For Appending in file
    ofstream zapp(file,ios::app); //Accessing the file
    if(!zapp){
        cerr<<"Can't open File!"<<endl;
        return;
    }
    string str;
    cout<<"Enter Data to write(append): ";
    cin.ignore();
    getline(cin,str);
    zapp<<str;
    zapp.close(); //Closing the file
    cout<<"Data entered and Appended successfully!!!"<<endl;
}

int main(){
    string filename = "sampleFile.txt";
    int choice;
    while(1){
        cout<<"\n--------File Management Tool---------";
        cout<<"\n1. Write in File";
        cout<<"\n2. Read in File";
        cout<<"\n3. Append in File";
        cout<<"\n4. Exit from File";
        cout<<"\nEnter your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            writeFile(filename);
            break;
            case 2:
            readFile(filename);
            break;
            case 3:
            appendFile(filename);
            break;
            case 4:
            cout<<"Exited From File Successfully!";
            return 0;
        default:
            cout<<"You Entered Wrong Choice!";    
        }
    }
    return 0;
}
