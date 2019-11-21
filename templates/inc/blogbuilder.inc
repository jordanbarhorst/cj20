<?php

// Init BlogBuilder
foreach($page->BlogBuilder as $item) {
  if($item->type == 'blogPost') {
    echo '<section class="blogPost">'.$item->copy.'</section>';
  }
  elseif($item->type == 'fullWidthImage'){
    echo '<img class="blog-fw" src="'.$item->croppableImage->url.$item->croppableImage.'" alt="'.$page->seo_title.'">';
  }
  elseif($item->type == 'imgSidebySide'){
    echo '<div class="twoColBlog"><img src="'.$item->twoColBlogLeft->url.'" alt="'.$page->seo_title.'"><img src="'.$item->twoColBlogRight->url.'" alt="'.$page->seo_title.'"></div>';
  }
}

?>
