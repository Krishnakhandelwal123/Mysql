select e.name
from Employee as e
join Employee as p
ON e.id=p.managerID
group by p.managerID
having count(p.managerID)>=5
