
*****************
Singleton Pattern
*****************

Go `Korean <README_ko.rst>`_

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

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


Chocolate Boiler
================

Class Diagram
-------------

.. image:: chocolate/imgs/Overview_of_Chocolate_Boiler.jpg
   :scale: 50 %
   :alt: Class Diagram


