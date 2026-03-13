# RoboCurator
we made an automatic ball collector robot that will help to collect the spreaded ball on the ground automatically. We used a famouse micro-controller in this robot and it’s name is Arduino Uno. We also use ESP32 Cam to detect balls for this robot. There was two part in the robot. One is the collector and the other was an emty box on four wheel on where the collected balls will be kept. It is an autonomous robot. After turning on the switch of the robot, it will start searching for the ball moving around. After detecting a ball, it will stop moving and start moving forward to the ball. At the same time, the collector in front of the robot will start rotating. After collecting the ball, it will stop going forward and start searching for ball again. The same thing will be happen in a loop. We have used a website to train the robot to which one is a ball. We used AI in this case. When a ball is detected, the cam will automatically send a high signal to the microcontroller.We used Edge Impulse to train the robot to detect balls around.
To make this robot, you will need:-
1.Arduino uno
2.ESP32 Cam
3.Motors and wheels(4)
4.Batteries
5.Some crafts for the chassis
