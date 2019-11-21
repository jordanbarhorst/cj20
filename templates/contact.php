<?php include 'inc/header.inc' ?>

<section class='wrapper' id='contactForm' value='/'>
  <div class="sidebar">
    <img src="/site/templates/assets/images/contact-us.jpg" alt="Cincinnati Wedding Photographers" />
    <h2>let's chat</h2>
    <p>Use the form to the right to get in touch and inquire about our services for your wedding day!</p>
  </div>
  <form
    action="https://formspree.io/mwgabggm"
    method="POST"
  >
    <input type="hidden" name="_subject" value="New Inquiry" />
    <label>Your Full Name*</label>
    <input type="text" name="name" required>
    <label>Your Partner's Name*</label>
    <input type="text" name="partner" required>
    <label>Your Email Address*</label>
    <input type="text" name="email" required>
    <label>What's your wedding date?</label>
    <input type="text" name="date">
    <label>Where are you getting married?</label>
    <input type="text" name="venue">
    <label>How did you find us?</label>
    <input type="text" name="source">
    <label>Tell us more about you, your partner, and your dream wedding!</label>
    <textarea name="message"></textarea>

    <!-- your other form fields go here -->

    <button class="button" type="submit">Send</button>
  </form>
</section>
<section class="wrapper thinTop headlineLockUp">
        <p>frequently asked</p>
        <h3>Questions</h3>
      </section>
<section class='wrapper' id='faq'>
  <div class="qa">
    <h3>What is your photography style?</h3>
    <p>Our photography style is summed up in our "three words": Romantic, Genuine, and Classic. We strive to capture the romance between our couples in every photo we take. We don't consider our editing style 'Bright & Airy' or 'Dark & Moody', but rather genuine and true to life. These two elements make our photos look very classic and film inspired, sure to look and feel just as beautiful 80 years from now.</p>
  </div>
  <div class="qa">
    <h3>Do you travel for engagement sessions or weddings?</h3>
    <p>Yes, Yes, Yes! We love to travel for engagement sessions and weddings, especially if it's to a new place, or to one of our favorite places. Be sure to let us know if you'd like to take us somewhere – we offer special travel rates for places we love!</p>
  </div>
  <div class="qa">
    <h3>How should we print our photos?</h3>
    <p>You can easily order high definition prints directly from your online gallery, and are delivered right to your door! The quality of these prints have been approved in-person by us, and are much better quality than you can expect to get at CVS or WalMart. Print purchases are available immediately after receiving your gallery and are available for all of your friends and family as well.</p>
  </div>
  <div class="qa">
    <h3>Why should we order an heirloom album?</h3>
    <p>Keepsake albums become those family heirlooms that generations of relatives can cherish for years. If you've ever looked through your grandparents old wedding albums, you know exactly what we're talking about. A wedding album lets you transport your children, grandchildren, and even you and your partner back to one of the most special days of your life.</p>
  </div>
  <div class="qa">
    <h3>When can we expect our photos to be ready?</h3>
    <p>Being a married couple, we know how badly you want to see your photos after the wedding! For this reason, we do everything we can to get your gallery delivered to you as soon as possible. Our current turnaround time for photo delivery is 4 weeks – well under industry standard, and just enough time for you to get back and rested from your honeymoon!</p>
  </div>
  <div class="qa">
    <h3>Can I create my own collection if none of yours work for me?</h3>
    <p>Outside of our three main wedding collections, we feature extensive a la carte offerings that can be added to any wedding day. Feel free to add any of these extra items to the wedding collection that best fits your day in order to create a collection that works best for you!</p>
  </div>
</section>
<?php include 'inc/footer.inc' ?>
</body>

</html>
