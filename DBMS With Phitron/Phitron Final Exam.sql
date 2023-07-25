-- CREATE DATABASE FinalExam;

-- CREATE TABLE User (
--     Username VARCHAR(20) NOT NULL UNIQUE,
--     Email VARCHAR(50) NOT NULL UNIQUE,
--     First_Name VARCHAR(30) NOT NULL,
--     Last_Name VARCHAR(30) NOT NULL,
--     Phone_No VARCHAR(11) NOT NULL,
--     Address VARCHAR(100) NOT NULL,
--     HSC_Result DECIMAL(5, 2),
--     Date_Of_Birth DATE NOT NULL,
--     Age INT,
--     Password VARCHAR(20) NOT NULL
-- );

use hr;

-- SELECT last_name
-- FROM employees
-- WHERE last_name LIKE 'k%' OR last_name LIKE '%k';



-- SELECT e.employee_id, e.first_name, e.last_name, e.salary, e.manager_id
-- FROM employees e
-- JOIN employees m ON e.manager_id = m.employee_id
-- WHERE e.salary > m.salary;

-- SELECT first_name,last_name,department_id
-- FROM employees;

SELECT e.first_name,
       e.last_name,
       d.department_name
FROM employees e,
     departments d
WHERE e.department_id = d.department_id;
