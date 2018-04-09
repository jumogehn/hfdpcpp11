
*****************
Composite Pattern
*****************

Go `Korean <README_ko.rst>`_

Menus
=====

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../menus/
 make
 ./driver/testmenus

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../menus/

Open generated solution file with Visual Studio and build. And then test::

 cd driver/Debug/
 ./testmenus.exe


.. image:: Composite.jpg
   :scale: 50 %
   :alt: GoF's Composite Pattern


Class Diagram
-------------

.. image:: menus/imgs/Overview_of_Menus.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: menus/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


Composite Pattern which has external Iterator
--------------------------------------------------------------

.. image:: Composite_with_Iterator.jpg
   :scale: 50 %
   :alt: GoF's Composite Pattern + Iterator Pattern

