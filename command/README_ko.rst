
***************
Command Pattern
***************

`영어 <README.rst>`_ 로

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

+------------------------------------------------------------------------------+
|패턴 7. 커맨드                                                                |
+==============================================================================+
|요구사항 을 객체로 캡슐화 할 수 있으며, 매개변수를 써서 여러가지 다른         |
|요구사항을 집어넣을 수도 있다. 또한 요청 내역을 큐에 저장하거나 로그로 기록할 |
|수도 있으며, 작업 취소 기능도 지원 가능하다.                                  |
+------------------------------------------------------------------------------+

참조 : 메타 커맨드 패턴 (명령들로 이루어진 매크로를 만들어서 여러개의 명령을
한번에 실행한다.)


.. image:: Command_Pattern.jpg
   :scale: 50 %
   :alt: GoF's Command Pattern

참고 : 클라이언트(Client)는 Invoker 에 setCommand() 되는 ConcreteCommand 객체를
생성한다.


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


**널 객체( null object ) - 패턴 장려상**

딱히 리턴할 객체는 없지만 클라이언트 쪽에서 null 을 처리하지 않아도 되도록 하고
싶을 때 널 객체를 활용하면 좋다. 위 사례에서의 NoCommand 클래스의 용법이다.



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


* undo 기능 외에도 매크로 커맨드 객체를 사용할 수도 있다. (샘플 리모컨의
  파티모드)
* 쓰레드 풀이나 프로세스 풀 혹은 스케줄러 에서도 활용할 수 있다.
* 커맨드 클래스에 load(), store() 함수를 추가함으로써 로그 기반의 복구시스템을
  구현하는데 쓰일 수도 있으며, 트랜젝션을 활용하여 모든 작업이 완벽하게
  처리되도록 하거나, 그렇지 않으면 아무것도 처리되지 않게 롤백하도록 하는
  기능을 구현하는데 쓰일 수도 있다.




Loki의 Functor를 사용한 Command Pattern
=======================================


std::function를 사용한 Command Pattern
=======================================


boost::function를 사용한 Command Pattern
=======================================



