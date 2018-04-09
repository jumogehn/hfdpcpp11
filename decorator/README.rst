
*****************
Decorator Pattern
*****************

Go `Korean <README_ko.rst>`_

Starbuzz
========

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 make
 ./driver/testdecorator

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testdecorator.exe


.. image:: Decorator.jpg
   :scale: 50 %
   :alt: GoF's Decorator Pattern


Class Diagram
-------------

.. image:: content/imgs/Overview_of_Starbuzz.jpg
   :scale: 50 %
   :alt: Class Diagram



Sequence Diagram
----------------

.. image:: content/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


