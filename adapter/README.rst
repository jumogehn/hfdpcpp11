
***************
Adapter Pattern
***************

Go `Korean <README_ko.rst>`_

Ducks
=====

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../ducks/
 make
 ./driver/testducks

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../ducks/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testducks.exe


Class Diagram
-------------

.. image:: ducks/imgs/Overview_of_Ducks.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: ducks/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



**Object Adapter(StarUML Template)**

.. image:: Object_Adapter.jpg
   :scale: 50 %
   :alt: Class Diagram



**Class Adapter**

.. image:: Class_Adapter.jpg
   :scale: 50 %
   :alt: Class Diagram


