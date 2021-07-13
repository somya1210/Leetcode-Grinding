CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      # Write your MySQL query statement below.
      Select distinct e1.salary  
      From Employee e1
      where N-1=(Select count(Distinct Salary) from Employee e2 
                where e2.salary>e1.salary)
      
  );
END