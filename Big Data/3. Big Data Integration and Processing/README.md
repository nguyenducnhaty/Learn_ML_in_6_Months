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



<h3>What is Data Retrieval? Part 2</h3>



<h3>Querying Two Relations</h3>



<h3>Subqueries</h3>




<h1>Week 2: Retrieving Big Data (Part 2)</h1>







<h1>Week 3: Big Data Integration</h1>










<h1>Week 4: Processing Big Data</h1>









<h1>Week 5: Big Data Analytics using Spark</h1>









<h1>Week 6: Learn By Doing: Putting MongoDB and Spark to Work</h1>
