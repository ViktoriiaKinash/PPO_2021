#include "Czas.h"
#include "Przyspieszenie.h"
#include "Predkosc.h"
#include "Operacje.h"


float PolozeniePoczatkowe()
{
return 22;
}

float Polozenie()
{
   return Suma(Iloczyn(Przyspieszenie(), Kwadrat(Czas()))/2, Iloczyn(PredkoscPoczatkowa(), Czas()), PolozeniePoczatkowe()); /* r = a*t^2/2 + v_0*t + r_0 */
}