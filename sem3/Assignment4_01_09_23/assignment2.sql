-- ## Assignment :
-- 2. Create two databases namely bird1 and bird2.
-- Under bird1 have two tables namely predator and prey.
-- Under predator have a list of at least 3 birds.
-- Under prey have a list of at least 4 birds.
-- For each bird under both tables, have name , origin , wing span, food as properties.

-- Under bird2 have three tables namely small , medium , large.
-- Under each table, list 3 birds.
-- For each bird , under all three tables, have name, origin , size , life span as properties.
-- Commands:
create database bird1;
create database bird2;
use bird1;
create table predator(name varchar(40), origin varchar(40), wing_span_in_cm integer, food varchar(40));
create table prey(name varchar(40), origin varchar(40), wing_span_in_cm integer, food varchar(40));
show tables;
-- +-----------------+
-- | Tables_in_bird1 |
-- +-----------------+
-- | predator        |
-- | prey            |
-- +-----------------+
insert into predator values ("Vultur gryphus","Andes, South America", 330, "carrion"),("Aquila chrysaetos", "Northern Hemisphere", 200,"small mammals" ),("Harpia harpyja", "Neotropical Realm", 200,"tree dewlling mammals" );
insert into prey values ("Atrichornis rufescens","Australia", 10, "snails,insects"),("Avengeonis assemblo", "North America",15,"seeds" ),("Zenosis heleiona", "Tropical forests", 21,"necter" ),("Archeopilis flitori", "Tropical Forests", 7,"insects");
use bird2;
create table large(name varchar(40), origin varchar(40), size_cm integer, lifespan_yrs integer);
Query OK, 0 rows affected (0.38 sec)
create table medium(name varchar(40), origin varchar(40), size_cm integer, lifespan_yrs integer);
Query OK, 0 rows affected (0.44 sec)
create table small(name varchar(40), origin varchar(40), size_cm integer, lifespan_yrs integer);
Query OK, 0 rows affected (0.37 sec)
insert into small values ("Atricho rufus", "South Asia", 19, 1.2),("Apollo marques", "South America", 24, 2),("Sumara locica", "Quinong", 15, 1.2);
insert into medium values ("Ricoicho dous", "South-east Asia", 52, 3.2),("Apazia folaes", "Amazon rain forest", 64, 5.1),("Walusus beau", "Western ghats, Inida", 49, 6.2);
insert into large values ("Coicho usata", "East Asia", 73, 6.9),("Solan matias", "Amazon rain forest", 89, 9.1),("Amades indicana", "Western ghats, Inida", 126, 12.2);
select * from small;
-- +----------------+---------------+---------+--------------+
-- | name           | origin        | size_cm | lifespan_yrs |
-- +----------------+---------------+---------+--------------+
-- | Atricho rufus  | South Asia    |      19 |            1 |
-- | Apollo marques | South America |      24 |            2 |
-- | Sumara locica  | Quinong       |      15 |            1 |
-- +----------------+---------------+---------+--------------+
-- 3 rows in set (0.00 sec)
select * from medium;
-- +---------------+----------------------+---------+--------------+
-- | name          | origin               | size_cm | lifespan_yrs |
-- +---------------+----------------------+---------+--------------+
-- | Ricoicho dous | South-east Asia      |      52 |            3 |
-- | Apazia folaes | Amazon rain forest   |      64 |            5 |
-- | Walusus beau  | Western ghats, Inida |      49 |            6 |
-- +---------------+----------------------+---------+--------------+
-- 3 rows in set (0.00 sec)
select * from large;
-- +-----------------+----------------------+---------+--------------+
-- | name            | origin               | size_cm | lifespan_yrs |
-- +-----------------+----------------------+---------+--------------+
-- | Coicho usata    | East Asia            |      73 |            7 |
-- | Solan matias    | Amazon rain forest   |      89 |            9 |
-- | Amades indicana | Western ghats, Inida |     126 |           12 |
-- +-----------------+----------------------+---------+--------------+
-- 3 rows in set (0.00 sec)
use bird1;
select * from predator;
-- +-------------------+----------------------+-----------------+-----------------------+
-- | name              | origin               | wing_span_in_cm | food                  |
-- +-------------------+----------------------+-----------------+-----------------------+
-- | Vultur gryphus    | Andes, South America |             330 | carrion               |
-- | Aquila chrysaetos | Northern Hemisphere  |             200 | small mammals         |
-- | Harpia harpyja    | Neotropical Realm    |             200 | tree dewlling mammals |
-- +-------------------+----------------------+-----------------+-----------------------+
select * from prey;
-- +-----------------------+------------------+-----------------+----------------+
-- | name                  | origin           | wing_span_in_cm | food           |
-- +-----------------------+------------------+-----------------+----------------+
-- | Atrichornis rufescens | Australia        |              10 | snails,insects |
-- | Avengeonis assemblo   | North America    |              15 | seeds          |
-- | Zenosis heleiona      | Tropical forests |              21 | necter         |
-- | Archeopilis flitori   | Tropical Forests |               7 | insects        |
-- +-----------------------+------------------+-----------------+----------------+



