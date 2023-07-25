/* JOIN USING  */

SELECT employees.employee_id,employees.first_name,departments.department_name
FROM employees JOIN departments USING (department_id);

/* JOIN ON */

SELECT employees.employee_id,employees.first_name,departments.department_name
FROM employees JOIN departments ON (employees.department_id = departments.department_id);

/*

Using alias:
SELECT e.employee_id,e.first_name,d.department_name
FROM employees e JOIN departments d USING (department_id);

*/