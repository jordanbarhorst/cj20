<?php include 'inc/header.inc' ?>

<section class='wrapper' id='blogPost'>
  <?php
    echo '<h1>'.$page->title.'</h1>
    <p class="date">'.$page->blogPostDate.'</p>
    <img src="'.$page->seo_image->url.'" class="featured-image" alt="'.$page->seo_title.'">';
    include 'inc/blogbuilder.inc';
  ?>
</section>

<?php include 'inc/footer.inc' ?>
</body>

</html>
