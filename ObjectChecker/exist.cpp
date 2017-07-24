#include <iostream>
#include <set>
#include <string>
#include <cassert>
#include <TH1F.h>
using namespace std;

class Name {
      TH1F *fHist;
   public:
      Name();
      Name(string n);
      TH1F* GetHist() const {return fHist;}
      bool operator<(const Name& right)const; 
      string get_name()const;
      void CheckAndInsert(std::string objName);
      std::set<Name> GetSet(){return NamesSet;}
   private:
      string name;             
      std::set<Name> NamesSet;
};

void Name::CheckAndInsert(std::string objName){
for (std::set<Name>::iterator it=NamesSet.begin(); it!=NamesSet.end(); ++it){
if((*it).get_name() == objName)
{
    std::cout <<"Attempt to DUPLICATE ... the histogram with name : "<< (*it).GetHist()->GetName() << "  !!! " << std::endl;
//    cout << "HistName : "<< (*it).GetHist()->GetName() << endl;
    return ;
}
}

std::cout<<"Inserting new Object..... " << std::endl;
NamesSet.insert(Name(objName));

}

Name::Name(){}

Name::Name(string n)
{
   name = n;
   fHist = new TH1F(n.c_str(),n.c_str(),100,0,100);
}

bool Name::operator<(const Name& right)const
{
      return (this->name < right.name);
}

string Name::get_name()const
{
      return name;
}

int main()
{

Name name;
//set<Name>NamesSet;


//NamesSet.insert(Name("Patrick Star"));
//NamesSet.insert(Name("Jason"));
//NamesSet.insert(Name("Bob Marl"));
//NamesSet.insert(Name("Greg"));
//set<Name>::iterator pos ; 

std::vector<std::string> nameVect;
nameVect.push_back("Raman");
nameVect.push_back("Sehgal");

for(int i = 0 ; i < nameVect.size() ; i++){

string cusname = nameVect[i];

/*
for (std::set<Name>::iterator it=NamesSet.begin(); it!=NamesSet.end(); ++it){
//if ( NamesSet.count(cusname) == 1 )
if((*it).get_name() == cusname)
{
  //  cout << cusname << " exists in set"<<endl;
    std::set<Name>::iterator it = NamesSet.begin();
    cout << "HistName : "<< (*it).GetHist()->GetName() << endl;
    return 0;
}
}
*/

//NamesSet.insert(Name(cusname));
name.CheckAndInsert(cusname);

}

//NamesSet.insert(Name("raman"));
name.CheckAndInsert("raman");

std::cout<<"------------------ Trying to duplicate -------------------" << std::endl;
//NamesSet.insert(Name("Raman"));
name.CheckAndInsert("Raman");

std::set<Name> NamesSet = name.GetSet();

std::cout<<"-------------- Printing All histograms names -------------" << std::endl;
for (std::set<Name>::iterator it=NamesSet.begin(); it!=NamesSet.end(); ++it){
std::cout<<"HistName : "<< (*it).GetHist()->GetName() << std::endl;
}

/*else 
{
    cout<<"Nanda!";
}
*/
   return 0;
}
