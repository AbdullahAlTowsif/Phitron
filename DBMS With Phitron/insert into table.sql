use insertIntoTable;

DROP TABLE Student;
CREATE TABLE Student(
	Roll INT NOT NULL UNIQUE PRIMARY KEY,
    Name VARCHAR(30) NOT NULL,
    ContactNo CHAR(11) UNIQUE,
    Email VARCHAR(30),
    
    CONSTRAINT email_unique_const UNIQUE(Email)
);
INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(101,"Towsif","01641413635","abd@gmail.com");
INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(102,"Sifat","01862323493","poot@gmail.com");
INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(102,"Montaha","01715047417","min@gmail.com");

SELECT * FROM Student;