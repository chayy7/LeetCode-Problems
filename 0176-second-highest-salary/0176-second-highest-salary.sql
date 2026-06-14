
-- SELECT DISTINCT SALARY AS SECONDHIGHESTSALARY
-- FROM EMPLOYEE
-- ORDER BY SALARY DESC
-- LIMIT 1,1



select max(salary) as secondhighestsalary from employee
where salary< (select max(salary) from employee);

