/**
 * @file Juego.h
 * @brief Definición de la clase Juego.
 * @author Benjamín Valdés
 */

#ifndef JUEGOP_H
#define JUEGOP_H

#include <iostream>
#include <string>

/**
 * @class Juego
 * @brief Representa un juego con título, fecha de lanzamiento, número de jugadores, precio y compañía.
 */
class Juego {
protected:
    std::string nombre; ///< Nombre del juego
    std::string fecha; ///< Fecha de lanzamiento
    int jugadores; ///< Número de jugadores
    float precio; ///< Precio del juego
    std::string compania; ///< Compañía desarrolladora

public:
    /**
     * @brief Constructor por defecto de Juego.
     */
    Juego();

    /**
     * @brief Constructor con parámetros.
     * @param nombre Nombre del juego.
     * @param fecha Fecha de lanzamiento.
     * @param jugadores Número de jugadores.
     * @param precio Precio del juego.
     * @param compania Compañía desarrolladora.
     */
    Juego(const std::string& nombre, const std::string& fecha, int jugadores, float precio, const std::string& compania);

    /**
     * @brief Establece el nombre del juego.
     * @param nombre Nuevo nombre del juego.
     */
    void setNombre(const std::string& nombre);

    /**
     * @brief Establece la fecha de lanzamiento del juego.
     * @param fecha Nueva fecha de lanzamiento.
     */
    void setFecha(const std::string& fecha);

    /**
     * @brief Establece el número de jugadores del juego.
     * @param jugadores Nuevo número de jugadores.
     */
    void setJugadores(int jugadores);

    /**
     * @brief Establece el precio del juego.
     * @param precio Nuevo precio del juego.
     */
    void setPrecio(float precio);

    /**
     * @brief Establece la compañía desarrolladora del juego.
     * @param compania Nueva compañía desarrolladora.
     */
    void setCompania(const std::string& compania);

    /**
     * @brief Obtiene el nombre del juego.
     * @return Nombre del juego.
     */
    std::string getNombre() const;

    /**
     * @brief Obtiene la fecha de lanzamiento del juego.
     * @return Fecha de lanzamiento del juego.
     */
    std::string getFecha() const;

    /**
     * @brief Obtiene el número de jugadores del juego.
     * @return Número de jugadores.
     */
    int getJugadores() const;

    /**
     * @brief Obtiene el precio del juego.
     * @return Precio actual del juego.
     */
    float getPrecio() const;

    /**
     * @brief Obtiene la compañía desarrolladora del juego.
     * @return Compañía desarrolladora del juego.
     */
    std::string getCompania() const;

    /**
     * @brief Devuelve una representación en cadena de la información del juego.
     * @return Cadena con la información del juego.
     */
    std::string toString() const;
};

#endif // JUEGO_H
