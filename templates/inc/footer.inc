<footer>
  <section class="wrapper block">
    <div class="strike">
      <span class="minilogo"><?php echo $minilogo; ?></span>
    </div>
  </section>
  <section class="instagramWidget">
  <!-- LightWidget WIDGET --><script src="https://cdn.lightwidget.com/widgets/lightwidget.js"></script><iframe src="https://cdn.lightwidget.com/widgets/513076c4410f5de8beae6eaa71b72f83.html" scrolling="no" allowtransparency="true" class="lightwidget-widget" style="width:100%;border:0;overflow:hidden;"></iframe>
  </section>
  <section class="wrapper thinTop">
    <ul id="footerNav">
      <?php
        foreach($navItems as $i) {
          echo '<li><a href="'.$i->url.'" alt="'.$i->title.'">'.$i->title.'</a></li>';
        }
      ?>
    </ul>
  </section>
  <section class="wrapper" style="margin-top: 15px;">
    <div id="footer_socialWrapper">
      <a href="https://www.facebook.com/chelseyandjordanphotography" target="_blank"><?php echo $facebook; ?></a>
      <a href="https://www.instagram.com/chelseyandjordanphotography/" target="_blank"><?php echo $instagram; ?></a>
      <a href="mailto:chelseyandjordanphotography@gmail.com" target="_blank"><?php echo $email; ?></a>
    </div>
  </section>
  <section class="wrapper thinTop">
    <h1 class="copyright">Cincinnati Wedding Photographers</h1>
    <p class="copyright">&copy;<?php echo date("Y"); ?> Chelsey & Jordan Photography. All Rights Reserved.</p>
  </section>
</footer>
<script src="js/vendor/modernizr-3.7.1.min.js"></script>
<script src="https://code.jquery.com/jquery-3.4.1.min.js" integrity="sha256-CSXorXvZcTkaix6Yvo6HppcZGetbYMGWSFlBw8HfCJo=" crossorigin="anonymous"></script>
<script src="<?= $procache->js('scripts/main.js') ?>"></script>

<!-- Google Analytics: change UA-XXXXX-Y to be your site's ID. -->
<script>
  window.ga = function () { ga.q.push(arguments) }; ga.q = []; ga.l = +new Date;
  ga('create', 'UA-XXXXX-Y', 'auto'); ga('set','transport','beacon'); ga('send', 'pageview')
</script>
<script src="https://www.google-analytics.com/analytics.js" async></script>
