/* Write your PL/SQL query statement below */
select b.id as Id from Weather b join Weather a on b.recordDate = a.recordDate + 1
where b.temperature > a.temperature