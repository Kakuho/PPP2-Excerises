/*
 * Write a program where you first enter a set of name-and-value pairs, 
 * such as Joe 17 and Barbara 22. For each pair, add the name to a 
 * vector called names and the number to a vector called scores 
 * (in corresponding po- sitions, so that if names[7]=="Joe" then 
 * scores[7]==17). 
 * Terminate input with NoName 0. Check that each name is unique and 
 * terminate with an error message if a name is entered twice. 
 * Write out all the (name,score) pairs, one per line.
 */
#include <iostream>
#include <vector>

int main(){
 std::string name = "";
 int score = 100;
 std::vector<std::string> nameList(1);
 std::vector<int> scoreList(1);
 while(name != "NoName" && score != 0){
  std::cin >> name >> score;
  // check for uniqueness
  for(int i = 0; nameList){
   if(nameList[i] == name){
    std::cout << "That name is not unique! ";
    return 1;
   }
  }
  nameList.push_back(name);
  scoreList.push_back(score);

 }

}
