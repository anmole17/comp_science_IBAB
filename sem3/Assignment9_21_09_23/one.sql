#thisss comment works  -- doesnt
drop database plantA;
drop database plantB;
drop database plantC;
create database plantA;
create database plantB;
create database plantC;
use plantA;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
use plantB;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
use plantC;
create table indian(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
create table african(scientific_name varchar(50),geo varchar(50), common_name varchar(50));
use plantA;
insert into indian values ("Saussurea costus","Indian","Costus, Kuth,Kashmirja"),("Cycas beddomei","Indian","Beddomes cycad"),("Nepenthes khasiana","Indian","Pitcher plant, monkey cups, tiewrakot"),("Renanthera imschootiana","Indian", "Red vanda");
insert into african values ("Hypostes vertillaris","African","Ekere"),("Acanthus montanus","African", "Urunhishi"),("Asysasia calyciana","African", "Orole"),("Barleria opaca","African","Arenikosun");
use plantB;
insert into indian values ("Renanthera imschootiana","Indian", "Red vanda"),("Vanda coerulea","Indian","Blue vanda"),("Paphiopedilum spp.","Indian","Ladies slipper orchids"),("Sternbergia fischeriana","Indian", "Snowdrops, Sternbergias");
insert into african values ("Barleria opaca","African","Arenikosun"),("Phaulopsis falcisepala","African","Apa-ogbe"),("Celosia laxa","African","Mannafaa"),("Celosia argenta","African","fara-layatu");
use plantC;
insert into indian values ("Sternbergia fischeriana","Indian", "Snowdrops, Sternbergias"),("Ravoulfia serpentina","Indian","Sarpagandha, Snakeroot, Devil pepper"),("Sinopodophyll um hexandrum","Indian","Indian podophyllum,Papra,Papri"),("Alsophila andersonii","Indian", "Tree fern");
insert into african values ("Celosia argenta","African","fara-layatu"),("Mangifera indica","African","Mangoro"),("Monodora tenuifolia","African","Sinin"),("Andira inermis","African","Gwaska");