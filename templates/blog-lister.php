<?php include 'inc/header.inc' ?>

<section class='wrapper' id='blogList'>
  <?php
    $results = $pages->find("template=blog-post, limit=10, sort=-blogPostDate");
	$pagination = $results->renderPager();
	echo "<ul>";
	foreach($results as $result) {
	    echo '<h2><a href="'.$result->url.'" alt="'.$result->title.'">'.$result->title.'</a></h2>
	    <p class="date">'.$result->blogPostDate.'</p>
	    <img src="'.$result->seo_image->url.'" class="featured-image" alt="'.$result->seo_title.'">
	    <p class="blurb">'.$result->blurb.'</p>
	    <p class="date"><a href="'.$result->url.'" alt="'.$result->title.'">Read More</a></p><hr class="gray" style="margin-top: 50px;">';
	}
	echo "</ul>";
	echo $pagination;
  ?>
</section>

<?php include 'inc/footer.inc' ?>
</body>

</html>
