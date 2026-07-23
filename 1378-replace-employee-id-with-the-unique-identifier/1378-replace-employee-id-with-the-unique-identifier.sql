select a.name,b.unique_id
from Employees as a
left join EmployeeUNI as b
ON a.id=b.id