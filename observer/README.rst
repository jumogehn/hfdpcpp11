
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

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../content/
 make
 ./driver/testcontent


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


