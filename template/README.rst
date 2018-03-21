
***********************
Template method Pattern
***********************

Go `Korean <README_ko.rst>`_

Barista
=======

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../barista/
 make
 ./driver/testbarista


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



