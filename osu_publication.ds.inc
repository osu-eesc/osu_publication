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
    'service_links_displays_group' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'sld_group_text',
    ),
  );
  $export['node|osu_catalog_publication|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'service_links_displays_group' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'sld_group_text',
    ),
  );
  $export['node|osu_catalog_publication|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|rss';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'rss';
  $ds_fieldsetting->settings = array(
    'rss_creator' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|osu_catalog_publication|rss'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|search_index';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'search_index';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|osu_catalog_publication|search_index'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|osu_catalog_publication|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'osu_catalog_publication';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'search-title',
      ),
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

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|osu_catalog_topic|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'osu_catalog_topic';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|osu_catalog_topic|default'] = $ds_fieldsetting;

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
        3 => 'service_links_displays_group',
        4 => 'field_publication_description',
        5 => 'project_series_date_length_formatted_series_number',
        6 => 'field_alt_series_number',
        7 => 'field_date_reviewed',
        8 => 'project_series_date_length_eva_links',
        9 => 'product:commerce_price',
        10 => 'field_publication_product',
        11 => 'project_series_date_length_eva_supplemental',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'left',
      'title' => 'right',
      'field_authors_entity_ref' => 'right',
      'service_links_displays_group' => 'right',
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
        0 => 'title',
        1 => 'group_basic',
        2 => 'field_publication_thumbnail',
        3 => 'group_general',
        4 => 'group_publishing',
        5 => 'field_series_prefix',
        6 => 'group_links',
        7 => 'group_estimates',
        8 => 'field_series_number',
        9 => 'field_series_suffix',
        10 => 'group_html',
        11 => 'field_full_series_number',
        12 => 'field_alt_series_number',
        13 => 'path',
        14 => 'field_publication_description',
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
        28 => 'field_account_type',
        29 => 'field_estimate_entity_ref',
        30 => 'field_estimates_expense_notes',
        31 => 'field_link_or_upload',
        32 => 'field_print_specs',
        33 => 'field_catman_link',
        34 => 'field_pdf_file',
        35 => 'field_epub_file',
        36 => 'field_add_to_store',
        37 => 'field_preview_file',
        38 => 'field_publication_product',
        39 => 'field_excel_file',
        40 => 'field_eesc_produced_purchased',
        41 => 'field_mode_of_delivery',
        42 => 'field_supplemental_file',
        43 => 'field_new_or_revised',
        44 => 'field_supplemental_link',
        45 => 'field_companion_resources',
        46 => 'field_publication_date',
        47 => 'field_date_reviewed',
        48 => 'field_review_notes',
        49 => 'field_html_output',
      ),
      'hidden' => array(
        27 => 'metatags',
        50 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_basic' => 'ds_content',
      'field_publication_thumbnail' => 'ds_content',
      'group_general' => 'ds_content',
      'group_publishing' => 'ds_content',
      'field_series_prefix' => 'ds_content',
      'group_links' => 'ds_content',
      'group_estimates' => 'ds_content',
      'field_series_number' => 'ds_content',
      'field_series_suffix' => 'ds_content',
      'group_html' => 'ds_content',
      'field_full_series_number' => 'ds_content',
      'field_alt_series_number' => 'ds_content',
      'path' => 'ds_content',
      'field_publication_description' => 'ds_content',
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
      'metatags' => 'hidden',
      'field_account_type' => 'ds_content',
      'field_estimate_entity_ref' => 'ds_content',
      'field_estimates_expense_notes' => 'ds_content',
      'field_link_or_upload' => 'ds_content',
      'field_print_specs' => 'ds_content',
      'field_catman_link' => 'ds_content',
      'field_pdf_file' => 'ds_content',
      'field_epub_file' => 'ds_content',
      'field_add_to_store' => 'ds_content',
      'field_preview_file' => 'ds_content',
      'field_publication_product' => 'ds_content',
      'field_excel_file' => 'ds_content',
      'field_eesc_produced_purchased' => 'ds_content',
      'field_mode_of_delivery' => 'ds_content',
      'field_supplemental_file' => 'ds_content',
      'field_new_or_revised' => 'ds_content',
      'field_supplemental_link' => 'ds_content',
      'field_companion_resources' => 'ds_content',
      'field_publication_date' => 'ds_content',
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
  $ds_layout->id = 'node|osu_catalog_publication|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_5_7';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_publication_thumbnail',
        1 => 'field_radioactivity',
        2 => 'links',
        3 => 'product:commerce_stock',
        4 => 'field_add_to_store',
      ),
      'right' => array(
        5 => 'title',
        6 => 'field_authors_entity_ref',
        7 => 'service_links_displays_group',
        8 => 'field_publication_description',
        9 => 'project_series_date_length_formatted_series_number',
        10 => 'field_alt_series_number',
        11 => 'field_date_reviewed',
        12 => 'project_series_date_length_eva_links',
        13 => 'product:commerce_price',
        14 => 'field_publication_product',
        15 => 'project_series_date_length_eva_supplemental',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'left',
      'field_radioactivity' => 'left',
      'links' => 'left',
      'product:commerce_stock' => 'left',
      'field_add_to_store' => 'left',
      'title' => 'right',
      'field_authors_entity_ref' => 'right',
      'service_links_displays_group' => 'right',
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
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|osu_catalog_publication|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|rss';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'rss';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_publication_thumbnail',
        1 => 'field_publication_description',
        2 => 'field_authors_entity_ref',
        3 => 'project_series_date_length_formatted_series_number',
        4 => 'field_alt_series_number',
        5 => 'field_publication_date',
        6 => 'rss_creator',
        7 => 'field_media_type',
        8 => 'field_topic',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'central',
      'field_publication_description' => 'central',
      'field_authors_entity_ref' => 'central',
      'project_series_date_length_formatted_series_number' => 'central',
      'field_alt_series_number' => 'central',
      'field_publication_date' => 'central',
      'rss_creator' => 'central',
      'field_media_type' => 'central',
      'field_topic' => 'central',
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
  $export['node|osu_catalog_publication|rss'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|search_index';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'search_index';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_publication_description',
        2 => 'field_full_series_number',
        3 => 'field_alt_series_number',
        4 => 'field_publication_date',
        5 => 'field_topic',
        6 => 'field_authors_entity_ref',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_publication_description' => 'central',
      'field_full_series_number' => 'central',
      'field_alt_series_number' => 'central',
      'field_publication_date' => 'central',
      'field_topic' => 'central',
      'field_authors_entity_ref' => 'central',
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
  $export['node|osu_catalog_publication|search_index'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|osu_catalog_publication|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'osu_catalog_publication';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'bootstrap_3_9';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_publication_thumbnail',
      ),
      'right' => array(
        1 => 'field_full_series_number',
        2 => 'title',
        3 => 'field_new_or_revised',
        4 => 'field_publication_date',
        5 => 'field_publication_description',
      ),
    ),
    'fields' => array(
      'field_publication_thumbnail' => 'left',
      'field_full_series_number' => 'right',
      'title' => 'right',
      'field_new_or_revised' => 'right',
      'field_publication_date' => 'right',
      'field_publication_description' => 'right',
    ),
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
  $ds_layout->id = 'taxonomy_term|osu_catalog_topic|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'osu_catalog_topic';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'description',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'description' => 'central',
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
  $export['taxonomy_term|osu_catalog_topic|default'] = $ds_layout;

  return $export;
}
