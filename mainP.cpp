// este es un comentario 

#include "JuegoP.h"
#include "JuegoMesa.h"
#include "VideoJuego.h"

int main(){

  Juego vacio ;
  Juego generico("nombre","algún día", 0, 0.0,"alguna compañía");
  JuegoMesa catan("Catan","10-2-2010", 4, 70.2, "Devir", 30, 47, 56);
  JuegoMesa raiders("Raiders of the North Sea", " 1-12-2013", 4, 83.0,
          "North Games", 25, 50, 67);
  VideoJuego elden("Elden ring", "7-7-2021", 1, 66.8, "From Software",
          "Multiplataforma");
  VideoJuego wk40k("Space Marine 2", "8-12-2024", 8, 72.5, "Relic", "PC" );

  std::cout << "clase Juego: " << std::endl <<
  vacio.toString() << std::endl;

  std::cout << "clase Juego: " << std::endl <<
  generico.toString() << std::endl;

  std::cout << "clase JuegoMesa: " << std::endl <<
  catan.toString() << std::endl;

  std::cout << "clase JuegoMesa: " << std::endl <<
  raiders.toString() << std::endl;

  std::cout << "clase VideoJuego: " << std::endl <<
  elden.toString() << std::endl;

  std::cout << "clase VideoJuego: " << std::endl <<
  wk40k.toString() << std::endl;

  return 0;
}
