<h1>Week 1: Introduction to Big Data Integration and Processing</h1>



<h2>Why Big Data Integration and Processing?</h2>


<h3>Summary of Big Data Modeling and Management</h3>

A data model as a specification that precisely characterizes the structure of the data, the operations on the data, and the constraints that may apply on data.

Database management systems handle low level data management operations, help organization of the data using a data model, and provide an open programmable access to data.

Four Data Models:
1. _Relational data_: is structured like tables which are formally called relations. The relational data model has been implemented in traditional database systems. But they are being refreshly implemented in modern data systems over Hadoop and Spark and are getting deployed on cloud platforms.

2. _Semi-structured data_: includes documents like HTML pages, XML data and JSON data that are used by many Internet applications. This data can have one element nested or embedded within another data element and hence can often be modeled as a tree.

3. _Graph data_: is a network where nodes represent entities and edges represent relationships between pairs of such entities, for example social networks and email networks.

4. _Text data_: is much more unstructured because an entire data item like a new article can be just a text string.

_Streaming data_, or data with velocity, is a special class of data that continually come to the system at some data rate. Streaming data is special because a stream is technically an infinite data source. And therefore, we keep filling up memory and storage and will eventually go beyond the capacity of any system. Streaming data, therefore, needs a different kind of management system. For this reason, streaming data is processed in chunks(windows). Often only the necessary part of the data stream or the results of queries against the data stream is stored.

<img src="../3. Big Data Integration and Processing/images/dbms_bdms.png">

<h3>Why is Big Data Processing Different?</h3>

__Requirements for Big Data Systems:__

1. Support Big Data Operations
    - Split Volumes of data
    - Access data fast
    - Distribute computations to nodes

2. Handle Fault Tolerance
    - Replicate data partitions
    - Recover files when needed

3. Enable adding more racks (Scaling out) without losing performance

4. Optimized and extensible for many data types

5. Enable both streaming and batch processing
    - _Low latency_ processing of streaming data
    - _Accurate_ processing of all available data

<img src="../3. Big Data Integration and Processing/images/3Vs.png">


<h2>Querying Data Part 1</h2>


<h3>What is Data Retrieval? Part 1</h3>

Data retrieval refers to the way in which data desired by a user is specified and retrieved from a data store.

A query language is a language in which a retrieval request is specified. A query language is often called declarative, which means it lets you specify what you want to retrieve without having to tell the system how to retrieve. For example, SQL, structured query language, it is the most used query language for relational data. Now, in contrast to a query language, a database programming language like Oracle's PL/SQL or Postgres's PgSQL are high-level procedural programming languages that embed query operations.

The most basic structure of a sql query is given below:

<img src="../3. Big Data Integration and Processing/images/basic_sql.png">

This form of query can also be represented as a selection operation on the relation Beers with a condition on the manf attribute, followed by a projection operation that outputs the name attribute from the result of the selection operation. This is given inside the black box in the image above.

Below are some more advanced sql queries:

<img src="../3. Big Data Integration and Processing/images/more_sql_examples.png">

The DISTINCT ensures that the result has no duplicates.

<h3>What is Data Retrieval? Part 2</h3>

If the table was large and had millions of entries, the table would possibly need to be split over many machines. Another way of saying that is that the table will be partitioned across a number of machines. Since a query simply performs a selection and projection here, it can be evaluated in parallel.

One standard way of partitioning the data is called a range partitioning by the primary key. This simply means that the rows of the table are put in groups depending on the alphabetical order of the name value. Below you can see how to query partition tables:

<img src="../3. Big Data Integration and Processing/images/queries_in_large.png">

When we use like, we're telling the query engine that we only have partial information about the string we want to match. This partly specified string is called a _string pattern_. There is this part of the string we know and a part that we do not know and for the part we don't know, we use the `%`. If we wanted to find, say, Am somewhere in the middle of the string, we would write the pattern as `%Am%`.

<h3>Querying Two Relations</h3>

<img src="../3. Big Data Integration and Processing/images/query_two_relations.png">

<h3>Subqueries</h3>

Let's look into a more complex query, "Find the bars that serve Miller for the same or less price than what TGAB charges for Bud". We can break it into two queries:
1. Find the price TGAB charges for Bud
2. Find the bars that serve Miller at that price

Now this is a classic situation where the result from the first part of the query should be fed as a parameter to the second query. Now this situation is called a subquery.

```sql
select bar
from sells
where beer = 'Miller' and
    price <= (select price
              from sells
              where bar = 'TGAB'
              and beer = 'bud'
              );
```

The part after price is called the _inner query_ or the _subquery_. Notice that the inner query is independent of the outer query. In other words, even if we did not have the outer query, we can still evaluate the inner query. We say in this case that the subquery is uncorrelated.

Let's look at another example:

<img src="../3. Big Data Integration and Processing/images/subquery_example.png">

Example of a correlated subquery:

<img src="../3. Big Data Integration and Processing/images/correlated_subquery.png">

__Aggregate queries:__

<img src="../3. Big Data Integration and Processing/images/aggregate_queries.png">

__Groupby queries:__

<img src="../3. Big Data Integration and Processing/images/groupby_queries.png">



<h1>Week 2: Retrieving Big Data (Part 2)</h1>







<h1>Week 3: Big Data Integration</h1>










<h1>Week 4: Processing Big Data</h1>









<h1>Week 5: Big Data Analytics using Spark</h1>









<h1>Week 6: Learn By Doing: Putting MongoDB and Spark to Work</h1>
