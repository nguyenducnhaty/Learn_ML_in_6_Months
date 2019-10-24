-- Drop table INSTRUCTOR in case it already exist
drop table INSTRUCTOR;

-- Create table INSTRUCTOR
create table INSTRUCTOR (
	ins_id int not null,
	lastname varchar(30) not null,
	firstname varchar(30) not null,
	city varchar(30),
	country char(2),
	primary key (ins_id)
);


-- INSERT Values into the INSTRUCTOR Table
insert into INSTRUCTOR
	(ins_id, lastname, firstname, city, country)
values
	('1', 'Ahuja', 'Rav', 'Toronto', 'CA'),
	('2', 'Chong', 'Raul', 'Toronto', 'CA'),
	('3', 'Vasudevan', 'Hima', 'Chicago', 'US')
;


-- Select all rows from the INSTRUCTOR table.
select * from INSTRUCTOR;


-- Select the firstname, lastname and country where the city is Toronto
select firstname, lastname, country from INSTRUCTOR
	where city = 'Toronto'
;

-- Update the row for Rav Ahuja and change his city to Markham.
update INSTRUCTOR
set city = 'Markham'
where firstname = 'Rav'
;


-- Delete the row for Raul Chong from the table.
delete from INSTRUCTOR
where firstname = 'Raul'
;

-- Retrieve all rows in the INSTRUCTOR table
select * from INSTRUCTOR;
