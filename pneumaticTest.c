#pragma config(Sensor, dgtl1,  doublePiston,   sensorDigitalOut)
#pragma config(Sensor, dgtl2,  singlePiston,   sensorDigitalOut)
#pragma config(Motor,  port2,           lift1,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           lift2,         tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while (1) {
		SensorValue[doublePiston] = !vexRT[Btn7D];
		SensorValue[singlePiston] = !vexRT[Btn7D];


		motor[lift1] = motor[lift2] = vexRT[Ch3];
}


}
