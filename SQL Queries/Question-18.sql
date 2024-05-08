-- 18. Write a SQL statement that displays all the information about all salespeople.alter

use Module_5_database;

create table Salespeople
(
salesman_id int primary key,
name text not null,
city varchar(50),
comm varchar(50)
);

insert into Salespeople
(salesman_id,name,city,comm)values
(5001,"JamesHoog","NewYork","0.15"),
(5002,"NailKnite","Paris","0.13"),
(5005,"PitAlex","London","0.11"),
(5006,"McLyon","Paris","0.14"),
(5007,"PaulAdam","Rome","0.13"),
(5003,"LausonHen","SanJose","0.12");

select * from Salespeople