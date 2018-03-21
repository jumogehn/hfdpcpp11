
*************
State Pattern
*************

Go `Korean <README_ko.rst>`_

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can
compile as shown below::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../gumball_state_winner/
 make
 ./driver/testgumballstatewinner


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


