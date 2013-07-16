<?php
/**
 * @file
 * osu_publication.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function osu_publication_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-browse:<front>
  $menu_links['menu-browse:<front>'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'New Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -19,
  );
  // Exported menu link: menu-browse:category/Agriculture
  $menu_links['menu-browse:category/Agriculture'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Agriculture',
    'router_path' => 'category/%',
    'link_title' => 'Agriculture',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Business-Management
  $menu_links['menu-browse:category/Business-Management'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Business-Management',
    'router_path' => 'category/%',
    'link_title' => 'Business Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Community-Development-and-Government
  $menu_links['menu-browse:category/Community-Development-and-Government'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Community-Development-and-Government',
    'router_path' => 'category/%',
    'link_title' => 'Community Development and Government',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Emergency-Response
  $menu_links['menu-browse:category/Emergency-Response'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Emergency-Response',
    'router_path' => 'category/%',
    'link_title' => 'Emergency Response',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Family-and-Home
  $menu_links['menu-browse:category/Family-and-Home'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Family-and-Home',
    'router_path' => 'category/%',
    'link_title' => 'Family and Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Forestry-and-Wood-Processing
  $menu_links['menu-browse:category/Forestry-and-Wood-Processing'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Forestry-and-Wood-Processing',
    'router_path' => 'category/%',
    'link_title' => 'Forestry and Wood Processing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Health-and-Wellness
  $menu_links['menu-browse:category/Health-and-Wellness'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Health-and-Wellness',
    'router_path' => 'category/%',
    'link_title' => 'Health and Wellness',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Natural-Resources
  $menu_links['menu-browse:category/Natural-Resources'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Natural-Resources',
    'router_path' => 'category/%',
    'link_title' => 'Natural Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Nutrition-and-Foods
  $menu_links['menu-browse:category/Nutrition-and-Foods'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Nutrition-and-Foods',
    'router_path' => 'category/%',
    'link_title' => 'Nutrition and Foods',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Spanish-language-Materials
  $menu_links['menu-browse:category/Spanish-language-Materials'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Spanish-language-Materials',
    'router_path' => 'category/%',
    'link_title' => 'Spanish-language Materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:category/Tools-for-Educators
  $menu_links['menu-browse:category/Tools-for-Educators'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'category/Tools-for-Educators',
    'router_path' => 'category/%',
    'link_title' => 'Tools for Educators',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'parent_path' => 'topics',
  );
  // Exported menu link: menu-browse:taxonomy/term/101
  $menu_links['menu-browse:taxonomy/term/101'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'taxonomy/term/101',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Audio slide Show',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'media-types',
  );
  // Exported menu link: menu-browse:taxonomy/term/97
  $menu_links['menu-browse:taxonomy/term/97'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'taxonomy/term/97',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Publication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'media-types',
  );
  // Exported menu link: menu-browse:taxonomy/term/98
  $menu_links['menu-browse:taxonomy/term/98'] = array(
    'menu_name' => 'menu-browse',
    'link_path' => 'taxonomy/term/98',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Video',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'media-types',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Agriculture');
  t('Audio slide Show');
  t('Business Management');
  t('Community Development and Government');
  t('Emergency Response');
  t('Family and Home');
  t('Forestry and Wood Processing');
  t('Health and Wellness');
  t('Natural Resources');
  t('New Releases');
  t('Nutrition and Foods');
  t('Publication');
  t('Spanish-language Materials');
  t('Tools for Educators');
  t('Video');


  return $menu_links;
}
