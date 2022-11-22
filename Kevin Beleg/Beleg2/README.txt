Author: Pietzsch, Kevin
Matr. Nr.: 51427
Studiengruppe: 21/41/61

------------------------------------------------------------------------------------------------------------------------------------
Sie können das Programm in /Beleg2/Beispiele direkt nutzen.




Funktion:

Hinzufügen von Daten: 1. Den Comboboxeintrag auswählen wo es hinzugefügt werden soll.
		      2. Daten eintragen.
		      3. Enter drücken.
		      
		      Bspw: - [Add CD:] ausgewählt
		            - Hans Peter,Das Schiff,Steve Gerich (nach Kommas kann man Leerzeichen setzen, muss aber beim Delete-Vorgang beachtet werden)
		            - Medium: Hans Peter,Das Schiff	 (wurde hinzugefügt)
		            - Person: Steve Gerich		 (wurde hinzugefügt)
			   


Suchen nach Daten:    1. Daten in Zeile eintragen
		      2. Enter drücken.
		      
Löschen von Daten:    1. Die Comboboxeintrag auswählen wo es gelöscht werden soll.
		      2. Daten eingeben. 
		      3. Enter drücken.
		      
		      Bsp. 1: "Hans Peter,Das Schiff" -> löscht den Inhalt der Zeile des jeweils ausgewählten Mediums und die dazugehöriger Partnerzeile der Person.
		      				      -> sollten gleiche Zeileninhalte existieren, muss die dazugehörige Zeile ausgewählt werden, ansonsten entsteht ein Datensyntaxfehler. Deswegen bei größeren Datenmengen die Suchfunktion nutzen! (siehe Bsp. 2)
		      
		      Bsp. 2: "Hans Peter,Das Schiff;1" -> löscht den Inhalt aus Zeile 1 der Datei und der Partnerdatei.
		      
	
	
		      
Werkzeuge:

	  - Der Beleg wurde mit Qt Creator(6.3.1) programmiert.
	  - OS: Ubuntu 22.04.1 LTS
	  - GCC 10.3.1 20210422 (Red Hat 10.3.1-1)) on "xcb"
	  - CMake 3.24.2
	  - Compilierung in  /Beleg2/Beleg2 : 1. cmake .
	  				      2. make
