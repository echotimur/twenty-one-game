#include <iostream>
using namespace std;
void letters(int value){

  string two[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "# #     # #",
  "#     #   #",
  "#  #      #",
  "#  ###### #",
  "#         #",
  "###########"
  };

  string three[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "# #     # #",
  "#    ###  #",
  "# #     # #",
  "#   ####  #",
  "#         #",
  "###########"
  };

  string four[9] =
  {
  "###########",
  "#         #",
  "# #     # #",
  "# #     # #",
  "# ####### #",
  "#       # #",
  "#       # #",
  "#         #",
  "###########"
  };

  string five[9] =
  {
  "###########",
  "#         #",
  "# ####### #",
  "# #       #",
  "# ####### #",
  "#       # #",
  "# ####### #",
  "#         #",
  "###########"
  };

  string six[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "# #       #",
  "#  #####  #",
  "# #     # #",
  "#  #####  #",
  "#         #",
  "###########"
  };

  string seven[9] =
  {
  "###########",
  "#         #",
  "#  ###### #",
  "#       # #",
  "#      #  #",
  "#     #   #",
  "#     #   #",
  "#         #",
  "###########"
  };

  string eight[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "# #     # #",
  "#  #####  #",
  "# #     # #",
  "#  #####  #",
  "#         #",
  "###########"
  };

  string nine[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "# #     # #",
  "#  #####  #",
  "#       # #",
  "#  #####  #",
  "#         #",
  "###########"
  };

  string ten[9] =
  {
  "###########",
  "#         #",
  "# #  ###  #",
  "# # #   # #",
  "# # #   # #",
  "# # #   # #",
  "# #  ###  #",
  "#         #",
  "###########"
  };

  string j[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "#    #    #",
  "#    #    #",
  "#    #    #",
  "#  ###    #",
  "#         #",
  "###########"
  };

  string q[9] =
  {
  "###########",
  "#         #",
  "#  #####  #",
  "#  #   #  #",
  "#  #   #  #",
  "#  ###### #",
  "#       # #",
  "#         #",
  "###########"
  };

  string k[9] =
  {
  "###########",
  "#         #",
  "# #     # #",
  "# #    #  #",
  "# #####   #",
  "# #    #  #",
  "# #     # #",
  "#         #",
  "###########"
  };

  string a[9] =
  {
  "###########",
  "#         #",
  "#  #      #",
  "#  # #    #",
  "#  #  #   #",
  "#  #####  #",
  "#  #    # #",
  "#         #",
  "###########"
  };

  switch (value) {
    case 2:
      for(int i=0; i<9; i++){
        cout<<two[i]<<endl;
      }
      break;

    case 3:
      for(int i=0; i<9; i++){
        cout<<three[i]<<endl;
      }
      break;

    case 4:
      for(int i=0; i<9; i++){
        cout<<four[i]<<endl;
      }
      break;

    case 5:
      for(int i=0; i<9; i++){
        cout<<five[i]<<endl;
      }

    case 6:
      for(int i=0; i<9; i++){
        cout<<six[i]<<endl;
      }
      break;

    case 7:
      for(int i=0; i<9; i++){
        cout<<seven[i]<<endl;
      }
      break;

    case 8:
      for(int i=0; i<9; i++){
        cout<<eight[i]<<endl;
      }
      break;

    case 9:
      for(int i=0; i<9; i++){
        cout<<nine[i]<<endl;
      }
      break;

    case 10:
      for(int i=0; i<9; i++){
        cout<<ten[i]<<endl;
      }
      break;

    case 11:
      for(int i=0; i<9; i++){
        cout<<j[i]<<endl;
      }
      break;

    case 12:
      for(int i=0; i<9; i++){
        cout<<q[i]<<endl;
      }
      break;

    case 13:
      for(int i=0; i<9; i++){
        cout<<k[i]<<endl;
      }
      break;

    case 14:
      for(int i=0; i<9; i++){
        cout<<a[i]<<endl;
      }
      break;
  }
}