#include <iostream>
#include <unistd.h>
#include <ctime>
#include "letters.h"
using namespace std;

const int arr[48] = {2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7,
  8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 11, 11, 11, 11, 12, 12, 12, 12, 13, 13, 13, 13};

bool quantity_random_check(int a_cheking_value){
  int b=0;
  for(int i=0; i<48; i++){
    if(a_cheking_value==arr[i]){
      b++;
    }
  }
  if(b>4){
    return false;
  }
  return true;
}


void draw(int variant){
  switch (variant) {
    case 0:
      for(int i=0; i<39; i++){
        usleep(50000);
        cout<<"#";
        cout.flush();
      }
      break;

    case 1:
      for(int i=0; i<39; i++){
        usleep(50000);
        cout<<"-";
        cout.flush();
      }
      break;

    case 2:
      for(int i=0; i<39; i++){
        usleep(100000);
        cout<<"-";
        cout.flush();
      }
      break;
  }
}

int main(){
  srand(time(NULL));
  int wins_count=0;

  // char buffer[256];
  // DWORD size;
  // size = sizeof(buffer);
  // GetUserName(buffer, &size);
  // string userName = buffer;

  cout<<endl;
  draw(0);
  cout<<endl<<"WELCOME TO 21"<<endl<<"DO YOU WANT START GAME?"<<endl<< "y/n: ";
  char answer;
  cin>>answer;
  if(answer=='n'){
    draw(0);
    return 0;
  }

  char answer_2='y';
  int *array = new int[9];
  int *array_comp = new int[9];
  while(answer_2=='y'){

    draw(1);


    cout<<endl;

    char choise;

    for(int i=0; i<9; i++){
      array[i]=0;
    }

    array[0]=arr[rand()%35];
    array[1]=arr[rand()%35];

    int j=2;
    int a;
    bool stop_cycle=true;

    cout<<"YOUR CARD: "<<endl; letters(array[0]); cout<<endl; letters(array[1]); cout<<endl<<"More or Done?"<<endl<<"m/d: ";
    cin>>choise;


    while(choise=='m'){
      draw(1);

      while(stop_cycle){
        a=arr[rand()%35];
        if(quantity_random_check(a)){
          array[j]=a;
          stop_cycle=false;
        }
      }

      stop_cycle=true;
      cout<<endl<<"YOUR CARDS: "<<endl;

      for(int i=0; i<=j; i++){
        //cout<<array[i];
        letters(array[i]);
        cout<<endl;
      }

      j++;
      cout<<endl<<"More or Done?"<<endl<<"m/d: ";
      cin>>choise;
    }



    for(int i=0; i<9; i++){
      array_comp[i]=0;
    }

    int sum=0;
    bool a_comp = true;
    int j_comp=0;
    int c;
    int num=0;
    bool stop_comp=true;

    while(a_comp){

      while(stop_comp){
        c=arr[rand()%35];;
        if(quantity_random_check(c)){
          array_comp[j_comp]=c;
          stop_comp=false;
          j_comp++;
        }
      }

      sum = sum + array_comp[num];

      if(sum==20 || sum>=22 || sum==21 || sum == (16 + rand() % (19 - 16))){
        a_comp=false;
      }

      stop_comp=true;
      num++;
    }


    draw(1);
    for(int i=0; i<j_comp; i++){
      cout<<endl<<"DEALERS CARDS: ";
      cout<<"|"<<array_comp[i]<<"|"<<endl;
      draw(2);
    }

    cout<<endl;

    int user_sum = 0;
    for(int i=0; i<j; i++){
      user_sum = user_sum + array[i];
    }

    int comp_sum = 0;
    for(int i=0; i<j_comp; i++){
      comp_sum = comp_sum + array_comp[i];
    }

    cout<<"WINNER: ";
    if(user_sum>comp_sum && user_sum<=21){
      cout<<"USER";
      wins_count++;
    }else if(comp_sum>user_sum && comp_sum<=21){
      cout<<"DEALER";
    }else if(comp_sum>21 && user_sum>21){
      cout<<"NONE";
    }else if(comp_sum>21 && user_sum<=21){
      cout<<"USER";
      wins_count++;
    }else if(user_sum>21 && comp_sum<=21){
      cout<<"DEALER";
    }else if(user_sum==comp_sum && user_sum<=21){
      cout<<"NONE";
    }


    if(wins_count==5){
      cout<<endl;
      draw(1);
      cout<<endl<<"Oh, you win 5 times. You have goodluck today :)"<<endl;
    }

    cout<<endl;
    draw(0);

    cout<<endl<<"DO YOU WANT RESTART?"<<endl;
    cout<<"y/n: ";
    cin>>answer_2;
    if(choise=='n'){
      break;
    }
  }

  delete [] array;
  delete [] array_comp;

  return 0;
}
