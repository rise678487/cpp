#include "Score.h"
Score::Score(int maxEntr)
{
  maxEntry = maxEntr;
  entries = new GameEntry[maxEntry];
  numEntry = 0;
}
Score::~Score()
{
  delete[] entries;
}


void Score::add(const GameEntry& entry)
{
  int newScore = entry.getScore();
  if(numEntry == maxEntry)
  {
    if(newScore <= entries[maxEntry - 1].getScore())
    return;
  }
}
void Score::toString()
{
  if(numEntry ==0)
  {
    std::cout<<"Container is Empty"<<'\n';
  }
  for(int i =0 ; i < numEntry ; i++)
  {
    std::cout << entries[i].getName() +"  : "+entries[i].getScore() << '\n';
  }
}
