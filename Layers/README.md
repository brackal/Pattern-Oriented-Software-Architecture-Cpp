# Layers
## How to build console application
To build an executable file, run the relevant script: StartCMakeOnWindows.bat on Windows, or StartCMakeOnLinux.sh on Linux. The executable file can then be used to run a console application.

## Application description
todo


## Class view

![LayersPattern_ClassDiagramm](uml/LayersPattern_ClassDiagramm.PNG "LayersPattern_ClassDiagramm")

## Package view
User input via the console is handled by the table controller. For this reason, the client receives the table controller from the table view. Once the user has entered their vote into the console, the table controller handles this event and updates the data in the model. The model then notifies both views of the data changes. The views then display their output in the console.

![LayersPattern_PackageDiagramm](uml/LayersPattern_PackageDiagramm.PNG "LayersPattern_PackageDiagramm")
