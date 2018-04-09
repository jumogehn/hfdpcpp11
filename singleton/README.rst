
*****************
Singleton Pattern
*****************

Go `Korean <README_ko.rst>`_

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../chocolate/
 make
 ./driver/testchocolate

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../chocolate_meyers/
 make
 ./driver/testchocolatemrs

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../chocolate/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testchocolate.exe

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../chocolate_meyers/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testchocolatemrs.exe


Chocolate Boiler
================

Class Diagram
-------------

.. image:: chocolate/imgs/Overview_of_Chocolate_Boiler.jpg
   :scale: 50 %
   :alt: Class Diagram


