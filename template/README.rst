
***********************
Template method Pattern
***********************

Go `Korean <README_ko.rst>`_

Barista
=======

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../barista/
 make
 ./driver/testbarista

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../barista/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testbarista.exe


Class Diagram
-------------

.. image:: barista/imgs/Overview_of_Barista.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: barista/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



.. image:: TemplateMethod.jpg
   :scale: 50 %
   :alt: GoF's Template Method Pattern



