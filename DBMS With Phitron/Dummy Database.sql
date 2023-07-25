/*SELECT * FROM employees;

SELECT MAX(salary)
FROM employees;

SELECT SUM(salary)
FROM employees;

SELECT job_id,MAX(salary)
FROM employees
GROUP BY job_id;*/

SELECT COUNT(*), SUM(salary)
FROM employees;