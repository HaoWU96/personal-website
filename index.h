<!doctype html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width,initial-scale=1">
  <title>Hao Wu (吴昊) - Homepage</title>
  <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;600;700&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="styles.css">
</head>
<body>
  <header class="site-header">
    <div class="container header-inner">
      <div class="brand">
        <img class="avatar" src="assets/avatar.jpg" alt="Hao Wu portrait">
        <div>
          <h1>Hao Wu (吴昊)</h1>
          <p class="subtitle">Postdoctoral Researcher, University of Zürich</p>
        </div>
      </div>
      <nav class="nav">
        <a href="#research">Research</a>
        <a href="#publications">Publications</a>
        <a href="#talks">Talks</a>
        <a href="#contact">Contact</a>
      </nav>
    </div>
  </header>

  <main>
    <section class="hero">
      <div class="container">
        <h2>Welcome!</h2>
        <p>I am a postdoctoral researcher at the <strong>University of Zürich</strong>, working with Prof. Corinna Ulcigrai. My research focuses on <em>ergodic theory</em>, <em>dynamical systems</em>, and their connections with number theory and harmonic analysis.</p>
        <p class="links">
          <a class="btn" href="#publications">Recent Papers</a>
          <a class="muted" href="#contact">Get in Touch</a>
        </p>
      </div>
    </section>

    <section id="research" class="section container">
      <h3>Research Interests</h3>
      <ul>
        <li>Stochastic properties of dynamical systems of zero entropy (e.g. higher-dimensional irrational rotations, interval exchange transformations)</li>
        <li>Applications of homogeneous dynamics and harmonic analysis to number theory, especially Diophantine approximations</li>
        <li>Ergodic theory of infinite measure dynamical systems such as skew products and interval exchange transformations</li>
      </ul>
    </section>

    <section id="publications" class="section container">
      <h3>Selected Publications</h3>
      <ol>
        <li>F. Abdedou, H. Wu. <em>Examples of Ergodic Cylindrical Cascades over 2-dimensional torus</em>, <strong>Ergodic Theory and Dynamical Systems</strong>, 2025. <a href="http://dx.doi.org/10.1017/etds.2024.130">DOI</a></li>
        <li>P. Berk, F. Trujillo, H. Wu. <em>Ergodic properties of infinite extension of symmetric interval exchange transformations</em>, <strong>J. Éc. polytech. Math.</strong>, Vol. 12 (2025), pp. 853–880. <a href="https://jep.centre-mersenne.org/articles/10.5802/jep.302/">DOI</a></li>
        <li>H. Wu. <em>Absolute bounds for ergodic deviations of linear form sequences relative to intervals</em>, 2021. <a href="https://arxiv.org/abs/2111.14981">arXiv:2111.14981</a></li>
        <li>H. Wu. <em>Ergodic deviations of toral translations relative to triangles</em>, 2021. <a href="https://arxiv.org/abs/2112.00003">arXiv:2112.00003</a></li>
        <li>H. Wu. <em>Ergodic deviations of degenerate multidimensional actions – symmetric convex bodies</em>, 2022. <a href="https://arxiv.org/abs/2112.06131">arXiv:2112.06131</a></li>
      </ol>
    </section>

    <section id="talks" class="section container">
      <h3>Recent & Invited Talks</h3>
      <ul>
        <li>Workshop on Dynamical Systems and Related Topics, University of Maryland, USA, Apr 2025</li>
        <li>Seminar of Analysis and Dynamics, Université Côte d’Azur, Nice, Feb 2025</li>
        <li>Seminar in Topology, Geometry and Dynamics, NUS Singapore, Jan 2025</li>
        <li>Ergodic Theory Seminar, Nanjing University, Jan 2025</li>
        <li>Dynamical Systems Seminar, Shanghai Jiao Tong University, Aug 2024</li>
      </ul>
    </section>

    <section id="contact" class="section container">
      <h3>Contact</h3>
      <p>University of Zürich, Institute of Mathematics<br>
      Winterthurerstrasse 190, Zürich, Switzerland</p>
      <p>Email: <a href="mailto:haowu.nankai@gmail.com">haowu.nankai@gmail.com</a></p>
      <p>ORCID: <a href="https://orcid.org/0009-0007-3635-4387">0009-0007-3635-4387</a><br>
         arXiv: <a href="https://arxiv.org/search/?searchtype=author&query=Hao+Wu">Hao Wu</a></p>
    </section>
  </main>

  <footer class="site-footer">
    <div class="container">
      <p>© <span id="year"></span> Hao Wu — Hosted on GitHub Pages</p>
    </div>
  </footer>

  <script>
    document.getElementById('year').textContent = new Date().getFullYear();
  </script>
</body>
</html>
