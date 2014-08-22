<?php
/**
 * @file
 * osu_publication.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function osu_publication_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'page-title',
      ),
    ),
  );
  $export['node|osu_catalog_publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'search_snippet' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|osu_catalog_publication|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|osu_catalog_publication|teaser'] = $ds_fieldsetting;

  return $export;
}

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
  $ds_layout->layout = 'bootstrap_5_7';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_publication_thumbnail',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_authors_entity_ref',
        3 => 'field_publication_description',
        4 => 'project_series_date_length_formatted_series_number',
        5 => 'field_alt_series_number',
        6 => 'field_date_reviewed',
        7 => 'project_series_date_length_eva_links',
        8 => 'product:commerce_price',
        9 => 'field_publication_product',
        10 => 'project_series_date_length_eva_supplemental',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'left',
      'title' => 'right',
      'field_authors_entity_ref' => 'right',
      'field_publication_description' => 'right',
      'project_series_date_length_formatted_series_number' => 'right',
      'field_alt_series_number' => 'right',
      'field_date_reviewed' => 'right',
      'project_series_date_length_eva_links' => 'right',
      'product:commerce_price' => 'right',
      'field_publication_product' => 'right',
      'project_series_date_length_eva_supplemental' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|osu_catalog_publication|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_basic',
        1 => 'title',
        2 => 'group_general',
        3 => 'field_publication_thumbnail',
        4 => 'group_publishing',
        5 => 'field_series_prefix',
        6 => 'group_links',
        7 => 'field_series_number',
        8 => 'field_series_suffix',
        9 => 'group_estimates',
        10 => 'field_full_series_number',
        11 => 'group_html',
        12 => 'field_alt_series_number',
        13 => 'field_publication_description',
        14 => 'path',
        15 => 'redirect',
        16 => 'field_length',
        17 => 'field_authors_entity_ref',
        18 => 'field_topic',
        19 => 'field_media_type',
        20 => 'field_project_manager',
        21 => 'field_corresponding_author',
        22 => 'field_program_area',
        23 => 'field_publication_status',
        24 => 'field_status_date',
        25 => 'field_general_notes',
        26 => 'field_radioactivity',
        27 => 'field_account_type',
        28 => 'field_estimate_entity_ref',
        29 => 'field_estimates_expense_notes',
        30 => 'field_link_or_upload',
        31 => 'field_print_specs',
        32 => 'field_catman_link',
        33 => 'field_pdf_file',
        34 => 'field_add_to_store',
        35 => 'field_epub_file',
        36 => 'field_publication_product',
        37 => 'field_preview_file',
        38 => 'field_excel_file',
        39 => 'field_eesc_produced_purchased',
        40 => 'field_mode_of_delivery',
        41 => 'field_supplemental_file',
        42 => 'field_new_or_revised',
        43 => 'field_supplemental_link',
        44 => 'field_publication_date',
        45 => 'field_companion_resources',
        46 => 'field_date_reviewed',
        47 => 'field_review_notes',
        48 => 'field_html_output',
      ),
      'hidden' => array(
        49 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_basic' => 'ds_content',
      'title' => 'ds_content',
      'group_general' => 'ds_content',
      'field_publication_thumbnail' => 'ds_content',
      'group_publishing' => 'ds_content',
      'field_series_prefix' => 'ds_content',
      'group_links' => 'ds_content',
      'field_series_number' => 'ds_content',
      'field_series_suffix' => 'ds_content',
      'group_estimates' => 'ds_content',
      'field_full_series_number' => 'ds_content',
      'group_html' => 'ds_content',
      'field_alt_series_number' => 'ds_content',
      'field_publication_description' => 'ds_content',
      'path' => 'ds_content',
      'redirect' => 'ds_content',
      'field_length' => 'ds_content',
      'field_authors_entity_ref' => 'ds_content',
      'field_topic' => 'ds_content',
      'field_media_type' => 'ds_content',
      'field_project_manager' => 'ds_content',
      'field_corresponding_author' => 'ds_content',
      'field_program_area' => 'ds_content',
      'field_publication_status' => 'ds_content',
      'field_status_date' => 'ds_content',
      'field_general_notes' => 'ds_content',
      'field_radioactivity' => 'ds_content',
      'field_account_type' => 'ds_content',
      'field_estimate_entity_ref' => 'ds_content',
      'field_estimates_expense_notes' => 'ds_content',
      'field_link_or_upload' => 'ds_content',
      'field_print_specs' => 'ds_content',
      'field_catman_link' => 'ds_content',
      'field_pdf_file' => 'ds_content',
      'field_add_to_store' => 'ds_content',
      'field_epub_file' => 'ds_content',
      'field_publication_product' => 'ds_content',
      'field_preview_file' => 'ds_content',
      'field_excel_file' => 'ds_content',
      'field_eesc_produced_purchased' => 'ds_content',
      'field_mode_of_delivery' => 'ds_content',
      'field_supplemental_file' => 'ds_content',
      'field_new_or_revised' => 'ds_content',
      'field_supplemental_link' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_companion_resources' => 'ds_content',
      'field_date_reviewed' => 'ds_content',
      'field_review_notes' => 'ds_content',
      'field_html_output' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|osu_catalog_publication|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'fluid_teaser_layout';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'regions' => array(
      'image' => array(
        0 => 'field_publication_thumbnail',
      ),
      'contents' => array(
        0 => 'title',
        1 => 'search_snippet',
        2 => 'project_series_date_length_entity_view_1',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'image',
      'title' => 'contents',
      'search_snippet' => 'contents',
      'project_series_date_length_entity_view_1' => 'contents',
    ),
  );
  $export['node|osu_catalog_publication|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'fluid_teaser_layout';
  $ds_layout->settings = array(
    'regions' => array(
      'image' => array(
        0 => 'field_publication_thumbnail',
      ),
      'contents' => array(
        1 => 'title',
        2 => 'project_series_date_length_formatted_series_number',
        3 => 'field_new_or_revised',
        4 => 'field_publication_date',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'image',
      'title' => 'contents',
      'project_series_date_length_formatted_series_number' => 'contents',
      'field_new_or_revised' => 'contents',
      'field_publication_date' => 'contents',
    ),
    'classes' => array(),
    'wrappers' => array(
      'image' => 'div',
      'contents' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|osu_catalog_publication|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|publication_author|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'publication_author';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|publication_author|default'] = $ds_layout;

  return $export;
}
