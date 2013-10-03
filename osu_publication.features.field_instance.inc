<?php
/**
 * @file
 * osu_publication.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function osu_publication_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-account_type-field_index_code'
  $field_instances['node-account_type-field_index_code'] = array(
    'bundle' => 'account_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_index_code',
    'label' => 'Index and activity code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_estimate_or_actual'
  $field_instances['node-estimates_expenses-field_estimate_or_actual'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select whether this is an estimate or actual expense.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'ul',
    'field_name' => 'field_estimate_or_actual',
    'label' => 'Estimate or actual',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_expense_amount'
  $field_instances['node-estimates_expenses-field_expense_amount'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_expense_amount',
    'label' => 'Amount',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_full',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_expense_date'
  $field_instances['node-estimates_expenses-field_expense_date'] = array(
    'bundle' => 'estimates_expenses',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'm_d_y',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_expense_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_expense_invoice_date'
  $field_instances['node-estimates_expenses-field_expense_invoice_date'] = array(
    'bundle' => 'estimates_expenses',
    'deleted' => 0,
    'description' => 'EESC accounting staff will enter the invoice date.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'm_d_y',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_expense_invoice_date',
    'label' => 'Invoice date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_expense_invoice_number'
  $field_instances['node-estimates_expenses-field_expense_invoice_number'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'EESC accounting staff will enter the invoice number.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_expense_invoice_number',
    'label' => 'Invoice number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_expense_types'
  $field_instances['node-estimates_expenses-field_expense_types'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the type of expense.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'ul',
    'field_name' => 'field_expense_types',
    'label' => 'Expense types',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_project_reference'
  $field_instances['node-estimates_expenses-field_project_reference'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_project_reference',
    'label' => 'Project Reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_account_type'
  $field_instances['node-osu_catalog_publication-field_account_type'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the primary account for this item. For example, if this is an agriculture publication, select account Publications - Agriculture (TEX667 T721). If you want to record additional details about expenses for this item, do so in the "Estimate and expense notes" field below.<br><em>Note: Account and expense information shown here is for information only. Actual billing and official accounting occur through other OSU systems.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_account_type',
    'label' => 'Account',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_add_to_store'
  $field_instances['node-osu_catalog_publication-field_add_to_store'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If this item will be available to order throgh the Catalog, check this box and then fill out the necessary cost and inventory fields. For SKU, enter the entire series number (e.g., EM 1234-S). For cost and price, enter values with decimal places but without dollar signs (e.g., 1.50 for $1.50).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_add_to_store',
    'label' => 'Add to store',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_alt_series_number'
  $field_instances['node-osu_catalog_publication-field_alt_series_number'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If this project has two series numbers (e.g., a 4-H number and a PNW number), enter the alternate series number here.<br><em>Note: For Oregon 4-H publications, the 4-H series number is the primary series number, and the PNW number is the alternate series number.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_alt_series_number',
    'label' => 'Alt series number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_author_reference'
  $field_instances['node-osu_catalog_publication-field_author_reference'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a few characters of the author name. When you see the correct author listed in the auto-complete list, select it. If author is not found, <a href="/catalog/node/add/publication-author?destination=">add a new author</a>.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_reference',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_companion_resources'
  $field_instances['node-osu_catalog_publication-field_companion_resources'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the place to designate items that should <strong>always</strong> appear together in the Catalog (e.g., other publications in the same set, such as all "Living on the Land" titles). Enter a few characters of the title. When you see the right item listed in the auto-complete list, select it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_companion_resources',
    'label' => 'Companion projects',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_corresponding_author'
  $field_instances['node-osu_catalog_publication-field_corresponding_author'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a few characters of the corresponding author. When you see the right author listed in the auto-complete list, select it. If author is not found, <a href="/catalog/node/add/publication-author?destination=">add a new author</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_corresponding_author',
    'label' => 'Corresponding author',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_date_reviewed'
  $field_instances['node-osu_catalog_publication-field_date_reviewed'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => 'When this project undergoes periodic review and a response from a faculty content specialist is received, record the date here.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'full_month_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_reviewed',
    'label' => 'Date reviewed',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_eesc_produced_purchased'
  $field_instances['node-osu_catalog_publication-field_eesc_produced_purchased'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select whether this project is produced by EESC or purchased from one of our PNW publishing partners.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_eesc_produced_purchased',
    'label' => 'EESC-produced or purchased',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_estimates_expense_notes'
  $field_instances['node-osu_catalog_publication-field_estimates_expense_notes'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any additional notes about the estimates and expenses noted above.<br><em>Note: For example, note that a grant is paying for a portion of printing expenses, or that the author and EESC are sharing contractor expenses.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'summary',
    'field_name' => 'field_estimates_expense_notes',
    'label' => 'Estimate/expense notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_general_notes'
  $field_instances['node-osu_catalog_publication-field_general_notes'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any general notes about this project.<br>
<em>Note: Please use the separate fields provided elsewhere for notes related to periodic review, expenses, and print specifications.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_general_notes',
    'label' => 'General notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_length'
  $field_instances['node-osu_catalog_publication-field_length'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the quantity and type of content (e.g., 6 pages, 5 minutes).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_length',
    'label' => 'Length',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_media_type'
  $field_instances['node-osu_catalog_publication-field_media_type'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the media type (or types) for this project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_media_type',
    'label' => 'Media type',
    'product_catalog' => 1,
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_mode_of_delivery'
  $field_instances['node-osu_catalog_publication-field_mode_of_delivery'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the mode (or modes) of delivery for this project.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_mode_of_delivery',
    'label' => 'Mode of delivery',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_new_or_revised'
  $field_instances['node-osu_catalog_publication-field_new_or_revised'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_new_or_revised',
    'label' => 'New or revised',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_preview_file'
  $field_instances['node-osu_catalog_publication-field_preview_file'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => 'Upload preview PDF if necessary.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_preview_file',
    'label' => 'Preview',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'preview_files',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_print_specs'
  $field_instances['node-osu_catalog_publication-field_print_specs'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter print specifications for future reference.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_print_specs',
    'label' => 'Print specs',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_program_area'
  $field_instances['node-osu_catalog_publication-field_program_area'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the Extension program area for this project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_program_area',
    'label' => 'Program area',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_project_manager'
  $field_instances['node-osu_catalog_publication-field_project_manager'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'ul',
    'field_name' => 'field_project_manager',
    'label' => 'Project manager',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_date'
  $field_instances['node-osu_catalog_publication-field_publication_date'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_publication_date',
    'label' => 'Date published or revised',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_description'
  $field_instances['node-osu_catalog_publication-field_publication_description'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a brief summary of the content. This description appears on the "detail page" for this item in the Catalog.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_publication_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_product'
  $field_instances['node-osu_catalog_publication-field_publication_product'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'default_quantity' => 1,
          'line_item_type' => 0,
          'show_quantity' => 1,
          'show_single_product_attributes' => 1,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publication_product',
    'label' => 'Product',
    'required' => 0,
    'settings' => array(
      'field_injection' => 1,
      'referenceable_types' => array(
        'product' => 'product',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'commerce_product/autocomplete',
        'fields' => array(),
        'size' => 60,
        'type_settings' => array(),
      ),
      'type' => 'inline_entity_form_single',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_status'
  $field_instances['node-osu_catalog_publication-field_publication_status'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Update the status and status date as you work on a project, or when you need to record that it was reviewed.<br>
<em> Note: Record the actual review date and notes about periodic review in the "Publishing information" section.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_publication_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_thumbnail'
  $field_instances['node-osu_catalog_publication-field_publication_thumbnail'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'publication_node',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'figure',
    'field_name' => 'field_publication_thumbnail',
    'label' => 'Cover image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/pubcovers',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'label_help_description' => 'the cover image',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_review_notes'
  $field_instances['node-osu_catalog_publication-field_review_notes'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Record any notes about the status or results of periodic review.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_review_notes',
    'label' => 'Review notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_scholars_archive_url'
  $field_instances['node-osu_catalog_publication-field_scholars_archive_url'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a bitstream URL from ScholarsArchive. For videos, this is often a link to the captioned version in OSU\'s Media Space.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_scholars_archive_url',
    'label' => 'Permanent link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_series_number'
  $field_instances['node-osu_catalog_publication-field_series_number'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'When you create a new project, this field will automatically select the next number (in chronological order) for the series prefix you selected. You can override/edit this if needed. Enter the numeric portion of the series number.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_series_number',
    'label' => 'Series number',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_series_prefix'
  $field_instances['node-osu_catalog_publication-field_series_prefix'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the series prefix (such as EM, PNW, etc.)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_series_prefix',
    'label' => 'Series prefix',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_series_suffix'
  $field_instances['node-osu_catalog_publication-field_series_suffix'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any dashes and letters that come after the numeric portion of the series number.<br>
<em>For example, if the series number is EM 1234-S, enter "-S". If the series number is 4-H 360R, enter "R". For 4-H publications that have a series number with a leading zero, enter the number and suffix. For example, if the series number is 4-H 0244L, enter "0244L".</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_series_suffix',
    'label' => 'Series suffix',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 5,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_status_date'
  $field_instances['node-osu_catalog_publication-field_status_date'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status_date',
    'label' => 'Status date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_supplemental_file'
  $field_instances['node-osu_catalog_publication-field_supplemental_file'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the titles and links for supplemental files (e.g., individual chapters of a lengthy publication or podcasts that go with a written publication).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supplemental_file',
    'label' => 'Supplemental files',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_topic'
  $field_instances['node-osu_catalog_publication-field_topic'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select appropriate topics and subtopics.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_topic',
    'label' => 'Topic',
    'product_catalog' => 1,
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-publication_author-field_author_notes'
  $field_instances['node-publication_author-field_author_notes'] = array(
    'bundle' => 'publication_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-publication_author-field_first_name'
  $field_instances['node-publication_author-field_first_name'] = array(
    'bundle' => 'publication_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-publication_author-field_last_name'
  $field_instances['node-publication_author-field_last_name'] = array(
    'bundle' => 'publication_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'this should really be on the top',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_last_name',
    'label' => 'Last name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Account');
  t('Add to store');
  t('Alt series number');
  t('Amount');
  t('Authors');
  t('Choose the series prefix (such as EM, PNW, etc.)');
  t('Companion projects');
  t('Corresponding author');
  t('Cover image');
  t('Date');
  t('Date published or revised');
  t('Date reviewed');
  t('Description');
  t('EESC accounting staff will enter the invoice date.');
  t('EESC accounting staff will enter the invoice number.');
  t('EESC-produced or purchased');
  t('Enter a brief summary of the content. This description appears on the "detail page" for this item in the Catalog.');
  t('Enter a few characters of the author name. When you see the correct author listed in the auto-complete list, select it. If author is not found, <a href="/catalog/node/add/publication-author?destination=">add a new author</a>.');
  t('Enter a few characters of the corresponding author. When you see the right author listed in the auto-complete list, select it. If author is not found, <a href="/catalog/node/add/publication-author?destination=">add a new author</a>.');
  t('Enter any additional notes about the estimates and expenses noted above.<br><em>Note: For example, note that a grant is paying for a portion of printing expenses, or that the author and EESC are sharing contractor expenses.</em>');
  t('Enter any dashes and letters that come after the numeric portion of the series number.<br>
<em>For example, if the series number is EM 1234-S, enter "-S". If the series number is 4-H 360R, enter "R". For 4-H publications that have a series number with a leading zero, enter the number and suffix. For example, if the series number is 4-H 0244L, enter "0244L".</em>');
  t('Enter any general notes about this project.<br>
<em>Note: Please use the separate fields provided elsewhere for notes related to periodic review, expenses, and print specifications.</em>');
  t('Enter print specifications for future reference.');
  t('Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a bitstream URL from ScholarsArchive. For videos, this is often a link to the captioned version in OSU\'s Media Space.</em>');
  t('Enter the quantity and type of content (e.g., 6 pages, 5 minutes).');
  t('Enter the titles and links for supplemental files (e.g., individual chapters of a lengthy publication or podcasts that go with a written publication).');
  t('Estimate or actual');
  t('Estimate/expense notes');
  t('Expense types');
  t('First name');
  t('General notes');
  t('If this item will be available to order throgh the Catalog, check this box and then fill out the necessary cost and inventory fields. For SKU, enter the entire series number (e.g., EM 1234-S). For cost and price, enter values with decimal places but without dollar signs (e.g., 1.50 for $1.50).');
  t('If this project has two series numbers (e.g., a 4-H number and a PNW number), enter the alternate series number here.<br><em>Note: For Oregon 4-H publications, the 4-H series number is the primary series number, and the PNW number is the alternate series number.</em>');
  t('Index and activity code');
  t('Invoice date');
  t('Invoice number');
  t('Last name');
  t('Length');
  t('Media type');
  t('Mode of delivery');
  t('New or revised');
  t('Notes');
  t('Permanent link');
  t('Preview');
  t('Print specs');
  t('Product');
  t('Program area');
  t('Project Reference');
  t('Project manager');
  t('Record any notes about the status or results of periodic review.');
  t('Review notes');
  t('Select appropriate topics and subtopics.');
  t('Select the Extension program area for this project.');
  t('Select the media type (or types) for this project.');
  t('Select the mode (or modes) of delivery for this project.');
  t('Select the primary account for this item. For example, if this is an agriculture publication, select account Publications - Agriculture (TEX667 T721). If you want to record additional details about expenses for this item, do so in the "Estimate and expense notes" field below.<br><em>Note: Account and expense information shown here is for information only. Actual billing and official accounting occur through other OSU systems.</em>');
  t('Select the type of expense.');
  t('Select whether this is an estimate or actual expense.');
  t('Select whether this project is produced by EESC or purchased from one of our PNW publishing partners.');
  t('Series number');
  t('Series prefix');
  t('Series suffix');
  t('Status');
  t('Status date');
  t('Supplemental files');
  t('This is the place to designate items that should <strong>always</strong> appear together in the Catalog (e.g., other publications in the same set, such as all "Living on the Land" titles). Enter a few characters of the title. When you see the right item listed in the auto-complete list, select it.');
  t('Topic');
  t('Update the status and status date as you work on a project, or when you need to record that it was reviewed.<br>
<em> Note: Record the actual review date and notes about periodic review in the "Publishing information" section.</em>');
  t('Upload preview PDF if necessary.');
  t('When this project undergoes periodic review and a response from a faculty content specialist is received, record the date here.');
  t('When you create a new project, this field will automatically select the next number (in chronological order) for the series prefix you selected. You can override/edit this if needed. Enter the numeric portion of the series number.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>');
  t('this should really be on the top');

  return $field_instances;
}
