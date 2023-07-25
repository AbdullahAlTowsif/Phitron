-- Phitron Module 12 Assignment 2

SELECT MAX(salary) FROM employees;

SELECT * 
FROM employees 
WHERE employee_id IN 
(SELECT employee_id 
FROM employees  
WHERE salary = 
(SELECT MAX(salary) 
FROM employees 
WHERE salary < 
(SELECT MAX(salary) 
FROM employees)));