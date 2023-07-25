SELECT first_name
FROM employees
WHERE job_id = (
	SELECT job_id
	FROM employees
    WHERE employee_id = 107
) AND salary>
(
	SELECT salary
    FROM employees
    WHERE employee_id = 109
);




/*
SELECT first_name, salary
FROM employees
WHERE job_id = (
	SELECT job_id
    FROM employees
    WHERE employee_id = 107
);
*/