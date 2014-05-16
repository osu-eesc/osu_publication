<?php
/**
 * @file
 * osu_publication.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function osu_publication_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_osu_catalog_publication';
  $strongarm->value = '0';
  $export['auto_entitylabel_node_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_publication_author';
  $strongarm->value = '1';
  $export['auto_entitylabel_node_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_osu_catalog_publication';
  $strongarm->value = '[node:field-series-prefix] [node:field_series_number][node:field-series-suffix]';
  $export['auto_entitylabel_pattern_node_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_publication_author';
  $strongarm->value = '[node:field_first_name] [node:field-last-name]';
  $export['auto_entitylabel_pattern_node_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_osu_catalog_publication';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_publication_author';
  $strongarm->value = 0;
  $export['auto_entitylabel_php_node_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_osu_catalog_publication';
  $strongarm->value = 0;
  $export['comment_anonymous_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_osu_catalog_publication';
  $strongarm->value = 1;
  $export['comment_default_mode_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_osu_catalog_publication';
  $strongarm->value = '50';
  $export['comment_default_per_page_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_osu_catalog_publication';
  $strongarm->value = 1;
  $export['comment_form_location_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_osu_catalog_publication';
  $strongarm->value = '1';
  $export['comment_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_osu_catalog_publication';
  $strongarm->value = '1';
  $export['comment_preview_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_osu_catalog_publication';
  $strongarm->value = 1;
  $export['comment_subject_field_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_full_month_year';
  $strongarm->value = 'F Y';
  $export['date_format_full_month_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_month_year';
  $strongarm->value = 'n/Y';
  $export['date_format_month_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_m_d_y';
  $strongarm->value = 'm/d/y';
  $export['date_format_m_d_y'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_osu_date';
  $strongarm->value = 'n/Y';
  $export['date_format_osu_date'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'newman_catman_import' => FALSE,
    'pub_author_import' => FALSE,
    'node' => TRUE,
    'user' => TRUE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'newman_catman_import-authors_catman_nodes-explode' => FALSE,
    'newman_catman_import-status_date-string_to_unix_timestamp' => FALSE,
    'newman_catman_import-date_pub_or_rev-string_to_unix_timestamp_rev' => FALSE,
    'newman_catman_import-mode_of_delivery_catman_value-explode_mode_of_dev' => FALSE,
    'newman_catman_import-new_revised_catman_value-format_a_number' => FALSE,
    'newman_catman_import-topics_catman_nodes-explode' => FALSE,
    'newman_catman_import-media_type_catman_node-explode' => FALSE,
    'store_items_importer-cost_per_copy-set_default_value' => FALSE,
    'newman_catman_import-test-copy_source_value' => FALSE,
    'newman_catman_import-productid-set_default_value' => FALSE,
    'store_items_importer-cost_per_copy-find_replace_period' => FALSE,
    'store_items_importer-sales_price-format_a_number' => FALSE,
    'store_items_importer-cost_per_copy-format_a_number' => FALSE,
    'store_items_importer-sales_price-find_replace' => FALSE,
    'store_items_importer-inventory-format_a_number' => FALSE,
    'store_items_importer-inventory-find_replace' => FALSE,
    'newman_catman_import-series_total-pad_a_string' => FALSE,
    'newman_catman_import-series_number-pad_a_string' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__account_type';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '2',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__estimates_expenses';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '9',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__osu_catalog_publication';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print_friendly' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '33',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '34',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '34',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '35',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '15',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:commerce_stock' => array(
          'default' => array(
            'weight' => '32',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '26',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '28',
            'visible' => FALSE,
          ),
        ),
        'product:field_cost' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'search_index' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_cost_per_copy' => array(
          'default' => array(
            'weight' => '25',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '19',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
        ),
        'product:field_delivery_mode' => array(
          'default' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'search_index' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '46',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '29',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '32',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '33',
            'visible' => FALSE,
          ),
        ),
        'project_series_date_length_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'search_index' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'estimates_expenses_entity_view_1' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'estimates_expenses_eva_estimate_expsenses' => array(
          'default' => array(
            'weight' => '24',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '18',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'project_series_date_length_eva_links' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '17',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '30',
            'visible' => FALSE,
          ),
        ),
        'project_series_date_length_formatted_series_number' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'token' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_index' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'pdf_files_entity_view_1' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'token' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
        ),
        'project_series_date_length_eva_supplemental' => array(
          'default' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '31',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__publication_author';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print_friendly' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-1';
  $strongarm->value = array(
    'config_id' => 'taxonomy-1',
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '1',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '0',
      'reset_hs' => '1',
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
  );
  $export['hs_config_taxonomy-1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-2';
  $strongarm->value = array(
    'config_id' => 'taxonomy-2',
    'save_lineage' => 0,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
        1 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => 0,
      'reset_hs' => 1,
    ),
    'editability' => array(
      'status' => 1,
      'item_types' => array(
        0 => '',
        1 => '',
      ),
      'allowed_levels' => array(
        0 => 0,
        1 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => 1,
    ),
  );
  $export['hs_config_taxonomy-2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_account_type';
  $strongarm->value = array();
  $export['menu_options_account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_estimates_expenses';
  $strongarm->value = array();
  $export['menu_options_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_osu_catalog_publication';
  $strongarm->value = array();
  $export['menu_options_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_publication_author';
  $strongarm->value = array();
  $export['menu_options_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_account_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_estimates_expenses';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_osu_catalog_publication';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_publication_author';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_account_type';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_estimates_expenses';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_osu_catalog_publication';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_publication_author';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_account_type';
  $strongarm->value = '0';
  $export['node_preview_account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_estimates_expenses';
  $strongarm->value = '0';
  $export['node_preview_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_osu_catalog_publication';
  $strongarm->value = '0';
  $export['node_preview_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_publication_author';
  $strongarm->value = '1';
  $export['node_preview_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_account_type';
  $strongarm->value = 0;
  $export['node_submitted_account_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_estimates_expenses';
  $strongarm->value = 0;
  $export['node_submitted_estimates_expenses'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_osu_catalog_publication';
  $strongarm->value = 0;
  $export['node_submitted_osu_catalog_publication'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_publication_author';
  $strongarm->value = 0;
  $export['node_submitted_publication_author'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'osu_publication_cover_image_fid';
  $strongarm->value = '';
  $export['osu_publication_cover_image_fid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_account_type_pattern';
  $strongarm->value = '';
  $export['pathauto_node_account_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_osu_catalog_publication_pattern';
  $strongarm->value = '[node:field_series_prefix][node:field-series-number][node:field-series-suffix]';
  $export['pathauto_node_osu_catalog_publication_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:menu-link:parent:url:path]/[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_publication_author_pattern';
  $strongarm->value = 'author/[node:title]';
  $export['pathauto_node_publication_author_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_osu_catalog_media_type_pattern';
  $strongarm->value = 'media-type/[term:root:name]/[term:name]';
  $export['pathauto_taxonomy_term_osu_catalog_media_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_osu_catalog_topic_pattern';
  $strongarm->value = 'topic/[term:root:name]/[term:name]';
  $export['pathauto_taxonomy_term_osu_catalog_topic_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_program_area_pattern';
  $strongarm->value = 'program/[term:root:name]/[term:name]';
  $export['pathauto_taxonomy_term_program_area_pattern'] = $strongarm;

  return $export;
}
