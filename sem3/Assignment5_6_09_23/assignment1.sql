--  assignment 1:
-- 1. Create 3 databases plantA, plantB and plantC. 
-- In each DB, have 2 tables namely indian and African.
-- Insert info of atleast 4 plants into each table of each DB.
-- Choose your own properties for each plant group.
-- Interchange the information of Indian table under plantA,with that of African table in plantB. 
-- Similarly interchange the information of African table under plant C with that Indian table of plant B.
-- Print all the table values. Try to achieve this by running each statement at mysql prompt.
-- Then, try it as an sql script.

-- Commands:

drop database plantA;
drop database plantB;
drop database plantC;

create database plantA;
create database plantB;
create database plantC;

use plantA;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
select * from indian;
select * from african;

use plantB;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
select * from indian;
select * from african;

use plantC;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
select * from indian;
select * from african;

use plantA;
insert into indian values ("Saussurea costus","Indian","Costus, Kuth,Kashmirja"),("Cycas beddomei","Indian","Beddomes' cycad"),("Nepenthes khasiana","Indian","Pitcher plant, monkey cups, tiewrakot"),("Renanthera imschootiana","Indian", "Red vanda");
insert into african values ("Hypostes vertillaris","African","Ekere"),("Acanthus montanus","African", "Urunhishi"),("Asysasia calyciana","African", "Orole"),("Barleria opaca","African","Arenikosun");
select * from indian;
select * from african;

use plantB;
insert into indian values ("Renanthera imschootiana","Indian", "Red vanda"),("Vanda coerulea","Indian","Blue vanda"),("Paphiopedilum spp.","Indian","Ladies slipper orchids"),("Sternbergia fischeriana","Indian", "Snowdrops, Sternbergias");
insert into african values ("Barleria opaca","African","Arenikosun"),("Phaulopsis falcisepala","African","Apa-ogbe"),("Celosia laxa","African","Mannafaa"),("Celosia argenta","African","fara-layatu");
select * from indian;
select * from african;

use plantC;
insert into indian values ("Sternbergia fischeriana","Indian", "Snowdrops, Sternbergias"),("Ravoulfia serpentina","Indian","Sarpagandha, Snakeroot, Devil pepper"),("Sinopodophyll um hexandrum","Indian","Indian podophyllum,Papra,Papri"),("Alsophila andersonii","Indian", "Tree fern");
insert into african values ("Celosia argenta","African","fara-layatu"),("Mangifera indica","African","Mangoro"),("Monodora tenuifolia","African","Sinin"),("Andira inermis","African","Gwaska");
select * from indian;
select * from african;

-- Interchange the information of Indian table under plantA,with that of African table in plantB. 

create table plantB.t2 select * from plantA.indian;
create table plantA.t2 select * from plantB.african;
drop table plantB.african;
drop table plantA.indian;

RENAME TABLE plantA.t2 TO plantA.indian, plantB.t2 TO plantB.african;

select * from plantA.indian;
select * from plantB.african;


-- Similarly interchange the information of African table under plant C with that Indian table of plant B.

create table plantB.t2 select * from plantC.african;
create table plantC.t2 select * from plantB.indian;
drop table plantC.african;
drop table plantB.indian;

RENAME TABLE plantB.t2 TO plantB.indian, plantC.t2 TO plantC.african;

select * from plantB.indian;
select * from plantC.african;





