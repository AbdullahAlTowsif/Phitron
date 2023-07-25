-- Phitron Module 12 Assignment 2

CREATE TABLE Temp(
	id INT,
    recordDate DATE,
    temperature INT
);
INSERT INTO Temp(id,recordDate,temperature)
VALUES(1,'2015-1-1',10),
	  (2,'2015-1-2',25),
      (3,'2015-1-3',20),
      (4,'2015-1-4',30);
      
SELECT *
FROM Temp;

SELECT Temp.id AS 'Id'
FROM Temp
JOIN Temp t ON DATEDIFF(Temp.recordDate, t.recordDate) = 1
AND Temp.temperature > t.temperature
