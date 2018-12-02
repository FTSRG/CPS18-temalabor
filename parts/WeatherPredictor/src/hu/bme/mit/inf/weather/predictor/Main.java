package hu.bme.mit.inf.weather.predictor;

import org.python.core.PyObject;
import org.python.core.PyString;
import org.python.util.PythonInterpreter;

public class Main {
	static PythonInterpreter interpreter = new PythonInterpreter();

	public static void main(String[] args) {
		interpreter.exec("import sys\nsys.path.append('pathToModules if they are not there by default')\nimport yourModule");
		// execute a function that takes a string and returns a string
		PyObject someFunc = interpreter.get("funcName");
		PyObject result = someFunc.__call__(new PyString("Test!"));
		String realResult = (String) result.__tojava__(String.class);
		
		System.out.println(realResult);
	}

}
