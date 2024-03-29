CREATE DATABASE db1;
CREATE DATABASE db2;
CREATE DATABASE db3;
USE db1;
CREATE TABLE t1 (name VARCHAR(255),vehicle_num VARCHAR(255),size VARCHAR(255));
INSERT INTO t1 VALUES ('Truck', '1234567890', 'Large'),('Bus', '9876543210', 'Large'),('Tractor', '0987654321', 'Large'),('Crane', '2109876543', 'Large'),('Excavator', '3210987654', 'Large');
CREATE TABLE t2 (name VARCHAR(255),vehicle_num VARCHAR(255),size VARCHAR(255));
INSERT INTO t2 VALUES ('Car', '4321098765', 'Medium'),('SUV', '5432109876', 'Medium'),('Van', '6543210987', 'Medium'),('Pickup truck', '7654321098', 'Medium'),('Minivan', '8765432109', 'Medium');
USE db2;
CREATE TABLE t3 (name VARCHAR(255),size VARCHAR(255),capacity INT);
INSERT INTO t3 VALUES ('Boeing 747', 'Large', 524),('Airbus A380', 'Large', 575),('Antonov An-225', 'Large', 840),('C-5 Galaxy', 'Large', 581),('Mi-26', 'Large', 80); 
CREATE TABLE t4 (name VARCHAR(255),size VARCHAR(255),capacity INT);
INSERT INTO t4 VALUES ('Cessna 172', 'Small', 4),('Piper PA-28 Cherokee', 'Small', 4),('Cirrus SR22', 'Small', 4),('Diamond DA20', 'Small', 2),('SportCruiser', 'Small', 2);
SELECT * FROM db1.t1 INNER JOIN db2.t3 ON db1.t1.name = db2.t3.name;
SELECT * FROM db1.t2 INNER JOIN db2.t4 ON db1.t2.size = db2.t4.size;
