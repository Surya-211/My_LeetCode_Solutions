# Write your MySQL query statement below

select id-1 as id, student 
from Seat 
where id mod 2=0

union

select id+1 as id,student
from Seat 
where id mod 2=1 and id!=(select max(id) from Seat)

union 

select id,student 
from Seat
where id mod 2=1 and id=(select max(id) from Seat)

order by id ASC;