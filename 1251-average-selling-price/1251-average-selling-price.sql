select p.product_id,IFNULL(ROUND(SUM(units*price)/SUM(units),2),0) as average_price
from Prices as p
left join UnitsSold as u
on p.product_id=u.product_id and u.purchase_date BETWEEN start_date AND end_date
group by p.product_id