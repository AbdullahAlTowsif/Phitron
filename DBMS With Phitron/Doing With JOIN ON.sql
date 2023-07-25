SELECT e.first_name,m.first_name
FROM employees e JOIN employees m
ON (e.manager_id = m.employee_id);