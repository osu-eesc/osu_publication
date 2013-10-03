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
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_publication_thumbnail',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_author_reference',
        3 => 'field_publication_description',
        4 => 'project_series_date_length_entity_view_1',
        5 => 'field_alt_series_number',
        6 => 'field_date_reviewed',
        7 => 'product:commerce_price',
        8 => 'field_publication_product',
        9 => 'field_supplemental_file',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'left',
      'title' => 'right',
      'field_author_reference' => 'right',
      'field_publication_description' => 'right',
      'project_series_date_length_entity_view_1' => 'right',
      'field_alt_series_number' => 'right',
      'field_date_reviewed' => 'right',
      'product:commerce_price' => 'right',
      'field_publication_product' => 'right',
      'field_supplemental_file' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|osu_catalog_publication|default'] = $ds_layout;

  return $export;
}
