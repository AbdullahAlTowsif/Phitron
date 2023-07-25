use update_delete_table;
DROP TABLE Student;

CREATE TABLE Student(
	Roll INT,
    Name VARCHAR(30),
    ContactNo CHAR(11),
    Email VARCHAR(30)
);

INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(102, "Karim", "01645821694", "karim@gamil.com");

INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(201, "Karim", "01987456662", "kari@gamil.com");

INSERT INTO Student(Roll, Name, ContactNo, Email)
VALUES(109, "Rahim", "01541001212", "rh@gamil.com");

SELECT * FROM Student;

SET SQL_SAFE_UPDATES = 0;
DELETE FROM Student
WHERE Roll=201;
SET SQL_SAFE_UPDATES = 1;

SET SQL_SAFE_UPDATES = 0;
UPDATE Student
SET Name = "MrRahim", ContactNo= "01234567894"
WHERE Roll=109;
SET SQL_SAFE_UPDATES = 1;

SELECT Roll, Name, Email
FROM Student
WHERE Roll = 109



