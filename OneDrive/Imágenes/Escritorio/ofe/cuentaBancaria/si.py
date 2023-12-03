import matplotlib.pyplot as plt
import numpy as np

# Definir la función de la trayectoria
def funcion_trayectoria(x):
    return -1.5 * (x - 50)**3 - 2 * (x - 50)**2 + 2

# Función para calcular la energía potencial en un punto
def energia_potencial(y):
    m = 1  # Masa del objeto (puede ajustarse)
    g = 9.81  # Aceleración debido a la gravedad
    return m * g * y

# Función para calcular la energía cinética en un punto
def energia_cinetica(v):
    m = 1  # Masa del objeto (puede ajustarse)
    return 0.5 * m * v**2

# Crear valores de x
x = np.linspace(0, 100, 1000)

# Calcular los valores de y usando la función de trayectoria
y = funcion_trayectoria(x)

# Graficar la función
plt.figure(figsize=(8, 6))
plt.plot(x, y, label='Función de trayectoria')
plt.xlabel('x')
plt.ylabel('y')
plt.title('Gráfica de la función de trayectoria')

# Simulación del carrito con cambios en la velocidad según la energía
carrito_x = 0  # Posición inicial en x del carrito
carrito_y = funcion_trayectoria(carrito_x)  # Obtener la posición inicial en y
v = 0  # Velocidad inicial del carrito

# Lista para almacenar las posiciones del carrito
posiciones_x = [carrito_x]
posiciones_y = [carrito_y]

# Simular movimiento del carrito
for i in range(100):
    carrito_x += 1  # Incrementar la posición en x
    carrito_y = funcion_trayectoria(carrito_x)  # Obtener la nueva posición en y

    # Calcular energía potencial y cinética en el punto actual
    ep = energia_potencial(carrito_y)
    ec = energia_cinetica(v)

    # Ajustar la velocidad en función de la diferencia entre la energía potencial y cinética
    v = np.sqrt(2 * (ep - ec))

    # Almacenar las posiciones del carrito para graficar
    posiciones_x.append(carrito_x)
    posiciones_y.append(carrito_y)

# Graficar la trayectoria del carrito
plt.plot(posiciones_x, posiciones_y, color='red', label='Trayectoria del carrito', marker='o', markersize=4)

# Última posición del carrito
plt.scatter(posiciones_x[-1], posiciones_y[-1], color='green', label='Última posición', s=100)

plt.legend()
plt.grid(True)
plt.show()
