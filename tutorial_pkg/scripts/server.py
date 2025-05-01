#!/usr/bin/env python3
import rospy
from tutorial_pkg.srv import AddTwoInts, AddTwoIntsResponse

def addTwoIntsCallback(req):
    resultado = req.Val1 + req.Val2
    rospy.loginfo("Recebido: Val1=%d, Val2=%d | Resultado=%d", req.Val1, req.Val2, resultado)
    return AddTwoIntsResponse(resultado)

def server():
    rospy.init_node('AddTwoInts_Server')
    serviceServer = rospy.Service('AddTwoInts', AddTwoInts, addTwoIntsCallback)
    rospy.loginfo("Servidor Pronto Para Somar 2 Inteiros")
    rospy.spin()

if __name__ == '__main__':
    server()