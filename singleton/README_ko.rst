
*****************
Singleton Pattern
*****************

`영어 <README.rst>`_ 로

Test
----

This project uses cmake so wide range of OSes are supported. For ubuntu, you can 
compile as shown below::

 mkdir build
 cd build/
 cmake -DCMAKE_BUILD_TYPE=Debug ../chocolate/
 make
 ./driver/testchocolate


+------------------------------------------------------------------------------+
|패턴 6. 싱글턴                                                                |
+==============================================================================+
|해당 클래스의 인스턴스가 하나만 만들어지고, 어디서든지 그 인스턴스에 접근할 수|
|있도록 하기 위한 패턴                                                         |
+------------------------------------------------------------------------------+


Chocolate Boiler
================

Class Diagram
-------------

.. image:: chocolate/imgs/Overview_of_Chocolate_Boiler.jpg
   :scale: 50 %
   :alt: Class Diagram


싱글턴을 쓸 때는 동기화 문제를 해결해야만 한다. 위 C++ 예제에서는 동기화 코드가
들어가 있지 않기 때문에 별도로 동기화 문제를 해결해야만 한다. 언어별로 제공되는
각종 동기화 기법을 사용하거나 아예 static 객체로 생성시키거나 안전한 시점에 객체
생성을 시키도록 하는 등의 방법을 쓸 수 있다.

한편 C++11 에서는 위의 객체 생성 시점의 동시성 문제가 표준에 의해 해결이 되었다!
종전의 Meyers 의 싱글턴이 C++11 에서는 완벽하게 동작하는 것이다!
Meyers 의 싱글턴으로 구현한 코드가 chocolate_meyers 에 있다.