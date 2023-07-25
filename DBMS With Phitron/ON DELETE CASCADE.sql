CREATE DATABASE ON_DELETE_CASCADE;
USE ON_DELETE_CASCADE;

CREATE TABLE Student(
	sno INT PRIMARY KEY,
    sname VARCHAR(20),
    age INT
);

INSERT INTO Student(sno,sname,age)
VALUES(1,'Towsif',21),
	  (2,'Tonni',20),
      (3,'Chippu',18);
      
SELECT *
FROM Student;

CREATE TABLE Course(
	cno INT PRIMARY KEY,
    cname VARCHAR(20)
);

INSERT INTO Course(cno, cname)
VALUES(101,'C'),
	  (102,'C++'),
      (103,'DBMS');

SELECT *
FROM Course;

CREATE TABLE Enroll(
	sno INT,
    cno INT,
    jdate DATE,
    PRIMARY KEY(sno,cno),
    FOREIGN KEY(sno)
		REFERENCES Student(sno)
        ON DELETE CASCADE,
	FOREIGN KEY(cno)
		REFERENCES Course(cno)
        ON DELETE CASCADE
);

INSERT INTO Enroll(sno,cno,jdate)
VALUES(1,101,'2012-10-13'),
	  (2,102,'2012-10-12'),
      (3,103,'2012-10-11');
      
SELECT *
FROM Enroll;

SET SQL_SAFE_UPDATES = 0;
DELETE FROM Student
WHERE sname = "Tonni";

SELECT *
FROM Student;

SELECT *
FROM Enroll;