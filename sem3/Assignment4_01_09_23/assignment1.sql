-- ##Assignment 1:
-- Create a database named institute. Under that create two tables, with name(s) MSc and PhD. 
-- Under each table store information of at least 4 students , containing id , name , batch_no, semester 
-- You decide which parameter(s) among these , needs to be integer or varchar.
-- Once its all done, display contents of table MSc followed by PhD.

-- commands:
create database institute;
use institute;
create table MSc( id integer, name varchar(50), batch_no integer, semester integer);
create table PhD( id integer, name varchar(50), batch_no integer, semester integer);
-- +---------------------+
-- | Tables_in_institute |
-- +---------------------+
-- | MSc                 |
-- | PhD                 |
-- +---------------------+
-- 2 rows in set (0.00 sec)

insert into MSc values (1,"Raj Gupta",12,3),(2,"Mahima Rao",12,3),(3,"Rudra Singh",12,3),(4,"Xena Markson", 12,3);
insert into PhD values (1,"Rajendra Gupta",8,0),(2,"Mohan Raj",7,0),(3,"Xio Mi",9,0),(4,"Bai Xiao", 6,0);

select * from MSc;
-- +------+--------------+----------+----------+
-- | id   | name         | batch_no | semester |
-- +------+--------------+----------+----------+
-- |    1 | Raj Gupta    |       12 |        3 |
-- |    2 | Mahima Rao   |       12 |        3 |
-- |    3 | Rudra Singh  |       12 |        3 |
-- |    4 | Xena Markson |       12 |        3 |
-- +------+--------------+----------+----------+
-- 4 rows in set (0.00 sec)

select * from PhD;
-- +------+----------------+----------+----------+
-- | id   | name           | batch_no | semester |
-- +------+----------------+----------+----------+
-- |    1 | Rajendra Gupta |        8 |        0 |
-- |    2 | Mohan Raj      |        7 |        0 |
-- |    3 | Xio Mi         |        9 |        0 |
-- |    4 | Bai Xiao       |        6 |        0 |
-- +------+----------------+----------+----------+
-- 4 rows in set (0.00 sec)


