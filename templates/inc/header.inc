<!doctype html>
<html class="no-js" lang="">

<head>
  <meta charset="utf-8">
  <meta name="viewport" content="user-scalable=no, width=device-width, initial-scale=1.0, maximum-scale=1.0" />
  <meta name="apple-mobile-web-app-capable" content="yes" />

  <script>
window['_fs_debug'] = false;
window['_fs_host'] = 'fullstory.com';
window['_fs_script'] = 'fullstory.com/s/fs.js';
window['_fs_org'] = '516NY';
window['_fs_namespace'] = 'FS';
(function(m,n,e,t,l,o,g,y){
    if (e in m) {if(m.console && m.console.log) { m.console.log('FullStory namespace conflict. Please set window["_fs_namespace"].');} return;}
    g=m[e]=function(a,b,s){g.q?g.q.push([a,b,s]):g._api(a,b,s);};g.q=[];
    o=n.createElement(t);o.async=1;o.crossOrigin='anonymous';o.src='https://'+_fs_script;
    y=n.getElementsByTagName(t)[0];y.parentNode.insertBefore(o,y);
    g.identify=function(i,v,s){g(l,{uid:i},s);if(v)g(l,v,s)};g.setUserVars=function(v,s){g(l,v,s)};g.event=function(i,v,s){g('event',{n:i,p:v},s)};
    g.shutdown=function(){g("rec",!1)};g.restart=function(){g("rec",!0)};
    g.log = function(a,b) { g("log", [a,b]) };
    g.consent=function(a){g("consent",!arguments.length||a)};
    g.identifyAccount=function(i,v){o='account';v=v||{};v.acctId=i;g(o,v)};
    g.clearUserCookie=function(){};
})(window,document,window['_fs_namespace'],'script','user');
</script>

<link rel="apple-touch-icon" sizes="57x57" href="/site/templates/assets/favicons/apple-icon-57x57.png">
<link rel="apple-touch-icon" sizes="60x60" href="/site/templates/assets/favicons/apple-icon-60x60.png">
<link rel="apple-touch-icon" sizes="72x72" href="/site/templates/assets/favicons/apple-icon-72x72.png">
<link rel="apple-touch-icon" sizes="76x76" href="/site/templates/assets/favicons/apple-icon-76x76.png">
<link rel="apple-touch-icon" sizes="114x114" href="/site/templates/assets/favicons/apple-icon-114x114.png">
<link rel="apple-touch-icon" sizes="120x120" href="/site/templates/assets/favicons/apple-icon-120x120.png">
<link rel="apple-touch-icon" sizes="144x144" href="/site/templates/assets/favicons/apple-icon-144x144.png">
<link rel="apple-touch-icon" sizes="152x152" href="/site/templates/assets/favicons/apple-icon-152x152.png">
<link rel="apple-touch-icon" sizes="180x180" href="/site/templates/assets/favicons/apple-icon-180x180.png">
<link rel="icon" type="image/png" sizes="192x192"  href="/site/templates/assets/favicons/android-icon-192x192.png">
<link rel="icon" type="image/png" sizes="32x32" href="/site/templates/assets/favicons/favicon-32x32.png">
<link rel="icon" type="image/png" sizes="96x96" href="/site/templates/assets/favicons/favicon-96x96.png">
<link rel="icon" type="image/png" sizes="16x16" href="/site/templates/assets/favicons/favicon-16x16.png">
<link rel="manifest" href="/manifest.json">
<meta name="msapplication-TileColor" content="#C2B7AB">
<meta name="msapplication-TileImage" content="/site/templates/assets/favicons/ms-icon-144x144.png">
<meta name="theme-color" content="#C2B7AB">

  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/meyer-reset/2.0/reset.min.css">
  <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Cormorant:400,400i|Oranienbaum&display=swap">
  <link rel="stylesheet" href="<?= $procache->css('styles/scss/main.scss') ?>">

<?php

// Global Variables
$logo = file_get_contents("assets/svg/logo.svg");
$logoSecondary = file_get_contents("assets/svg/logo-secondary.svg");
$minilogo = file_get_contents("assets/svg/mini-logo.svg");
$dots = file_get_contents("assets/svg/menu.svg");
$prev = file_get_contents("assets/svg/prev.svg");
$next = file_get_contents("assets/svg/next.svg");
$facebook = file_get_contents("assets/svg/facebook.svg");
$instagram = file_get_contents("assets/svg/instagram.svg");
$email = file_get_contents("assets/svg/email.svg");

$navItems = $pages->find("id=1");
$navItems->add($pages->find("parent=1"));
?>

</head>

<body>

  <div class="wrapper block" id="logo-holder">
    <?php

    echo "<a style='cursor: pointer;' href='/' alt='Cincinnati Wedding Photographers'>".$logo."</a>";

    ?>
    <div class="mobile-trigger">
      <p>menu</p>
    </div>
    <nav id="main">
      <ul id="mainNav">
        <?php
          foreach($navItems as $i) {
            echo '<li><a href="'.$i->url.'" alt="'.$i->title.'">'.$i->title.'</a></li>';
          }
          echo '<li class="mobile-close" style="padding-top: 15px; font-size: 24px;">Close Menu</li>';
        ?>
      </ul>
    </nav>
  </div>
