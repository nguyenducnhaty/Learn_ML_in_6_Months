<h1>Week 1: What is calculus?</h1>

In addition to the topics below, as a pre rec I also went through Khan Academies:
- [Finding Taylor polynomial approximations of functions](https://www.khanacademy.org/math/ap-calculus-bc/bc-series-new/bc-10-11/v/maclaurin-and-taylor-series-intuition)
- [Finding Taylor or Maclaurin series for a function](https://www.khanacademy.org/math/ap-calculus-bc/bc-series-new/bc-10-14/v/function-as-a-geometric-series)

topics to do some refreshing.


<h2>Functions</h2>

Essentially, a function is a relationship between some inputs and an output. So, for example, if I had a function for modeling the distribution of temperature in this room, I might input the x, y, and z coordinates of a specific location I'm interested in as well as the time, t. And then the function would return me the temperature at that specific point in space at that moment in time.


<h2>Gradients and derivatives</h2>


<h3>Rise Over Run</h3>

Calculus is just a set of tools for describing the relationship between a function and the change in its variables.

<img src="../2. Multivariate Calculus/images/rise_over_run.png">

<h3>Definition of a derivative</h3>

<img src="../2. Multivariate Calculus/images/derivative_def.png">

<img src="../2. Multivariate Calculus/images/derivative_equation.png">

<img src="../2. Multivariate Calculus/images/sum_rule.png">

<img src="../2. Multivariate Calculus/images/power_rule.png">

<h3>Differentiation examples & special cases</h3>




<h2>Time saving rules</h2>


<h3>Product rule</h3>

<img src="../2. Multivariate Calculus/images/product_rule.png">

<img src="../2. Multivariate Calculus/images/quotient_rule.jpg">

<h3>Chain rule</h3>

<img src="../2. Multivariate Calculus/images/chain_rule.png">



<h1>Week 2: Multivariate calculus</h1>



<h2>Moving to multivariate</h2>


<h3>Variables, constants & context</h3>



<h3>Differentiate with respect to anything</h3>

<img src="../2. Multivariate Calculus/images/multivariate_partial_derivative.png">


<h2>Jacobians - vectors of derivatives</h2>


<h3>The Jacobian</h3>

In vector calculus, the __Jacobian matrix__ of a vector-valued function in several variables is the matrix of all its first-order partial derivatives. When this matrix is square, that is, when the function takes the same number of variables as input as the number of vector components of its output, both the matrix and its determinant are referred to as the __Jacobian__.

<img src="../2. Multivariate Calculus/images/jacobian.png">

<h3>Jacobian applied</h3>

<img src="../2. Multivariate Calculus/images/jacobian_coordinates.png">


<h2>The Hessian</h2>

In mathematics, the __Hessian matrix__ or __Hessian__ is a square matrix of second-order partial derivatives of a scalar-valued function, or scalar field. It describes the local curvature of a function of many variables.

<img src="../2. Multivariate Calculus/images/hessian.png">



<h1>Week 3: Multivariate chain rule and its applications</h1>



<h2>Chain rule Introduction</h2>


<h3>Multivariate chain rule</h3>

<img src="../2. Multivariate Calculus/images/multi_variate_chain_rule.png">

<img src="../2. Multivariate Calculus/images/jacobian_chain_rule.png">


<h2>Neural Networks</h2>


<h3>Simple neural networks</h3>

<img src="../2. Multivariate Calculus/images/simple_nn.png">

<img src="../2. Multivariate Calculus/images/slp.png">

<img src="../2. Multivariate Calculus/images/slp_matrix.png">

<img src="../2. Multivariate Calculus/images/slp_complete.png">

<img src="../2. Multivariate Calculus/images/mlp.png">

<img src="../2. Multivariate Calculus/images/cost_function.png">

<img src="../2. Multivariate Calculus/images/slp_chain_rule.png">

<img src="../2. Multivariate Calculus/images/mlp_chain_rule.png">



<h1>Week 4: Taylor series and linearization</h1>



<h2>Taylor series for approximations</h2>


<h3>Power series</h3>

Taylor series are also referred to as power series. And this is because they are composed of coefficients in front of increasing powers of x.

<h3>Power series derivation</h3>

__Maclaurin series:__

<img src="../2. Multivariate Calculus/images/maclaurin_series_derived.png">

Although, what we've written here certainly does count as a tailless series because we're specifically looking at the point x equals 0, we often refer to this case as a Maclaurin series.

<img src="../2. Multivariate Calculus/images/maclaurin_series.png">

<h3>Power series details</h3>

_Maclaurin series_ says that if you know everything about a function at the point x equals zero, then you can reconstruct everything about it everywhere. The __Taylor series__ simply acknowledges that there is nothing special about the point x equals zero. And so says that if you know everything about the function at any point, then you can reconstruct the function anywhere.

<img src="../2. Multivariate Calculus/images/Taylor_series1D.png">


<h2>Multivariate Taylor Series</h2>


<h3>Linearization</h3>

<img src="../2. Multivariate Calculus/images/Taylor_series_error.png">

<h3>Multivariate Taylor</h3>




<h1>Week 5: Introduction to optimization</h1>



<h2>Fitting as minimization problem</h2>


<h3>Newton-Raphson in one dimension</h3>



<h3>Gradient Descent</h3>




<h2>Lagrange multipliers</h2>


<h3>Constrained optimisation</h3>





<h1>Week 6: Regression</h1>



<h2>Introduction to linear regression</h2>


<h3>Simple linear regression</h3>



<h2>Non-linear regression</h2>


<h3>General non linear least squares</h3>



<h3>Doing least squares regression analysis in practice</h3>
