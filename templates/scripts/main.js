

$(document).ready(function() {

  // Mobile menu

  $( ".mobile-trigger" ).click(function() {
    $("nav#main").addClass("active");
    $(document.body).addClass("overlay");
    $("html").addClass("overlay");
  });
  $(".mobile-close").click(function(){
    $("nav#main").removeClass("active");
    $(document.body).removeClass("overlay");
    $("html").removeClass("overlay");
  })

  // Testimonial Slider

  // Increase / Decrease i variable
    var i = 1;
    $(".slide:first-of-type").removeClass("off");
    $(".slide:first-of-type").addClass("on");
    $(".slide:nth-of-type(2)").removeClass("on");
    $(".slide:nth-of-type(2)").addClass("off");
    $(".slide:nth-of-type(3)").removeClass("on");
    $(".slide:nth-of-type(3)").addClass("off");
    console.log("First Slide");

    $( ".sliderPrev" ).click(function() {
      if(i == 1){
        i = 3;
        $(".slide:nth-of-type(3)").removeClass("off");
        $(".slide:nth-of-type(3)").addClass("on");
        $(".slide:first-of-type").removeClass("on");
        $(".slide:first-of-type").addClass("off");
        $(".slide:nth-of-type(2)").removeClass("on");
        $(".slide:nth-of-type(2)").addClass("off");
        console.log("Third Slide");
      } else if (i == 2){
        i--;
        $(".slide:first-of-type").removeClass("off");
        $(".slide:first-of-type").addClass("on");
        $(".slide:nth-of-type(2)").removeClass("on");
        $(".slide:nth-of-type(2)").addClass("off");
        $(".slide:nth-of-type(3)").removeClass("on");
        $(".slide:nth-of-type(3)").addClass("off");
        console.log("First Slide");
      } else {
        $(".slide:nth-of-type(2)").removeClass("off");
        $(".slide:nth-of-type(2)").addClass("on");
        $(".slide:first-of-type").removeClass("on");
        $(".slide:first-of-type").addClass("off");
        $(".slide:nth-of-type(3)").removeClass("on");
        $(".slide:nth-of-type(3)").addClass("off");
        console.log("Second Slide");
      }
    });
    $( ".sliderNext" ).click(function() {
      if(i == 3) {
        i = 1;
        $(".slide:first-of-type").removeClass("off");
        $(".slide:first-of-type").addClass("on");
        $(".slide:nth-of-type(2)").removeClass("on");
        $(".slide:nth-of-type(2)").addClass("off");
        $(".slide:nth-of-type(3)").removeClass("on");
        $(".slide:nth-of-type(3)").addClass("off");
        console.log("First Slide");
      } else if(i == 2){
        i++;
        $(".slide:nth-of-type(3)").removeClass("off");
        $(".slide:nth-of-type(3)").addClass("on");
        $(".slide:first-of-type").removeClass("on");
        $(".slide:first-of-type").addClass("off");
        $(".slide:nth-of-type(2)").removeClass("on");
        $(".slide:nth-of-type(2)").addClass("off");
        console.log("Third Slide");
      } else {
        i++;
        $(".slide:nth-of-type(2)").removeClass("off");
        $(".slide:nth-of-type(2)").addClass("on");
        $(".slide:first-of-type").removeClass("on");
        $(".slide:first-of-type").addClass("off");
        $(".slide:nth-of-type(3)").removeClass("on");
        $(".slide:nth-of-type(3)").addClass("off");
        console.log("Second Slide");
      }
    });
    $(".photoGallery .masonry-img").click(function() {
      $(".lightbox").fadeIn(300);
      $(".lightbox").append("<img src='" + $(this).attr("src") + "' alt='" + $(this).attr("alt") + "' />");
      $(".filter").css("background-image", "url(" + $(this).attr("src") + ")");
      /*$(".title").append("<h1>" + $(this).attr("alt") + "</h1>");*/
      $("html").css("overflow", "hidden");
      if ($(this).is(":last-child")) {
        $(".arrowr").css("display", "none");
        $(".arrowl").css("display", "block");
      } else if ($(this).is(":first-child")) {
        $(".arrowr").css("display", "block");
        $(".arrowl").css("display", "none");
      } else {
        $(".arrowr").css("display", "block");
        $(".arrowl").css("display", "block");
      }
    });
    $(".close").click(function() {
      $(".lightbox").fadeOut(300);
      $("h1").remove();
      $(".lightbox img").remove();
      $("html").css("overflow", "auto");
    });

    $(document).keyup(function(e) {
      if (e.keyCode == 27) {
        $(".lightbox").fadeOut(300);
        $(".lightbox img").remove();
        $("html").css("overflow", "auto");
      }
    });
    $(".arrowr").click(function() {
      var imgSrc = $(".lightbox img").attr("src");
      var search = $(".photoGallery").find("img[src$='" + imgSrc + "']");
      var newImage = search.next().attr("src");
      /*$(".lightbox img").attr("src", search.next());*/
      $(".lightbox img").attr("src", newImage);
      $(".filter").css("background-image", "url(" + newImage + ")");

      if (!search.next().is(":last-child")) {
        $(".arrowl").css("display", "block");
      } else {
        $(".arrowr").css("display", "none");
      }
    });
    $(".arrowl").click(function() {
      var imgSrc = $(".lightbox img").attr("src");
      var search = $(".photoGallery").find("img[src$='" + imgSrc + "']");
      var newImage = search.prev().attr("src");
      /*$(".lightbox img").attr("src", search.next());*/
      $(".lightbox img").attr("src", newImage);
      $(".filter").css("background-image", "url(" + newImage + ")");

      if (!search.prev().is(":first-child")) {
        $(".arrowr").css("display", "block");
      } else {
        $(".arrowl").css("display", "none");
      }
    });
  });

  $(window).load(function() {

  });
