select query_name, round(avg(rating/position),2) as quality,
round(SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END)/count(rating)*100.00,2) as poor_query_percentage
from Queries 
group by query_name;