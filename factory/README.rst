
***************
Factory Pattern
***************

Go `Korean <README_ko.rst>`_

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

 mkdir build_simple_factory
 cd build_simple_factory/
 cmake -DCMAKE_BUILD_TYPE=Debug ../simple_factory/
 make
 ./driver/testpizzaas

 mkdir build_factory_method
 cd build_factory_method/
 cmake -DCMAKE_BUILD_TYPE=Debug ../factory_method/
 make
 ./driver/testpizzafm

 mkdir build_abstract_factory
 cd build_abstract_factory/
 cmake -DCMAKE_BUILD_TYPE=Debug ../abstract_factory/
 make
 ./driver/testpizzaaf

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


