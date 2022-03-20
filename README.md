# Trabajo Práctico N°1 - Taller de Lenguajes I

## gitignore
_El archivo .gitignore, es un archivo de texto que le dice a Git, qué archivos o carpetas ignorar en un proyecto._

### ¿Por qué es conveniente incluirlo?
_Es conveniente utilizarlo por que no todos los archivos y carpetas son necesarios de llevar un seguimiento. Hay código que no se necesita enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten conocer el resto de las personas (ej: un archivo .env que contengan credenciales de conexión a una base de datos) o por que son archivos demasiados grandes (ej: imagenes, videos) o simplemente no necesitas mantener en el control de versiones (ej: archivos compilados)._

### ¿Cuándo se debe hacer?
_Cuando en nuestro proyecto tengamos:_
* Dependencias (ej: /node_modules en Node.js)
* Código compilado (ej: archivos .o en C)
* Directorios de salida de compilación (ej: /bin o /out)
* Archivos generados en tiempo de ejecución (ej: .log, .lock, .tmp)
* Archivos ocultos del sistema (ej: .DS_Store o Thumbs.db)
* Archivos personales de configuración de IDE (ej: )

### ¿Cómo configuraría el archivo .gitignore?
_Creando un archivo .gitignore en la raíz del proyecto, abriéndolo en un editor de texto o IDE y colocando un archivo o directorio a ignorar por línea, agregando previamente un comentario descriptivo de ese directorio/archivo. Por ejemplo en un proyecto sencillo en Node:_

```
# Dependencias
/node_modules

# Producción
/build

# Variables de Entorno
.env.local
.env.development.local
.env.test.local
.env.production.local

# Logs
npm-debug.log*
yarn-debug.log*
yarn-error.log*
```

## Punteros
En el punto b) y c) se obtiene lo mismo debido a que el puntero apunta exactamente a la dirección de memoria de la variable.
En el punto d) se obtiene la dirección de memoria del puntero, no es igual a las anteriores ya que el puntero es una variable más, por lo tanto se asigna en otra dirección de memoria. Es importante diferenciar la dirección de memoria de un puntero (d), a la dirección a la que el mismo apunta (b).
