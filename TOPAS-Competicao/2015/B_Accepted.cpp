#include <iostream>
#include <string.h>
#include <stdio.h>


using namespace std;

int main()
{
     int bracas,toesas,passos,varas,covados,pes,palmos,polegadas,total=0;
     cin >> bracas >> toesas >> passos >> varas >> covados >> pes >> palmos >> polegadas;
     total=covados*24+varas*40+bracas*80+palmos*8+pes*12+passos*60+toesas*72+polegadas;
     cout << total/40 << " " << (total%40)/8 << " " << (total%40)%8 << endl;
     return 0;
}
