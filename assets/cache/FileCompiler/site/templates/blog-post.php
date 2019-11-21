<?php include(\ProcessWire\wire('files')->compile('inc/header.inc',array('includes'=>true,'namespace'=>true,'modules'=>true,'skipIfNamespace'=>true)))?>

<section class='wrapper' id='blogPost'>
  <?php
    echo '<h1>'.$page->title.'</h1>
    <p class="date">'.$page->blogPostDate.'</p>
    <img src="'.$page->seo_image->url.'" class="featured-image" alt="'.$page->seo_title.'">';
 include(\ProcessWire\wire('files')->compile('inc/blogbuilder.inc',array('includes'=>true,'namespace'=>true,'modules'=>true,'skipIfNamespace'=>true)));
  ?>
</section>

<?php include(\ProcessWire\wire('files')->compile('inc/footer.inc',array('includes'=>true,'namespace'=>true,'modules'=>true,'skipIfNamespace'=>true)))?>
</body>

</html>
