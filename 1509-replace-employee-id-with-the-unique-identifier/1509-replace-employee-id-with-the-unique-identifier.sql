/* Write your PL/SQL query statement below */
SELECT empUNI.unique_id, emp.name FROM Employees emp
LEFT JOIN EmployeeUNI empUNI
ON emp.id = empUNI.id;