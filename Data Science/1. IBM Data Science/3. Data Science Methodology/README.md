<img src="../3. Data Science Methodology/images/methodology.png">

<h1>Week 1: From Problem to Approach and From Requirements to Collection</h1>



<h2>From Problem to Approach</h2>

<h3>Business Understanding</h3>

Data science methodology begins with spending the time to seek clarification, to attain what can be referred to as a business understanding. Having this understanding is placed at the beginning of the methodology because getting clarity around the problem to be solved, allows you to determine which data will be used to answer the core question. Having a clearly defined question is vital because it ultimately directs the analytic approach that will be needed to address the question.

Establishing a clearly defined question starts with understanding the GOAL of the person who is asking the question. For example, if a business owner asks: "How can we reduce the costs of performing an activity?" We need to understand, is the goal to improve the efficiency of the activity? Or is it to increase the businesses profitability? Once the goal is clarified, the next piece of the puzzle is to figure out the objectives that are in support of the goal. By breaking down the objectives, structured discussions can take place where priorities can be identified in a way that can lead to organizing and planning on how to tackle the problem. Depending on the problem, different stakeholders will need to be engaged in the discussion to help determine requirements and clarify questions.

<h3>Analytic Approach</h3>

Selecting the right analytic approach depends on the question being asked. The approach involves seeking clarification from the person who is asking the question, so as to be able to pick the most appropriate path or approach. Once the problem to be addressed is defined, the appropriate analytic approach for the problem is selected in the context of the business requirements. This is the second stage of the data science methodology. Once a strong understanding of the question is established, the analytic approach can be selected. This means identifying what type of patterns will be needed to address the question most effectively.

<img src="../3. Data Science Methodology/images/analytics_approach.png">

If the question is to determine probabilities of an action, then a _predictive model_ might be used. If the question is to show relationships, a _descriptive approach_ maybe be required. This would be one that would look at clusters of similar activities based on events and preferences. _Statistical analysis_ applies to problems that require counts. For example if the question requires a yes/ no answer, then a classification approach to predicting a response would be suitable.

Machine Learning is a field of study that gives computers the ability to learn without being explicitly programmed. Machine Learning can be used to identify relationships and trends in data that might otherwise not be accessible or identified. In the case where the question is to learn about human behavior, then an appropriate response would be to use Clustering Association approaches.


<h2>From Requirements to Collection</h2>

<h3>Data Requirements</h3>

Think of data science methodology as cooking with data. Each step is critical in making the meal. So, if the problem that needs to be resolved is the recipe, so to speak, and data is an ingredient, then the data scientist needs to identify: which ingredients are required, how to source or to collect them, how to understand or work with them, and how to prepare the data to meet the desired outcome. Building on the understanding of the problem at hand, and then using the analytical approach selected, the Data Scientist is ready to get started.

<h3>Data Collection</h3>

After the initial data collection is performed, an assessment by the data scientist takes place to determine whether or not they have what they need. As is the case when shopping for ingredients to make a meal, some ingredients might be out of season and more difficult to obtain or cost more than initially thought. In this phase the data requirements are revised and decisions are made as to whether or not the collection requires more or less data. Once the data ingredients are collected, then in the data collection stage, the data scientist will have a good understanding of what they will be working with. Techniques such as descriptive statistics and visualization can be applied to the data set, to assess the content, quality, and initial insights about the data. Gaps in data will be identified and plans to either fill or make substitutions will have to be made.



<h1>Week 2: From Understanding to Preparation and From Modeling to Evaluation</h1>



<h2>From Understanding to Preparation</h2>

<h3>Data Understanding</h3>

Essentially, the data understanding section of the data science methodology answers the question: Is the data that you collected representative of the problem to be solved?

In order to understand the data you can run _descriptive statistics_ against the data columns that would become variables in the model. First, these include statistics on each variable, such as mean, median, minimum, maximum, and standard deviation.

Second, you can use _pairwise correlations_ to see how closely certain variables were related, and which ones, if any, were very highly correlated, meaning that they would be essentially redundant, thus making only one relevant for modeling.

Third, you can use _histograms_ to understand how values or a variables is distributed, and which sorts of data preparation may be needed to make the variable more useful in a model. For example, for a categorical variable that has too many distinct values to be informative in a model, the histogram would help decide how to consolidate those values. The univariate statistics, and histograms are also used to assess data quality. From the information provided, certain values can be re-coded or perhaps even dropped if necessary, such as when a certain variable has many missing values. The question then becomes, does "missing" mean anything? Sometimes a missing value might mean "no", or "0" (zero), or at other times it simply means "we don't know". Or, if a variable contains invalid or misleading values, such as a numeric variable called "age" that contains 0 to 100 and also 999, where that "triple-9" actually means "missing", but would be treated as a valid value unless we corrected it.

<h3>Data Preparation - Concepts</h3>

In a sense, data preparation is similar to washing freshly picked vegetables in so far as unwanted elements, such as dirt or imperfections, are removed. Together with data collection and data understanding, data preparation is the most time-consuming phase of a data science project, typically taking seventy percent and even up to even ninety percent of the overall project time. Automating some of the data collection and preparation processes in the database, can reduce this time to as little as 50 percent.

Transforming data in the data preparation phase is the process of getting the data into a state where it may be easier to work with. Specifically, the data preparation stage of the methodology answers the question: What are the ways in which data is prepared? To work effectively with the data, it must be prepared in a way that addresses missing or invalid values and removes duplicates, toward ensuring that everything is properly formatted.

Feature engineering is also part of data preparation. It is the process of using domain knowledge of the data to create features that make the machine learning algorithms work. A feature is a characteristic that might help when solving a problem. Features within the data are important to predictive models and will influence the results you want to achieve. Feature engineering is critical when machine learning tools are being applied to analyze the data.


<h2>From Modeling to Evaluation</h2>

<h3>Modeling - Concepts</h3>

Modelling is the stage in the data science methodology where the data scientist has the chance to sample the sauce and determine if it's bang on or in need of more seasoning! This portion of the methodology is geared toward answering two key questions: First, what is the purpose of data modeling, and second, what are some characteristics of this process?

Data Modelling focuses on developing models that are either __descriptive__ or __predictive__. An example of a descriptive model might examine things like: if a person did this, then they're likely to prefer that. A predictive model tries to yield yes/no, or stop/go type outcomes. These models are based on the analytic approach that was taken, either statistically driven or machine learning driven. The data scientist will use a training set for predictive modelling. A training set is a set of historical data in which the outcomes are already known. The training set acts like a gauge to determine if the model needs to be calibrated. In this stage, the data scientist will play around with different algorithms to ensure that the variables in play are actually required.

In John Rollins' descriptive Data Science Methodology, the framework is geared to do 3 things: First, understand the question at hand. Second, select an analytic approach or method to solve the problem, and third, obtain, understand, prepare, and model the data. The end goal is to move the data scientist to a point where a data model can be built to answer the question. In this stage of the methodology, model evaluation, deployment, and feedback loops ensure that the answer is near and relevant.

<h3>Evaluation</h3>

A model evaluation goes hand-in-hand with model building as such, the modeling and evaluation stages are done iteratively. Model evaluation is performed during model development and before the model is deployed. Evaluation allows the quality of the model to be assessed but it's also an opportunity to see if it meets the initial request. Evaluation answers the question: Does the model used really answer the initial question or does it need to be adjusted?

Model evaluation can have two main phases. The first is the diagnostic measures phase, which is used to ensure the model is working as intended. If the model is a predictive model, a decision tree can be used to evaluate if the answer the model can output, is aligned to the initial design. It can be used to see where there are areas that require adjustments. If the model is a descriptive model, one in which relationships are being assessed, then a testing set with known outcomes can be applied, and the model can be refined as needed.

The second phase of evaluation that may be used is statistical significance testing. This type of evaluation can be applied to the model to ensure that the data is being properly handled and interpreted within the model. This is designed to avoid unnecessary second guessing when the answer is revealed.



<h1>Week 3: From Deployment to Feedback</h1>


<h2>From Deployment to Feedback</h2>

<h3>Deployment</h3>

While a data science model will provide an answer, the key to making the answer relevant and useful to address the initial question involves getting the stakeholders familiar with the tool produced. In a business scenario, stakeholders have different specialties that will help make this happen, such as the solution owner, marketing, application developers, and IT administration. Once the model is evaluated and the data scientist is confident it will work, it is deployed and put to the ultimate test.

In preparation for solution deployment, the next step is to assimilate the knowledge for the business group who would be designing and managing the intervention program to reduce readmission risk.

<h3>Feedback</h3>

Once in play, feedback from the users will help to refine the model and assess it for performance and impact. The value of the model will be dependent on successfully incorporating feedback and making adjustments for as long as the solution is required.

Throughout the Data Science Methodology, each step sets the stage for the next. Making the methodology cyclical, ensures refinement at each stage in the game. The feedback process is rooted in the notion that, the more you know, the more that you'll want to know.

<h3>Course Summary</h3>

<img src="../3. Data Science Methodology/images/problem_to_approach.png">

<img src="../3. Data Science Methodology/images/working_with_data.png">

<img src="../3. Data Science Methodology/images/deriving_answer.png">

<img src="../3. Data Science Methodology/images/methodology.png">
