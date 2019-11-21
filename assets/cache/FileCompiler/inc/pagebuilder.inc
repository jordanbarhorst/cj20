<?php

// Init PageBuilder
foreach($page->pageBuilder as $item) {
  // Home Page Spread
  if($item->type == 'home_imageSpread'){
    echo "<section class='wrapper block' id='home_imageSpread'>";
     foreach($item->home_imageSpread as $repeater) {
       foreach($repeater->croppableImage as $image){
         echo "<img class='home_featuredImage' alt='Cincinnati Wedding Photography' src='" . $image->url . "' />";
      }
     }
     echo "</section>";

  // Strike Headline
  } else if($item->type == 'strikeHeadline'){
    echo "<section class='wrapper block'>" .
            "<div class='strike'>".
              "<h2 class='darlingModern'>" . $item->strikeHeadline . "</h2>".
            "</div>" .
          "</section>";
  // Blurb
  } else if($item->type == 'blurb'){
    $blurbLength = strlen($item->blurb);
    if($blurbLength <= 200) {
      echo '<section class="wrapper" id="home-blurb">
              <p class="blurb narrow">' . $item->blurb . '</p>
            </section>';
    } else {
      echo '<section class="wrapper" id="home-blurb">
              <p class="blurb">' . $item->blurb . '</p>
            </section>';
    }
  // Home Featured Links
  } else if($item->type == 'homeLinks') {
      echo '<section class="wrapper block" id="homeLinks-row">';
      foreach($item->homeLinks as $unit) {
        echo '<div class="homeLinks-unit">
                <div class="image-holder">
                  <a href="'.$unit->homeLinks_link->url.'"><img src="' . $unit->homeLinks_img->url . $unit->homeLinks_img . '" alt="Cincinnati Wedding Photography" /></a>
                </div>
                <p class="homeLinks-top">' . $unit->homeLinks_topText . '</p>
                <p class="homeLinks-bottom"><a href="'.$unit->homeLinks_link->url.'">' . $unit->homeLinks_bottomText . '</a></p>
              </div>';
      }
      echo '</section>';

  // Headline Lockup
  } else if($item->type == 'headlineLockUp') {
    echo '<section class="wrapper thinTop headlineLockUp">
            <p>' . $item->headlineLockUp_top . '</p>
            <h3>' . $item->headlineLockUp_bottom . '</h3>
          </section>';

  // As Featured In Logos
  } else if($item->type == 'asFeatured') {
    echo '<section class="wrapper" id="asFeaturedLogos">';
    foreach($item->asFeaturedRow as $row) {
      foreach($row->croppableImage as $image) {
        echo '<img src="' . $image->url . '" alt="Cincinnati Wedding Photography">';
      }
    }
    echo '</section>';

  // Testimonial Slider
  } else if($item->type == 'testimonialSlider'){
    $i = 0;
    echo '<section class="wrapper block testimonialSlider">';
    foreach($item->testimonial as $slide) {
      echo '<div class="slide" id="slide' . $i . '">
              <div class="testimonial_imageHolder">
                <img src="' . $slide->testimonial_photo->url . '" alt="Cincinnati Wedding Photography" />
              </div>
              <div class="testimonial_copy">
                <h4>' . $slide->testimonial_couple . '</h4>
                <p> ' . $slide->testimonial_blurb . '</p>
              </div>
            </div>';

      if(i<=2){
        $i++;
      } else {
        $i=0;
      }
    }
    echo '<div class="sliderControls">
            <a class="sliderPrev">' . $prev . '</a>
            <a class="sliderNext">' . $next . '</a>
          </div>
        </section>';
    // Experience Slider
  } else if($item->type == 'experience'){
      $i = 0;
      echo '<section class="wrapper block experienceSlider">';
      foreach($item->experience as $slide) {
        echo '<div class="slide" id="slide' . $i . '">
                <div class="testimonial_imageHolder">
                  <img src="' . $slide->testimonial_photo->url . '" alt="Cincinnati Wedding Photography" />
                </div>
                <div class="testimonial_copy">
                  <h4>' . $slide->testimonial_couple . '</h4>
                  <p> ' . $slide->testimonial_blurb . '</p>
                </div>
              </div>';

        if(i<=2){
          $i++;
        } else {
          $i=0;
        }
      }
      echo '<div class="sliderControls">
              <a class="sliderPrev">' . $prev . '</a>
              <a class="sliderNext">' . $next . '</a>
            </div>
          </section><br><br>';
  // Home Quote
  } else if($item->type == 'homeQuote') {
    echo '<section class="wrapper block" id="homeQuote"><p class="homeQuote_topLine">' . $item->homeQuote_topLine . '</p>
          <p class="homeQuote_bottomLine">' . $item->homeQuote_bottomLine . '</p>
          <p class="homeQuote_attribution">' . $item->homeQuote_Attribution . '</p></section>';
  // Interior Spread
} else if($item->type == 'interior_imageSpread'){
  echo "<section class='wrapper block' id='interior_imageSpread'>";
   foreach($item->interior_imageSpread as $repeater) {
     foreach($repeater->croppableImage as $image){
       echo "<img class='interior_featuredImage' alt='Cincinnati Wedding Photography' src='" . $image->url . "' />";
    }
   }
   echo "</section>";
   // Video
} else if ($item->type == 'video'){
  echo '<section class="wrapper block">
          <video width="100%" height="auto" controls poster="/site/templates/assets/video/'.$item->video.'.jpg">
            <source src="/site/templates/assets/video/'.$item->video.'.mp4" type="video/mp4">
          </video>
        </section>';
  // Custom Code
} else if ($item->type == 'customCode') {
  echo $item->customHTML;

  //Single Image
} else if ($item->type == 'singleImage') {
  echo '<section class="wrapper block center">
  <img class="single_featuredImage" alt="Cincinnati wedding photography" src="'.$item->croppableImage->url . "/" .$item->croppableImage.'">
  </section>';

  // bioCol
} elseif ($item->type == 'bioCol') {
  echo '<section class="wrapper block center bioCol">
          <div class="bioImg" style="background-image:url(\''.$item->bioImg->url.'\')">&nbsp;</div>
          <div class="bioCopy">'.$item->bioCopy.'</div>
        </section>';
  // photoGallery
} elseif ($item->type == 'photoGallery'){
  echo '<section class="wrapper block photoGallery">';
  foreach($item->photoGallery as $photo) {
    echo '<img class="masonry-img" src="'.$photo->url.'" alt="Cincinnati Wedding Photographers">';
  }
  echo '</section><div class="lightbox">
  <div class="title"></div>
  <div class="filter"></div>
  <div class="arrowr"></div>
  <div class="arrowl"></div>
  <div class="close"></div>
</div>';
}
}

?>
