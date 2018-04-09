
****************
Observer Pattern
****************

Go `Korean <README_ko.rst>`_


.. image:: Observer.jpg
   :scale: 50 %
   :alt: GoF's Observer


Weather Station
===============

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 make
 ./driver/testcontent

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testcontent.exe


Class Diagram
-------------

.. image:: content/imgs/Overview_of_WeatherStation.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: content/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


