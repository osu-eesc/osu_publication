<?php
/**
 * @file
 * osu_publication.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function osu_publication_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_publication_thumbnail',
        1 => 'title',
        2 => 'field_author_reference',
        3 => 'field_publication_description',
        4 => 'project_series_date_length_entity_view_1',
        5 => 'product:commerce_price',
        6 => 'field_publication_product',
        7 => 'field_supplemental_file',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'ds_content',
      'title' => 'ds_content',
      'field_author_reference' => 'ds_content',
      'field_publication_description' => 'ds_content',
      'project_series_date_length_entity_view_1' => 'ds_content',
      'product:commerce_price' => 'ds_content',
      'field_publication_product' => 'ds_content',
      'field_supplemental_file' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|osu_catalog_publication|default'] = $ds_layout;

  return $export;
}
