# Write your MySQL query statement below
SELECT NAME AS CUSTOMERS FROM CUSTOMERS
WHERE CUSTOMERS.ID NOT IN (select customerId from orders);