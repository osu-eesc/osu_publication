;(function ($) {
    // Adapted from Open Atrium: http://openatrium.com
    Drupal.behaviors.osu_publication = {
      attach: function (context) {
        // Drop-down blocks
        $("#sidebar-first .block-views .content").hide();
        // Prevent events from getting past the popup
        $("#sidebar-first .block-views .block-title").click(function(e){
          e.stopPropagation();
          $(this).siblings(".content").slideToggle();
        });
      }
    };
})(jQuery);

