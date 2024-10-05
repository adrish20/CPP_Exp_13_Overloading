<h1>Aim</h1>
<p>To study and implement C++ constructor overloading</p>
<hr>
<h1>Software required</h1>
<p>VScode</p>
<hr>
<h1>Thoery</h1>
<p>Constructor overloading in C++ refers to the ability to define multiple constructors with different parameter lists within the same class. Each overloaded constructor is used to initialize objects in different ways, depending on the number and types of arguments provided when an object is created. This allows for flexible object initialization.</p>
<hr>
<h1>Algorithms</h1>
<h2>Function overloading</h2>
<ol>
        <li>Start.</li>
        <li>Define a class <strong>Calculate</strong>.
            <ul>
                <li>Define a method <strong>sum(int a, int b)</strong>:
                    <ul>
                        <li>Take two integer parameters <strong>a</strong> and <strong>b</strong>.</li>
                        <li>Return <strong>a + b</strong>.</li>
                    </ul>
                </li>
                <li>Define another method <strong>sum(int a, int b, int c)</strong>:
                    <ul>
                        <li>Take three integer parameters <strong>a</strong>, <strong>b</strong>, and <strong>c</strong>.</li>
                        <li>Return <strong>a + b + c</strong>.</li>
                    </ul>
                </li>
                <li>Define another method <strong>sum(int a, float b)</strong>:
                    <ul>
                        <li>Take one integer parameter <strong>a</strong> and one float parameter <strong>b</strong>.</li>
                        <li>Return <strong>a + b</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function.</li>
        <li>Inside the <strong>main()</strong> function:
            <ul>
                <li>Create an object <strong>c1</strong> of class <strong>Calculate</strong>.</li>
                <li>Call <strong>sum()</strong> with two integers and print the result.</li>
                <li>Call <strong>sum()</strong> with three integers and print the result.</li>
                <li>Call <strong>sum()</strong> with an integer and a float, and print the result.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<h2>Operator overloading</h2>
<ol>
        <li>Start.</li>
        <li>Define a class <strong>Complex</strong>.
            <ul>
                <li>Declare private integer variables: <strong>real</strong> and <strong>imag</strong>.</li>
                <li>Define a constructor <strong>Complex(int r = 0, int i = 0)</strong>:
                    <ul>
                        <li>Initialize <strong>real</strong> to <strong>r</strong> and <strong>imag</strong> to <strong>i</strong>, with default values of 0.</li>
                    </ul>
                </li>
                <li>Define an overloaded operator function <strong>operator-</strong>:
                    <ul>
                        <li>Take a constant reference to another <strong>Complex</strong> object <strong>obj</strong>.</li>
                        <li>Create a new <strong>Complex</strong> object <strong>res</strong>.</li>
                        <li>Calculate the real part: <strong>res.real = real - obj.real</strong>.</li>
                        <li>Calculate the imaginary part: <strong>res.imag = imag - obj.imag</strong>.</li>
                        <li>Return the <strong>res</strong> object.</li>
                    </ul>
                </li>
                <li>Define a method <strong>print()</strong>:
                    <ul>
                        <li>Print the complex number in the format: <strong>real + i*imag</strong>.</li>
                    </ul>
                </li>
            </ul>
        </li>
        <li>Create the <strong>main()</strong> function.</li>
        <li>Inside the <strong>main()</strong> function:
            <ul>
                <li>Create two <strong>Complex</strong> objects <strong>c1</strong> (initialized to <em>10 + 5i</em>) and <strong>c2</strong> (initialized to <em>2 + 4i</em>).</li>
                <li>Create another <strong>Complex</strong> object <strong>c3</strong> by subtracting <strong>c2</strong> from <strong>c1</strong> using the overloaded <strong>-</strong> operator.</li>
                <li>Call the <strong>print()</strong> method on <strong>c3</strong> to display the result of the subtraction.</li>
            </ul>
        </li>
        <li>End.</li>
    </ol>
<hr>
<h1>Conclusion</h1>
<p>In conlusion, through this experiment we have learnt about constructor overloading and implemented it in C++ program</p>
