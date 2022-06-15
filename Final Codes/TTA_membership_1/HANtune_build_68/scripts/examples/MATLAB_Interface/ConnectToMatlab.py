#For more information see: http://openmbd.com/wiki/HANtune/MATLAB_Interface

#Change this to your location of the MATLAB engine
enginePath = "C:\Program Files\MATLAB\R2017b\extern\engines\java\jar\engine.jar"

#Add matlab engine to the classpath
from datahandling import CurrentConfig
CurrentConfig.getInstance().addSoftwareLibrary(enginePath)

#Import matlab engine
from com.mathworks.engine import MatlabEngine

#Initialize matlab engine
engines = MatlabEngine.findMatlab()
engine = MatlabEngine.connectMatlab(engines[0])

#Add engine as a global variable to all interpreters
from nl.han.hantune.scripting import ScriptingManager
ScriptingManager.getInstance().setGlobal("engine", engine)

#Redirect matlab output to HANtune console
from java.lang import System
from nl.han.hantune.scripting import Console
System.setOut(Console.getGUI().getOut())
System.setErr(Console.getGUI().getErr())

print 'Connected to MATLAB'
