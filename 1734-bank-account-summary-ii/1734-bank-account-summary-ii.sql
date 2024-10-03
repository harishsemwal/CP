# Write your MySQL query statement below
with tr as(
    select account, sum(amount) as balance from transactions 
    group by account having sum(amount)>10000
)
select name, balance from users u
join tr t on u.account=t.account;