<h1>Week 1 - Introduction to Databases and Basic SQL</h1>



<h2>Introduction to Databases</h2>

__SQL__ is a language used for relational databases to query or get data out of a database. SQL is short for its original name __Structured Query Language__. SQL is a language used for a database to query data.

__Data__ is a collection of facts in the form of words, numbers or even pictures. Data is one of the most critical assets of any business. Data is important, so it needs to be secure and it needs to be stored and accessed quickly. The answer is a database.

A __Database__ is a repository of data. It is a program that stores data. A database also provides the functionality for adding, modifying and querying that data. There are different kinds of databases of different requirements.

The data can be stored in various forms. When data is stored in tabular form, the data is organized in tables like in a spreadsheet, it is a __relational database__. A table is a collection of related things like a list of employees or a list of book authors. In a relational database, you can form relationships between tables.

A set of software tools for the data in the database is called a __database management system__ or __DBMS__ for short. For relational databases, it's called a _relational database management system_ or _RDBMS_. RDBMS is a set of software tools that controls the data such as access, organization and storage. Examples of relational database management systems are, my SQL, Oracle Database, DB2 Warehouse on Cloud and DB2 Express C.

There are five simple SQL commands:
- __CREATE__ a table,
- __INSERT__ data to populate the table,
- __SELECT__ data from the table,
- __UPDATE__ data in the table,
- __DELETE__ data from the table.


<h2>Basic SQL</h2>


- _Data definition language_ or DDL statements are used to define, change, or drop data.
- _Data manipulation language_ or DML statements are used to read and modify data.
- The _primary key_ of a relational table uniquely identifies each tuple or row in a table.


<h3>CREATE Table</h3>

The CREATE statement is one of the data definition language statements. Data definition language statements or DDL statements are used to create database objects.

The general syntax to create a table:

```sql
create table TABLENAME (
    COLUMN1 datatype,
    COLUMN2 datatype,
    COLUMN3 datatype,
    ...
);
```

To create a table called TEST with two columns - ID of type integer, and Name of type varchar, we could create it using the following SQL statement:

```sql
create table TEST (
    ID integer,
    Name varchar(30)
);
```

Additional keywords in a create table statement:

```sql
create table COUNTRY (
    ID int NOT NULL,
    CCODE char(2),
    NAME varchar(30)
    PRIMARY KEY (ID)
)
```

In the above example:
    - "NOT NULL" -  it cannot contain a NULL or an empty value.
    - PRIMARY KEY - the database does not allow Primary Keys to have NULL values and is a unique identifier in a table

To drop a table:

```sql
drop table COUNTRY;
```

<h3>SELECT Table</h3>

After creating a table and inserting data into the table, we want to see the data. To see the data, we use the SELECT statement. The SELECT statement is a data manipulation language statement and is called a query, and the output we get from executing this query is called a result set or a result table.

The general syntax of SELECT statements is:

```sql
select COLUMN1, COLUMN2, ... from TABLE1;
```

To retrieve a list of all country names and their IDs from the COUNTRY table we would issue:

```sql
select ID, NAME from COUNTRY;
```

To retrieve all columns from the COUNTRY table we could use "*" instead of specifying individual column names:

```sql
select * from COUNTRY;
```

The WHERE clause can be added to your query to filter results or get specific rows of data. To retrieve data for all rows in the COUNTRY table where the ID is less than 5:

```sql
select * from COUNTRY WHERE ID < 5;
```

In case of character based columns the values of the predicates in the where clause need to be enclosed in single quotes. To retrieve the data for the country with country code "CA" we would issue:

```sql
select * from COUNTRY WHERE CCODE = 'CA';
```

<h3>COUNT, DISTINCT, LIMIT</h3>

__COUNT:__

COUNT() is a built in function that retrieves the number of rows matching the query criteria.

To get the number of rows in a table:

```sql
select COUNT(*) from tablename
```

For example to get rows in the MEDALS table where Country is Canada:

```sql
select COUNT(COUNTRY) from MEDALS
    where COUNTRY='CANADA'
```

__DISTINCT:__

DISTINCT is used to remove duplicate values from a result set.

To retrieve unique values in a column:

```sql
select DISTINCT columnname from tablename
```

For example to get the list of unique countries that recieved GOLD medals:

```sql
select DISTINCT COUNTRY from MEDALS
    where MEDALTYPE = 'GOLD'
```

__LIMIT:__

LIMIT is used for restricting the number of rows retrieved from the database.

To retrieve just the first 10 rows in a table:

```sql
select * from tablename LIMIT 10
```

For example to retrieve 5 rows in the MEDALS table for a particular year:

```sql
select * from MEDALS
    where YEAR = 2019 LIMIT 5
```

<h3>INSERT Statement</h3>

To insert data into a table, we use the INSERT statement. The INSERT statement is used to add new rows to a table. The INSERT statement is one of the data manipulation language statements.

The general syntax of INSERT statements is:

```sql
INSERT INTO tablename
    (Column1, Column2, ...)
VALUES
    (Value1, Value2, ...)
```

For example:

```sql
INSERT INTO AUTHOR
    (AUTHOR_ID, LASTNAME, FIRSTNAME, EMAIL)
VALUES
    ('A1', 'Mithrakumar', 'Mukesh', 'mukesh@mukeshmithrakumar.com')
```

<h3>UPDATE and DELETE Statements</h3>

__UPDATE Statement:__

The data in a table can be altered with the UPDATE statement. The UPDATE statement is one of the data manipulation language or DML statements.

The general syntax of UPDATE statements is:

```sql
UPDATE tablename
SET ColumnName = Value
WHERE condition
```

For example:

```sql
UPDATE AUTHOR
SET LASTNAME = 'Alia'
    FIRSTNAME = 'Bhatt'
WHERE AUTHOR_ID = 'A2'
```

Note that if you do not specify the WHERE clause, all the rows in the table will be updated.

__DELETE Statement:__

The rows are removed with the DELETE statement. The DELETE statement is one of the data manipulation language statements used to read and modify data.

The general syntax of UPDATE statements is:

```sql
DELETE FROM tablename
WHERE condition
```

For example:

```sql
DELETE from AUTHOR
WHERE AUTHOR_ID IN ('A2', 'A3')
```

Note that if you do not specify the WHERE clause, all the rows in the table will be removed.


<h2>Relational Database Concepts</h2>


<h3>Information and Data Models</h3>

The figure below illustrates the relationship between an information model and a data model.

<img src="../5. Databases and SQL for Data Science/images/Information_and_Data_Models.png">

An _information model_ is an abstract formal representation of entities that includes their properties, relationships, and the operations that can be performed on them. The entities being modeled can be from the real world, such as a library.

Information models and data models are different and serve different purposes. An information model is at the conceptual level and defines relationships between objects. _Data models_ are defined in a more concrete level, are specific and include details. A data model is the blueprint of any database system

There are several types of information models. The most familiar is the _hierarchical_, typically used to show organization charts. The hierarchical model organizes its data using a tree structure.

The _relational model_ is the most used data model for databases, because this model allows for data independence. Data is stored in simple data structure tables. This provides logical data independence, physical data independence, and physical storage independence.

An _entity-relationship_ data model or ER data model, is an alternative to a relational data model. An entity-relationship model proposes thinking of a database as a collection of entities, rather than being used as a model on its own. The ER model is used as a tool to design relational databases. In the ER model, entities are objects that exist independently of any other entities in the database. The building blocks of an ER diagram are entities and attributes. Entities have attributes, which are the data elements that characterize the entity. Attributes tell us more about the entity. A book is an example of an entity, the book title, the edition of the book, the year the book was written etc are its attributes. The entity book becomes a table in the database, and the attributes become the columns in the table.

<img src="../5. Databases and SQL for Data Science/images/book_table.png">

<h3>Types of Relationships</h3>

The building blocks of a relationship are:

<img src="../5. Databases and SQL for Data Science/images/entity_bb.png">

<img src="../5. Databases and SQL for Data Science/images/entity_relationships.png">

<img src="../5. Databases and SQL for Data Science/images/one_to_one_relationship.png">

<img src="../5. Databases and SQL for Data Science/images/one_to_many_relationship.png">

<img src="../5. Databases and SQL for Data Science/images/many_to_many_relationship.png">

<h3>Mapping Entities to Tables</h3>

<img src="../5. Databases and SQL for Data Science/images/erd_to_table.png">

<img src="../5. Databases and SQL for Data Science/images/mapping_erd_to_table.png">

<h3>Relational Model Concepts</h3>

The relational model was first proposed in 1970, and is based on a mathematical model and mathematical terms. The building blocks of the _relational model_ are _relation_ and _sets_. The relational model of data is based on the concept of relation. A relation is a mathematical concept based on the idea of sets. A set is unordered collection of distinct elements. It is a collection of items of the same type. It would have no order and no duplicates. A relational database is a set of relations.

A relation is also the mathematical term for a table. A table is a combination of rows and columns. A relation is made up of two parts, _relational schema_ and _relational instance_. A relational schema specifies the name of a relation and the attributes. For example for an entity Author:

<img src="../5. Databases and SQL for Data Science/images/author_entity.png">

Author is the name of the relation. Author_ ID is an attribute which can hold the data type char, which is a character string of a fixed length. Likewise, lastname, firstname, email and city have the data type varchar, which is a character string of a variable length. The last attribute country, also has a data type of char. This constitutes the _relational schema_.

A _relational instance_ is a table made up of the attributes or columns and the tuples or rows. The columns are the _attributes_ or _fields_. The rows are _tuples_. _Degree_ refers to the number of attributes or columns in a relation. _Cardinality_ refers to the number of tuples or rows.

<img src="../5. Databases and SQL for Data Science/images/relation_instance.png">

In this example, the degree is six because there are six columns, and the cardinality is five because there are five tuples or rows.

<h3>Additional Information</h3>

__Create Schema:__

A SQL schema is identified by a schema name, and includes a authorization identifier to indicate the user or account who owns the schema. Schema elements include tables, constraints, views, domains and other constructs that describe the schema.

A schema is created using the CREATE SCHEMA statement. The data types used can be: numeric, character-string, bit-string, Boolean, DATE, timestamp, etc. For example,

```sql
CREATE SCHEMA LIBRARY AUTHORIZATION 'Mukesh'
```

__CREATE TABLE Statement:__

The CREATE TABLE statement includes these clauses:
- DEFAULT
- CHECK

Use the DEFAULT clause in the CREATE TABLE statement to specify the default value for the database server to insert into a column when no explicit value for the column is specified.

Use the CHECK clause to designate conditions that must be met before data can be assigned to a column during an INSERT or UPDATE statement.

During an insert or update, if the check constraint of a row evaluates to false, the database server returns an error. The database server does not return an error if a row evaluates to NULL for a check constraint. In some cases, you might want to use both a check constraint and a NOT NULL constraint.

__SELECT Statement:__

The basic structure of the SELECT statement is formed from three clauses: SELECT, FROM and WHERE.
- `<attribute list>` is a list of attribute names whose values are to be retrieved by the query
- `<table list>` is a list of the relation names required to process the query
- `<condition>` is a conditional(Boolean) expression that identifies the tuples to be retrieved by the query

In situations where you might want to use multiple IF-THEN-ELSE statements, you can often use a single SELECT statement instead. The SELECT statement allows a CLIST to select actions from a list of possible actions. An action consists of one or more statements or commands. The SELECT statement has the following syntax, ending with the END statement. You can use the SELECT statement with or without the initial test expression.

```sql
SELECT [test expression]
WHEN [expression1]
...
(action)
...
WHEN [expression2]
WHEN [expression3]
...
[OTHERWISE]
...
(action)
...
END
```



<h1>Week 2 - Advanced SQL</h1>











<h1>Week 3 - Accessing Databases using Python</h1>









<h1>Week 4: Course Assignment</h1>
