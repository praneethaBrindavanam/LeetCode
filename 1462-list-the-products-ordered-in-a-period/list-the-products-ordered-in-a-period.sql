# Write your MySQL query statement below
select product_name, sum(unit) as unit from Products as p
join Orders as o on p.product_id=o.product_id 
where (order_date between '2020-02-01' And '2020-02-29')
 group by p.product_id Having sum(unit)>=100;