-- 1. Create Table Name : Student and Exam 

create database Module_5_database


use Module_5_database;

create table Student
(
roll_no int primary key,
name text not null,
branch varchar(50)
);

alter table Student change id roll_no int
alter table Student change c_name branch text

insert into Student values
("1","Jay","Computer Science"),
("2","Suhani","Electronic and Comm"),
("3","Kriti","Electronic and Comm");

select * from Student

create table Exam
(
rollno_fk int,
FOREIGN KEY(rollno_fk)REFERENCES Student(roll_no),

S_code varchar(40),
Marks varchar(40),
P_code varchar(40)
);

insert into Exam values
(1,"CS11","50","CS"),
(1,"CS12","60","CS"),
(2,"EC101","66","EC"),
(2,"EC102","70","EC"),
(3,"EC101","45","EC"),
(3,"EC102","50","EC");

select * from Exam
