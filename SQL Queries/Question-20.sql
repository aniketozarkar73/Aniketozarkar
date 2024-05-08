-- 20.From the following table, write a SQL query to select a range of products whose price is in the range Rs.200 to Rs.600. Begin and end 
-- values are included. Return pro_id, pro_name, pro_price, and pro_com. 

use Module_5_database;

create table products
(
pro_id int primary key,
pro_name text not null,
pro_price float,
pro_com int
);

insert into products
(pro_id,pro_name,pro_price,pro_com)values
(101,"MotherBoard","3200.00","15"),
(102,"KeyBoard","450.00","16"),
(103,"Zipdrive","250.00","14"),
(104,"speaker","550.00","16"),
(105,"Monitor","5000.00","11"),
(106,"DVDdrive","900.00","12"),
(107,"CDdrive","800.00","12"),
(108,"Printer","2600.00","13"),
(109,"RefillCartridge","350.00","13"),
(110,"Mouse","250.00","12");

select * from item_mast

select pro_id,pro_name,pro_price,pro_com from products where pro_price between 200 and 600


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


-- 22. From the following table, write a SQL query to display the pro_name as 'Item Name' and pro_prices 'Price in Rs.' 

use Module_5_database

Select pro_name as "Item Name", pro_price as "Price in Rs." from items

-- 23. From the following table, write a SQL query to find the items whose prices are higher than or equal to $250. Order the result by product price in 
-- descending, then product name in ascending. Return pro_name and pro_price.  

  use Module_5_database
  
  select pro_name , pro_price from items where pro_price >=250 order by pro_price desc , pro_name;
  
  select * from items


-- 24. From the following table, write a SQL query to calculate average price of the items for each company. Return average price and company 
code. 

use Module_5_database

select pro_com,avg(pro_price)
from items
group by pro_com;
commit;







