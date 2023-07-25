-- Phitron Module 12 Assignment 2

CREATE TABLE Person(
	id INT,
    email VARCHAR(40)
);
INSERT INTO Person(id,email)
VALUES(1,'john@example.com'),
	  (2,'bob@example.com'),
      (3,'john@example.com');
      
SELECT *
FROM Person;

SELECT email,
COUNT(email)
FROM Person
GROUP BY email
HAVING COUNT(email)>1;

DELETE t1 FROM Person t1
INNER JOIN Person t2 
WHERE 
    t1.id < t2.id AND 
    t1.email = t2.email;
    
SELECT *
FROM Person;
