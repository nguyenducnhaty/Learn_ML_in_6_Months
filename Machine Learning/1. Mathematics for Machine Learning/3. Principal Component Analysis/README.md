<h1>Week 1: Statistics of Datasets</h1>



<h2>Mean values</h2>


<h3>Mean of a dataset</h3>

<img src="../3. Principal Component Analysis/images/mean.png">


<h2>Variances and covariances</h2>


<h3>Variance of one-dimensional datasets</h3>

<img src="../3. Principal Component Analysis/images/variance_1d.png">

<h3>Symmetric, positive definite matrices</h3>

A $n \times n$ symmetric real matrix $M$ is said to be __positive definite__ if $x^{\top} Mx > 0$ for all non-zero $x$ in $\mathbb{R}^{n}$

<img src="../3. Principal Component Analysis/images/positive_definite.png">

A $n \times n$ symmetric real matrix $M$ is said to be __positive semi-definite__ or __non-negative definite__ if $x^{\top} Mx > 0$ for all $x$ in $\mathbb{R}^{n}$

<img src="../3. Principal Component Analysis/images/positive_semi_definite.png">

<h3>Variance of higher-dimensional datasets</h3>

Covariance of a 3x3 matrix is given below:

<img src="../3. Principal Component Analysis/images/covariance.png">

Covariance of X and Y is defined below:

<img src="../3. Principal Component Analysis/images/covariance_xy.png">

Variances of higher-dimensional data sets is defined below:

<img src="../3. Principal Component Analysis/images/variance_multi_d.png">


<h2>Linear transformation of datasets</h2>


<h3>Effect on the mean and (co)variance</h3>

<img src="../3. Principal Component Analysis/images/linear_transformation.png">

<img src="../3. Principal Component Analysis/images/translations.png">



<h1>Week 2: Inner Products</h1>



<h2>Dot product</h2>


The dot product is one specific example of an inner product. Not all inner products are the dot product, however.

<img src="../3. Principal Component Analysis/images/dot_product.png">

<img src="../3. Principal Component Analysis/images/dot_product_angle.png">


<h2>Inner products</h2>


<h3>Inner product: definition</h3>

<img src="../3. Principal Component Analysis/images/inner_product.png">

<img src="../3. Principal Component Analysis/images/inner_product_example.png">

<h3>Inner product: length and distances of vectors</h3>

<img src="../3. Principal Component Analysis/images/inner_product_lengths.png">

I watched [Example of a Matrix of an Inner Product](https://www.youtube.com/watch?v=Om3BEqhOK88) to understand how to calculate the lengths and to calculate the distance:

$$d(X,Y)^2 = \langle X - Y, X - Y \rangle = \langle X, X \rangle + \langle Y, Y \rangle - 2 \langle X, Y \rangle$$

<h3>Basis vectors</h3>

<img src="../3. Principal Component Analysis/images/basis.png">

This sounded awfully like a eigenvector, and for the question, "what is the relationship between eigenvector and basis vector?" in Quora, the following answer provided the best explanation:

"_Think of a vector space with some number of dimensions. You can choose any set that may be linearly independent vectors as your basis. The basis is arbitrary, as long as you have enough vectors in it and they’re linearly independent._

_Eigenvectors, on the other hand, are properties of a linear transformation on that vector space. If a linear transformation affects some non-zero vector only by scalar multiplication, that vector is an eigenvector of that transformation. Different linear transformations can have different eigenvectors._

_Since you can choose any arbitrary basis for a space, but the eigenvectors are properties of a linear transformation, it follows that the eigenvectors are independent of the basis, and the basis is independent of the eigenvectors of any transformation._

_Do eigenvectors always form a basis? asks a related but more specific question. The answer is, no, the linearly independent eigenvectors of a linear transformation on a vector space may be, but are not necessarily, a basis for the space._"

<h3>Inner product: angles and orthogonality</h3>

<img src="../3. Principal Component Analysis/images/inner_product_angles.png">

<h3>Inner products of functions and random variables</h3>

Inner products and norms on function spaces play an absolutely essential role in modern analysis and its applications, particularly Fourier analysis, boundary value problems,
ordinary and partial differential equations, and numerical analysis.

Let $[a, b] ⊂ \mathbb{R}$ be a bounded closed interval. Consider the vector space $C^0 [a, b]$ consisting of all continuous scalar functions $f(x)$ defined for $a ≤ x ≤ b$. The integral of the product of two continuous functions:

<img src="../3. Principal Component Analysis/images/inner_product_function.png">

defines an inner product on the vector space $C^0 [a, b]$.  The associated norm is:

<img src="../3. Principal Component Analysis/images/function_norm.png">

and is known as the $L^2$ _norm_ of the function $f$ over the interval $[a, b]$. The $L^2$ inner product and norm of functions can be viewed as the infinite-dimensional function space versions of the dot product and Euclidean norm of vectors in $\mathbb{R^n}$.



<h1>Week 3: Orthogonal Projections</h1>








<h1>Week 4: Principal Component Analysis</h1>
