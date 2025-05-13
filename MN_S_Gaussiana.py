import numpy as np

# Definir el sistema de ecuaciones
A = np.array([[3, 2, 1], [2, 3, -2], [1, 1, 1]])
b = np.array([1, 5, 3])

# Resolver usando Eliminación Gaussiana
solucion = np.linalg.solve(A, b)
print("Solución:", solucion)  # Debería mostrar [ 2.  3. -1.]