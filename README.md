# formacao_ros_gazebo

**Este repositório tem como objetivo o apoio ao Workshop de ros/gazebo do dia 02/05/2025 na sala F402**

## Contituição do Package tutorial_pkg

### Mensagens personalizadas

**tut_msg.msg** -> Mensagem que adiciona um ID e uma Iteração a uma mensagem sensor_msgs/Temperature temperatura

    string id
    int32 iteracao
    sensor_msgs/Temperature temperatura

### Serviços

**AddTwoInts.srv** -> Serviço para soma de 2 inteiros

    int64 Val1
    int64 Val2
    ---
    int64 Soma

### Scripts

**helloWorld.py** -> Nó simples para escrever na consola "Hello World" com um contador 

**listener.py** -> Nó Subscritor simples que subscreve o tópico **/chatter** e imprime no terminal a mensagem

**publisher.py** -> Nó publicador simples que publica no tópico **/chatter** e imprime a mensagem enviada no terminal

**server.py** -> Nó servidor para implementar o serviço **AddTwoInts.srv** e imprime o resultado da soma no terminal

### Src

**listener.cpp** -> Nó Subscritor simples que subscreve o tópico **/chatter** e imprime no terminal a mensagem

**publisher.cpp** -> Nó publicador simples que publica no tópico **/chatter** e imprime a mensagem enviada no terminal

**server.cpp** -> Nó servidor para implementar o serviço **AddTwoInts.srv** e imprime o resultado da soma no terminal

**tut_msg_publisher.cpp** -> Nó publicador no tópico **custom_data** a mensagem personalizada **tut_msg**


