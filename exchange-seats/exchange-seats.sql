# Write your MySQL query statement below

select 
 case 
   when seat.id % 2 <> 0 and seat.id= (select count(*) from seat) then seat.id
   when seat.id%2=0 then seat.id-1
   else
    seat.id+1
end as id,
student
from seat
order by id;