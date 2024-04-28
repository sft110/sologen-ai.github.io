/* Basic Reset */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body, html {
    font-family: 'Arial', sans-serif;
    line-height: 1.6;
    font-size: 18px;
    color: #333;
    background-color: #f4f4f4;
}

header {
    background: #005f73;
    color: #ffffff;
    padding: 1rem 0;
    text-align: center;
}

header .logo img {
    height: 50px; /* Resize as needed */
    width: auto; /* Maintain aspect ratio */
}

nav ul {
    list-style: none;
}

nav ul li {
    display: inline;
    margin: 0 10px;
}

nav a {
    color: white;
    text-decoration: none;
}

section {
    padding: 20px;
    margin-top: 20px;
    background: white;
    border: 1px solid #ccc;
}

footer {
    text-align: center;
    padding: 10px 0;
    background: #333;
    color: white;
}

.hero {
    background-image: url('xheropg.webp');
    background-size: cover;
    background-position: center;
    color: white;
    text-align: center;
    padding: 100px 20px; /* Adjust padding as needed */
    height: 300px; /* Adjust height as needed */
}

form input, form textarea {
    width: 100%;
    padding: 8px;
    margin: 10px 0;
}

form button {
    background: #005f73;
    color: white;
    border: none;
    padding: 10px 20px;
    cursor: pointer;
}
