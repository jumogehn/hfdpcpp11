
***************
Factory Pattern
***************

Go `Korean <README_ko.rst>`_

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../simple_factory/
 make
 ./driver/testpizzas

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../factory_method/
 make
 ./driver/testpizzafm


 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../abstract_factory/
 make
 ./driver/testpizzaaf

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../simple_factory/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testpizzas.exe

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../factory_method/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testpizzafm.exe

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../abstract_factory/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testpizzaaf.exe


Simple Static Factory Method
============================


Class Diagram
-------------

.. image:: simple_factory/imgs/Overview_of_SimpleFactory.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: simple_factory/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



Factory Method
==============


Class Diagram
-------------

.. image:: factory_method/imgs/Overview_of_FactoryMethod.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: factory_method/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



.. image:: FactoryMethod.jpg
   :scale: 50 %
   :alt: A Facade




**OCP(Open-Closed Principle)**

.. image:: OCP_in_FactoryMethod.jpg
   :scale: 50 %
   :alt: Class Diagram




Abstract Factory
================


Class Diagram
-------------

.. image:: abstract_factory/imgs/Overview_of_AbstractFactory.jpg
   :scale: 50 %
   :alt: Class Diagram



Sequence Diagram
----------------

.. image:: abstract_factory/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


.. image:: AbstractFactory.jpg
   :scale: 50 %
   :alt: A Facade


