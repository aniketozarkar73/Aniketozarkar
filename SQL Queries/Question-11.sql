-- 11.  Create table given below: Salesperson and Customer
 
use Module_5_database;

Create table Salesperson
(
sno int primary key,
sname varchar(40),
city varchar(40),
comm varchar(40)
);

insert into Salesperson
(sno,sname,city,comm)values
("1001","Peel","London",".12"),
("1002","Serres","SanJose",".13"),
("1004","Motika","London",".11"),
("1007","Rafkin","Barcelona",".15"),
("1003","Axelrod","NewYork",".1");

select * from Salesperson

Create  table Customer
(
Cnm int primary key,
Cname varchar(40),
city varchar(40),
rating varchar(40),
Sno int,
foreign key(Sno)references Salesperson(SNO)
);

insert into Customer
(Cnm,Cname,city,rating,Sno)values
("201","Hoffman","London","100","1001"),
("202","Giovanne","Roe","200","1003"),
("203","Liu","SanJose","300","1002"),
("204","Grass","Barcelona","100","1002"),
("206","Clemens","London","300","1007"),
("207","Pereira","Roe","100","1004");

select * from Customer

-- 13. All orders for more than $1000

use Module_5_database;
select sname,city,comm from Salesperson

-- 14.Names and cities of all salespeople in London with commission above 0.12 

 use Module_5_database;
 select * from  Salesperson where city = 'London' and comm<0.12



-- 15. All salespeople either in Barcelona or in London
 
use Module_5_database;
select * FROM Salesperson WHERE city = 'Barcelona' OR city = 'London';


-- 16. All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).

select * from Salesperson where comm between 0.10 and 0.12 


-- 17. All customers excluding those with rating <= 100 unless they are located in Rome

select * from Customer where city not in ('Rome');

 











