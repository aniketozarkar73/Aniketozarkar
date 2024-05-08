-- 21.From the following table, write a SQL query to calculate the average price for a manufacturer code of 16. Return avg.  

use Module_5_database;

create table items
(
pro_id int primary key,
pro_name text not null,
pro_price float,
pro_com int
);

insert into items
(pro_id,pro_name,pro_price,pro_com)values
(101,"MotherBoard","3200.00","15"),
(102,"KeyBoard","450.00","16"),
(103,"ZIPdrive","250.00","14"),
(104,"Speaker","550.00","16"),
(105,"Monitor","5000.00","11"),
(106,"DVDdrive","900.00","12"),
(107,"CDdrive","800.00","12"),
(108,"Printer","2600.00","13"),
(109,"Refillcartridge","350.00","13"),
(110,"Mouse","250.00","12");

select * from items 

select AVG(pro_price) from items where pro_com = 16;




 
 
 
 
 
 
 
 
