1. Requerimientos funcionales (5)
Los requerimientos funcionales describen las acciones y funciones que debe realizar el sistema.

Código

Requerimiento funcional

RF-01

Medición del ruido: El sistema debe medir continuamente el nivel de ruido ambiental mediante un sensor y expresar los resultados en decibelios (dB).

RF-02

Visualización de datos: El sistema debe mostrar el nivel de ruido actual en una pantalla o aplicación.

RF-03

Generación de alertas: El sistema debe emitir una alerta visual o sonora cuando el nivel de ruido supere el límite configurado.

RF-04

Registro de mediciones: El sistema debe almacenar las mediciones de ruido con su fecha y hora para permitir consultas posteriores.

RF-05

Configuración de límites: El sistema debe permitir al usuario establecer y modificar el nivel máximo de ruido permitido.

2. Requerimientos no funcionales (5)
Los requerimientos no funcionales establecen las condiciones de calidad, rendimiento y seguridad que debe cumplir el sistema.

Código

Requerimiento no funcional

RNF-01

Precisión: El sensor debe medir los niveles de ruido con un margen de error máximo de ±2 dB, bajo las condiciones de funcionamiento especificadas por el fabricante.

RNF-02

Tiempo de respuesta: El sistema debe actualizar la medición y mostrar el nuevo valor en un máximo de 2 segundos.

RNF-03

Disponibilidad: El sistema debe funcionar al menos el 95 % del tiempo durante el período de uso previsto, excluyendo mantenimientos programados.

RNF-04

Seguridad: El sistema debe proteger los registros almacenados contra accesos y modificaciones no autorizados.

RNF-05

Usabilidad: La interfaz debe mostrar los niveles de ruido de forma clara, con valores numéricos y colores que faciliten la identificación de niveles normales y excesivos.

3. Historias de usuario (5)
Las historias de usuario describen las necesidades del sistema desde la perspectiva de quienes lo utilizan. Se utiliza la estructura: Como [usuario], quiero [funcionalidad], para [beneficio].

Código

Historia de usuario

HU-01

Como usuario, quiero conocer el nivel de ruido ambiental en tiempo real, para saber qué tan ruidoso es el lugar donde me encuentro.

HU-02

Como responsable del lugar, quiero recibir una alerta cuando el ruido supere el límite permitido, para tomar medidas y reducirlo.

HU-03

Como administrador, quiero consultar el historial de mediciones con fecha y hora, para analizar los niveles de ruido a lo largo del tiempo.

HU-04

Como usuario autorizado, quiero configurar el nivel máximo de ruido permitido, para adaptar el sistema a las necesidades del ambiente.

HU-05

Como encargado de mantenimiento, quiero identificar si el sensor está funcionando correctamente, para detectar posibles fallas y garantizar la continuidad de las mediciones.