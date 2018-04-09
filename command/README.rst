
***************
Command Pattern
***************

Go `Korean <README_ko.rst>`_

Test
----

**Linux**::

 mkdir build
 cd build
 cmake -DCMAKE_BUILD_TYPE=Debug ../simpleremote/
 make
 ./driver/testsimpleremote

 mkdir build
 cd build
 cmake -DCMAKE_BUILD_TYPE=Debug ../remote/
 make
 ./driver/testremote

 mkdir build
 cd build
 cmake -DCMAKE_BUILD_TYPE=Debug ../undo/
 make
 ./driver/testundo

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../simpleremote/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testsimpleremote.exe

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../remote/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testremote.exe

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../undo/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testundo.exe


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


