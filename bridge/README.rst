
***************
Bridge Pattern
***************

Go `Korean <README_ko.rst>`_

Remotes
=======

How to use cmake environment
----------------------------

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below

**Compile**
::
 mkdir build
 cd build/
 cmake ../remotes/
 (cmake ../remotes/ -DCMAKE_INSTALL_PREFIX=/usr/local)
 make


**Test**
::
 make test
 ctest


**Install**
::
 (sudo) make install


**Use**
::
 ./driver/testremotes
 (testremotes)


**Creating binary distributing**
::
 cpack -C CPackConfig.cmake


**Creating source distributing**
::
 cpack -C CPackSourceConfig.cmake


Class Diagram
-------------

.. image:: remotes/imgs/Overview_of_Remotes.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: remotes/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


.. image:: Bridge.jpg
   :scale: 50 %
   :alt: Class Diagram



Bridge Pattern using Template
-----------------------------

.. image:: Bridge_using_Template.jpg
   :scale: 50 %
   :alt: Class Diagram

