#For more information see: http://openmbd.com/wiki/HANtune/MATLAB_Interface

#Change these to the name and location of your model
modelName = 'MyModel'
modelPath = 'C:\Users\Michiel Klifman\Desktop'

#Add folders to MATLAB path
from java.lang import System
scriptPath = System.getProperty("user.dir") + "\scripts\examples\MATLAB_Interface"
engine.eval("addpath('" + scriptPath + "')")
engine.eval("addpath('" + modelPath + "')")

#Create a daqlist from signals in the model
result = engine.feval(2, 'createDaqList', modelName, 'signals')
daqItemNames = result[0]
daqList = result[1]
daqSize = len(daqList)

#Create a signal for each item in the daq list
signals = []
removeAllSignals()
for name in daqItemNames:
	signal = createSignal(name)
	signals.append(signal)
updateLayout()
print 'DAQ list created with ' + str(daqSize) + ' items'

#Start the simulation
engine.eval("set_param('" + modelName +"','SimulationCommand','start');")
print 'Simulation started...'

#Read data from the model in Simulink and add it to the signals in HANtune
while (True):
	data = engine.feval('getDaqListData', modelName, daqList, daqSize)
	if not data:
		break

	i = 0
	for value in data:
		signals[i].setValueAndTime(value, 0)
		i += 1

print 'Simulation completed!'