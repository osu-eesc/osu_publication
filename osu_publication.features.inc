<?php
/**
 * @file
 * osu_publication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osu_publication_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osu_publication_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function osu_publication_node_info() {
  $items = array(
    'osu_catalog_publication' => array(
      'name' => t('Publication'),
      'base' => 'node_content',
      'description' => t('Use for adding and editing projects that will be published in the OSU Extension Catalog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication_author' => array(
      'name' => t('Publication author'),
      'base' => 'node_content',
      'description' => t('Use for adding and editing publication authors'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
