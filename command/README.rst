
***************
Command Pattern
***************

Go `Korean <README_ko.rst>`_

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

 mkdir build_simpleremote
 cd build_simpleremote/
 cmake -DCMAKE_BUILD_TYPE=Debug ../simpleremote/
 make
 ./driver/testsimpleremote

 mkdir build_remote
 cd build_remote/
 cmake -DCMAKE_BUILD_TYPE=Debug ../remote/
 make
 ./driver/testremote

 mkdir build_undo
 cd build_undo/
 cmake -DCMAKE_BUILD_TYPE=Debug ../undo/
 make
 ./driver/testundo


Simple Remote Control
=====================

Class Diagram
-------------

.. image:: simple_remote/imgs/Overview_of_SimpleRemote.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: simple_remote/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



.. image:: Command_Pattern.jpg
   :scale: 50 %
   :alt: GoF's Command Pattern



Remote Control
==============

Class Diagram
-------------

.. image:: remote/imgs/Overview_of_Remote.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: remote/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram



Undo
====

Class Diagram
-------------

.. image:: undo/imgs/Overview_of_Undo.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: undo/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


