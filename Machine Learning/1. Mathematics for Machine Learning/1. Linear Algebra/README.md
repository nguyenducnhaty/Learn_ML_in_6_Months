<h1>Week 1: Introduction to Linear Algebra and to Mathematics for Machine Learning</h1>

In addition to the topics below, as a pre rec I also went through Khan Academies: [Linear algebra](https://www.khanacademy.org/math/linear-algebra) topics to do some refreshing.


<h2>The relationship between machine learning, linear algebra, and vectors and matrices</h2>

<h3>Motivations for linear algebra</h3>




<h2>Vectors</h2>

<h3>Operations with vectors</h3>

<img src="../1. Linear Algebra/images/vector_operations.png">



<h1>Week 2: Vectors are objects that move around space</h1>


<h2>Finding the size of a vector, its angle, and projection</h2>

<h3>Modulus & inner product</h3>

<img src="../1. Linear Algebra/images/cross_product.png">

<h3>Cosine & dot product</h3>

<img src="../1. Linear Algebra/images/scalar_product.png">

<img src="../1. Linear Algebra/images/dot_product.png">

<h3>Projection</h3>

<img src="../1. Linear Algebra/images/projection.png">


<h2>Changing the reference frame</h2>

<h3>Changing basis</h3>



<h3>Basis, vector space, and linear independence</h3>

<img src="../1. Linear Algebra/images/basis.png">

<img src="../1. Linear Algebra/images/linear_dependence_independence.png">

<h3>Applications of changing basis</h3>





<h1>Week 3: Matrices in Linear Algebra: Objects that operate on Vectors</h1>



<h2>Introduction to matrices</h2>


<h2>Matrices in linear algebra: operating on vectors</h2>



<h3>How matrices transform space</h3>



<h3>Types of matrix transformation</h3>



<h3>Composition or combination of matrix transformations</h3>




<h2>Matrix Inverses</h2>

<h3>Gaussian elimination</h3>



<h3>Going from Gaussian elimination to finding the inverse matrix</h3>




<h2>Special matrices and Coding up some matrix operations</h2>

<h3>Determinants and Inverses</h3>





<h1>Week 4: Matrices make linear mappings</h1>



<h2>Matrices as objects that map one vector onto another; all the types of matrices</h2>

<h3>Introduction: Einstein summation convention and the symmetry of the dot product</h3>




<h2>Matrices transform into the new basis vector set</h2>

<h3>Matrices changing basis</h3>



<h3>Doing a transformation in a changed basis</h3>




<h2>Making Multiple Mappings, deciding if these are reversible</h2>

<h3>Orthogonal matrices</h3>




<h2>Recognising mapping matrices and applying these to data</h2>

<h3>The Gram–Schmidt process</h3>





<h1>Week 5: Eigenvalues and Eigenvectors: Application to Data Problems</h1>



<h2>What are eigen-things?</h2>

<h3>What are eigenvalues and eigenvectors?</h3>

__Definition:__ A scalar λ is called an eigenvalue of the n × n matrix A if there is a nontrivial solution x of Ax = λx. Such an x is called an eigenvector corresponding to the eigenvalue λ.

For a linear transformation, an eigenvector is a vector which, after applying the transformation, stays in the same span, meaning the angle does not change for the vectors during the transformation.

Let A be an nn matrix. The eigenvalues of A are the roots of the characteristic polynomial

$$p(\lambda)=det(A − \lambda I)$$

For each eigenvalue λ, we find eigenvectors $v$ by solving the linear system:

$$(A − \lambda I)v = 0$$


<h2>Getting into the detail of eigenproblems</h2>

<h3>Special eigen-cases</h3>



<h3>Calculating eigenvectors</h3>





<h2>When changing to the eigenbasis is really useful</h2>

<h3>Changing to the eigenbasis</h3>

<img src="../1. Linear Algebra/images/Changing_to_the_eigenbasis.png">


<h2>Making the PageRank algorithm</h2>

<h3>Introduction to PageRank</h3>
