/**
 * @file JuegoMesa.h
 * @brief Definición de la clase JuegoMesa.
 * @author Benjamín Valdés
 */

#ifndef JUEGOMESA_H
#define JUEGOMESA_H

#include "JuegoP.h"

/**
 * @class JuegoMesa
 * @brief Representa un juego de mesa, derivado de la clase Juego,
 * con dimensiones físicas.
 */
class JuegoMesa : public Juego {
private:
    float alto;  ///< Altura del juego de mesa
    float ancho; ///< Ancho del juego de mesa
    float largo; ///< Largo del juego de mesa

public:
    /**
    * @brief Constructor por defecto de Juego.
    */
    JuegoMesa();
    /**
     * @brief Constructor con parámetros.
     * @param nombre Nombre del juego.
     * @param fecha Fecha de lanzamiento.
     * @param jugadores Número de jugadores.
     * @param precio Precio del juego.
     * @param compania Compañía desarrolladora.
     * @param alto Alto de la caja.
     * @param ancho Ancho de la caja.
     * @param largo Largo de la caja.
     */
    JuegoMesa(const std::string& nombre, const std::string& fecha, int jugadores, float precio, const std::string& compania,
              float alto, float ancho, float largo);

    /**
     * @brief Establece el alto del juego.
     * @param alto Nuevo alto del juego.
     */
    void setAlto(float alto);

    /**
     * @brief Establece el ancho del juego.
     * @param acho Nuevo alto del juego.
     */
    void setAncho(float ancho);

    /**
     * @brief Establece el largo del juego.
     * @param largo Nuevo alto del juego.
     */
    void setLargo(float largo);

    /**
     * @brief Obtiene el alto del juego.
     * @return Alto del juego.
     */
    float getAlto() const;

    /**
     * @brief Obtiene el ancho del juego.
     * @return Ancho del juego.
     */
    float getAncho() const;

    /**
     * @brief Obtiene el largo del juego.
     * @return Largo del juego.
     */
    float getLargo() const;

    /**
     * @brief Devuelve una representación en cadena de la información del juego.
     * @return Cadena con la información del juego.
     */
    std::string toString() const;
};

#endif // JUEGOMESA_H
