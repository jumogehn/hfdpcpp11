
*************
State Pattern
*************

Go `Korean <README_ko.rst>`_

Test
----

**Linux**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../gumball_state_winner/
 make
 ./driver/testgumballstatewinner

**Windows**::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../gumball_state_winner/
 (Open generated solution file with Visual Studio and build. And then test.)
 cd driver/Debug/
 ./testgumballstatewinner.exe


gumballStateWinner
==================

Class Diagram
-------------

.. image:: gumball_state_winner/imgs/Overview_of_GumballStateWinner.jpg
   :scale: 50 %
   :alt: Class Diagram


Sequence Diagram
----------------

.. image:: gumball_state_winner/imgs/SequenceDiagram1.jpg
   :scale: 50 %
   :alt: Sequence Diagram


Statechart Diagram
-------------------

.. image:: gumball_state_winner/imgs/StatechartDiagram1.jpg
   :scale: 50 %
   :alt: Statechart Diagram


.. image:: State.jpg
   :scale: 50 %
   :alt: GoF's State Pattern


