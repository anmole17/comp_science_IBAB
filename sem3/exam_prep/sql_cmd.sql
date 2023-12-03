create database db;
use bird1
create table tablename(n1 varchar(40), n2 varchar(40), n3 integer, n4 varchar(40));
create table d1.t1(id integer, name varchar(40));
show tables;
insert into tablename values ("Vultur gryphus","Andes, South America", 330, "carrion"),("Aquila chrysaetos", "Northern Hemisphere", 200,"small mammals" );
select * from tablename;
select * from d1.t1;
#Compare prey of LandAnimals with Prey of SeaAnimals using id as key. If there is a common id , display that specific LandAnimals prey and Sea Animals prey details.
SELECT * FROM LandAnimals.prey INNER JOIN SeaAnimals.prey ON LandAnimals.prey.id = SeaAnimals.prey.id;
SELECT * FROM db1.t1 INNER JOIN db2.t3 ON db1.t1.name = db2.t3.name;
SELECT * FROM db1.t2 INNER JOIN db2.t4 ON db1.t2.size = db2.t4.size;
source one.sql;
tee 1.log;#-- stuff goes into log--
#--using @
select id into @id from t1 where name="a4";
select @id; 
#-- If @id1 is 1 and @id2 is 4, then @id1+@id2 will be 5.--
select * from d3.t1 intersect select * from d1.t1;
select * from d3.t1 union select * from d1.t1;
select * from d3.t1 except select * from d1.t1;
select id from t1 where name="name1" or name="name2";
#-- new--
create table t2 select * from t1; --creates a replica of it under another table t2.
select * from t1 order by id; --it should sort the table in ascending order.
alter table t1 change id age integer; --change the name of column from id to age, where datatype of age is integer.
