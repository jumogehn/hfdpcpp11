
**************
Facade Pattern
**************

Go `Korean <README_ko.rst>`_

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../home_theater/
 make
 ./driver/testhometheater

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../home_theater/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testhometheater.exe


HomeTheater
===========

Class Diagram
-------------

.. image:: home_theater/imgs/Overview_of_HomeTheater.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: home_theater/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


.. image:: Facade.jpg
   :scale: 50 %
   :alt: A Facade


