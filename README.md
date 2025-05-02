![image](https://github.com/user-attachments/assets/447d8256-fa72-4988-a51b-00ae30a7048b)

# formacao_ros_gazebo

**Este repositório tem como objetivo o apoio ao Workshop de ros/gazebo do dia 02/05/2025 na sala F402**

## Constituição do Package tutorial_pkg

**Este package serve como exemplo ao longo do workshop,tem exemplo de subscritores, publicadores, mensagens e serviços, de modo a facilitar a aprendizagem e a implementação no futuro**

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


## Constituição do pkg_exercicios

**Package de apoio para os exercicios de implementação de subscritor, publicador, serviços e mensagens**

### Scripts

**ficheiros de apoio a resolução dos 4 exercicios em python**

### Src

**Ficheiros de aopio para a resolução dos 4 exercicios em c++**

## Constituição do ex_final_pkg

**Este package é uma ajuda para o exercicio final do robo aspirador, basta escolher uma linguagem para implementar o nó necessário para a navegação e percepção**

### Launch

Rodar o launch de acordo com o nó implementado

**aspirador_cpp.launch** -> launch para rodar o nó em cpp, o mundo e o robô

**aspirador_py.launch** -> launch para rodar o nó em python, o mundo e o robô

### Scripts

**aspirador.py** -> código base para implementação do nó em python

### Src

**aspirador.cpp** -> código base para implementação do nó em python
