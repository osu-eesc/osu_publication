<?php
/**
 * @file
 * osu_publication.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function osu_publication_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-browse.
  $menus['menu-browse'] = array(
    'menu_name' => 'menu-browse',
    'title' => 'Browse by Topic or Media Type',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Browse by Topic or Media Type');


  return $menus;
}
