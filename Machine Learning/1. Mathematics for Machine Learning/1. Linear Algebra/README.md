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

The cross product measures “cross interactions” between vectors, it talks about the difference between the vectors.

<img src="../1. Linear Algebra/images/cross_product.png">

Two vectors determine a plane, and the cross product points in a direction different from both:

<img src="../1. Linear Algebra/images/Right_hand_rule_cross_product.png">

<h3>Cosine & dot product</h3>

The dot product $(\vec{a} \cdot \vec{b})$ measures similarity because it only accumulates interactions in matching dimensions.

<img src="../1. Linear Algebra/images/dot_product.png">

The goal is to apply one vector to another. The equation above shows two ways to accomplish this:
- Rectangular perspective: combine x and y components
- Polar perspective: combine magnitudes and angles

<img src="../1. Linear Algebra/images/cross_product_grid.png">

This completed grid is the outer product, which can be separated into the:
- __Dot product__, the interactions between similar dimensions (x*x, y*y, z*z)
- __Cross product__, the interactions between different dimensions (x*y,y*z, z*x, etc.)

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


- Matrix times vector: Ax = combination of the columns of A.
- The solution to $Ax = b$ is $x = A^{−1}b$, when A is an invertible matrix


<h3>How matrices transform space</h3>



<h3>Types of matrix transformation</h3>



<h3>Composition or combination of matrix transformations</h3>




<h2>Matrix Inverses</h2>

<img src="../1. Linear Algebra/images/matrix_inverse.png">


<h3>Gaussian elimination</h3>



<h3>Going from Gaussian elimination to finding the inverse matrix</h3>




<h2>Special matrices and Coding up some matrix operations</h2>


<h3>Determinants and Inverses</h3>

<img src="../1. Linear Algebra/images/determinant.png">

The determinant of an n × n matrix A is 0 if and only if the matrix A is not invertible.



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

The Gram-Schmidt process is a simple algorithm for producing an orthogonal or orthonormal basis for any nonzero subspace of $\mathbb{R^n}$

<img src="../1. Linear Algebra/images/Gram_Schmidt_process.png">

An orthonormal basis is constructed easily from an orthogonal basis $\{v_1 , \cdots, v_p\}$ by simply normalizing (i.e. “scaling”) all the $v_k$

<img src="../1. Linear Algebra/images/orthonormal_example.png">

__QR factorization of matrices:__

If an $m \times n$ matrix A has linearly independent columns $x_1, \cdots, x_n$ then applying the Gram-Schmidt process (with normalization) to $x_1, \cdots, x_n$ amounts to factoring A as described in the next theorem:

<img src="../1. Linear Algebra/images/qr_factorization.png">

<img src="../1. Linear Algebra/images/qr_factorization_example.png">



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


- Note that an eigenvector cannot be 0, but an eigenvalue can be 0.

- Invertible Matrix Theorem Again: The n × n matrix A is invertible if and only if 0 is not an
eigenvalue of A.

<h3>Special eigen-cases</h3>

<h3>Calculating eigenvectors</h3>

__The Characteristic Equation:__

<img src="../1. Linear Algebra/images/characteristic_equation.png">

It can be shown that if A is an n × n matrix, then $det(A − λI)$ is a polynomial in the variable λ of degree n. We call this polynomial the _characteristic polynomial_ of A.

<img src="../1. Linear Algebra/images/eigenvalue_example.png">

Note that A is a triangular matrix. (A triangular matrix has the property that either all of its entries _below_ the main diagonal are 0 or all of its entries _above_ the main diagonal are 0.) It turned out that the eigenvalues of A were the entries on the main diagonal of A. _This is true for any triangular matrix, but is generally not true for matrices that are not triangular_.

_Theorem_: The eigenvalues of a triangular matrix are the entries on its main diagonal.

__Finding Eigenvectors:__

<img src="../1. Linear Algebra/images/eigenvectors_example1a.png">

<img src="../1. Linear Algebra/images/eigenvectors_example1b.png">


<h2>When changing to the eigenbasis is really useful</h2>


<h3>Changing to the eigenbasis: Diagonalization</h3>

__Similar Matrices:__

_Definition_: The n × n matrices A and B are said to be similar if there is an invertible n × n matrix P such that $A = P B P^{−1}$.

_Theorem_: If n × n matrices are similar, then they have the same characteristic polynomial and
hence the same eigenvalues (with the same multiplicities).

__Diagonalization:__

_Definition_: A square matrix A is said to be diagonalizable if it is similar to a diagonal matrix. In other words, a diagonal matrix A has the property that there exists an invertible matrix P and a
diagonal matrix D such that $A = P D P^{−1}$.

<img src="../1. Linear Algebra/images/Changing_to_the_eigenbasis.png">

<img src="../1. Linear Algebra/images/diagonalization_example.png">

<img src="../1. Linear Algebra/images/diagonalization_theorem.png">


<h2>Making the PageRank algorithm</h2>


<h3>Introduction to PageRank</h3>
