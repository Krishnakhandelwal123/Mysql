SELECT a.ID
FROM Weather as a
inner join Weather as b
where DATEDIFF(a.recordDate, b.recordDate) = 1 AND a.temperature > b.temperature;