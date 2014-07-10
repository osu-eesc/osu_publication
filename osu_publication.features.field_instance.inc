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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-estimates_expenses-field_estimate_quantity'
  $field_instances['node-estimates_expenses-field_estimate_quantity'] = array(
    'bundle' => 'estimates_expenses',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_estimate_quantity',
    'label' => 'Quantity',
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
      'weight' => 13,
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
      'weight' => 12,
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
        'weight' => 32,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
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
        'apply_chosen' => '',
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
    'description' => 'Only the store manager and admins can add and edit "store" information (e.g., cost and inventory).<br>
Changes to store information take effect immediately, so adding/updating this information should be the last thing you do before publishing the project to the Catalog.<br><br>
When you\'re ready (items printed/received or ready in Printables), have cost, sales price, and inventory information handy. Then contact the store manager for assistance.<br>
The store manager will check this box and then fill out the necessary cost and inventory fields (or update these fields if the item already exists).<br><br>
<em><strong>Notes to store manager:</strong></em><br>
<ul><li>If you are changing cost, price, or inventory of an existing item (because of a purchase, revision, reprint, or reduction), make these changes through Store > Products > Product Variations (rather than in the project edit form). Note the reason for the changes in the log message section before saving.</li>
<li>For SKU, enter the entire series number, lowercase and without spaces (e.g., em1234-s).</li>
<li>For cost and price, enter values with decimal places but without dollar sign (e.g., 1.50 for $1.50).</li></ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
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
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_authors_entity_ref'
  $field_instances['node-osu_catalog_publication-field_authors_entity_ref'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_authors_entity_ref',
    'label' => 'Authors',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'delete_references' => 0,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_catman_link'
  $field_instances['node-osu_catalog_publication-field_catman_link'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a bitstream URL from ScholarsArchive. For videos, this is often a link to the captioned version in OSU\'s Media Space.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_catman_link',
    'label' => 'Catman link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'rel_remove_internal',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => 'View online',
      'url' => 'optional',
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 49,
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
        'weight' => 45,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
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
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_corresponding_author'
  $field_instances['node-osu_catalog_publication-field_corresponding_author'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a few characters of the corresponding author\'s name. Then select the correct name from the auto-complete list.<br>
<em> Note: It\'s easiest to confirm that all authors are in the database before creating or editing a project.<br>
If you forget, you can also open a second browser tab, open CatMan, and create and save a new author before returning to this form.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
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
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'token' => array(
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
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_date_reviewed',
    'label' => 'Date reviewed',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
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
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-6:+3',
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
        'weight' => 40,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
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
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_epub_file'
  $field_instances['node-osu_catalog_publication-field_epub_file'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_epub_file',
    'label' => 'ePub file upload',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'epub',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[node:field-series-prefix][node:field-series-number][node:field-series-suffix].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'project/epub',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_estimate_entity_ref'
  $field_instances['node-osu_catalog_publication-field_estimate_entity_ref'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_estimate_entity_ref',
    'label' => 'Estimates and expenses',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'inline_entity_form',
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 0,
          'delete_references' => 1,
          'match_operator' => 'CONTAINS',
        ),
      ),
      'type' => 'inline_entity_form',
      'weight' => 47,
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
        'weight' => 46,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
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
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_excel_file'
  $field_instances['node-osu_catalog_publication-field_excel_file'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_excel_file',
    'label' => 'Excel file upload',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'xls xlsx csv xlsm',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[node:field-series-prefix][node:field-series-number][node:field-series-suffix].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'project/excel',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
      'weight' => 53,
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
        'weight' => 38,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
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

  // Exported field_instance: 'node-osu_catalog_publication-field_html_output'
  $field_instances['node-osu_catalog_publication-field_html_output'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_html_output',
    'label' => 'HTML version',
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
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_length'
  $field_instances['node-osu_catalog_publication-field_length'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the quantity and type of content (e.g., 6 pages, 5 minutes). If length/quantity does not apply (e.g., Pachyderm or other online module, poster, etc.), leave this blank and note the format in the description field.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_link_or_upload'
  $field_instances['node-osu_catalog_publication-field_link_or_upload'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Select "<em>file upload</em>" if this is an OSU Extension publication that will "live" on the CatMan server.<br />
Select "<em>permanent link</em>" if this is a publication that "lives" somewhere else (e.g., PNW publication from WSU or UI, video on OSU\'s Media Space, PNW handbook website).<br />
<strong>Note:</strong> Contact the EESC web team for assistance with uploading and linking to odd stuff (e.g., Pachyderm, audio slideshows).<br />',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_link_or_upload',
    'label' => 'Link or file upload?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_media_type'
  $field_instances['node-osu_catalog_publication-field_media_type'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the media type(s) for this project. You can add more than one.<br>
To remove a media type, click "Remove."',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
        'weight' => 22,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
        'weight' => 27,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
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
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_pdf_file'
  $field_instances['node-osu_catalog_publication-field_pdf_file'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
    'field_name' => 'field_pdf_file',
    'label' => 'PDF file upload',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[node:field-series-prefix][node:field-series-number][node:field-series-suffix].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'project/pdf',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
      'weight' => 50,
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
        'weight' => 48,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_preview_file',
    'label' => 'Preview file upload',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'preview_files',
      'file_extensions' => 'pdf',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[node:field-series-prefix][node:field-series-number][node:field-series-suffix].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'project/preview',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
      'weight' => 52,
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
        'weight' => 47,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
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
      'weight' => 49,
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
        'weight' => 33,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
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
    'description' => 'Select the EESC project manager for this project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
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
        'apply_chosen' => '',
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
        'weight' => 28,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short_month_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
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
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
      'weight' => 6,
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
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 9,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => TRUE,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => FALSE,
          'show_single_product_attributes' => FALSE,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'default_quantity' => 1,
          'line_item_type' => 0,
          'show_quantity' => 0,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
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
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'autogenerate_title' => 0,
          'delete_references' => 1,
          'match_operator' => 'CONTAINS',
          'use_variation_language' => 0,
        ),
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
    'description' => 'Update the status and status date to track major events (e.g., in production, published, reviewed).<br>
<em> Note: For details about status and deadlines when a project is "in production," consult the project manager.<br>Record the actual periodic review date and notes about periodic review in the "Publishing information" section.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
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
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_publication_thumbnail'
  $field_instances['node-osu_catalog_publication-field_publication_thumbnail'] = array(
    'bundle' => 'osu_catalog_publication',
    'deleted' => 0,
    'description' => 'Suggested wording for alt text: Cover image of EM 1234',
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
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'publication_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'publication_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'publication_node',
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
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'images/pubcovers',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
        'weight' => 41,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
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

  // Exported field_instance: 'node-osu_catalog_publication-field_series_number'
  $field_instances['node-osu_catalog_publication-field_series_number'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the numeric portion of the series number.<br>When you create a new project, this field will automatically select the next number (in chronological order) for the series prefix you selected. You can override/edit this if needed.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_series_prefix'
  $field_instances['node-osu_catalog_publication-field_series_prefix'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose the series prefix.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
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
        'apply_chosen' => '',
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
        'weight' => 26,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'token' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
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
      'weight' => 4,
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
        'weight' => 34,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
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
    'deleted' => 0,
    'description' => 'If needed, upload supplemental files (such as individual chapters of a lengthy publication or audio files). Name supplemental files as follows: em1234_chapter1 or em1234_audio1. Add a display title for each file (e.g., Chapter 1).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'token' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_supplemental_file',
    'label' => 'Supplemental content',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => '',
      'file_extensions' => 'pdf mp3',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'project/supplemental/[node:field-series-prefix][node:field-series-number][node:field-series-suffix]',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
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
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_supplemental_link'
  $field_instances['node-osu_catalog_publication-field_supplemental_link'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'TODO: Add help text',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_supplemental_link',
    'label' => 'Supplemental link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'required',
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
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_topic'
  $field_instances['node-osu_catalog_publication-field_topic'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select appropriate topics and subtopics.<br>
First, choose a topic from the dropdown list. Then click "Add."<br>
If the topic has subtopics, a second dropdown list will appear. Select a subtopic, and then click "Add."<br>
To remove a topic, click "Remove."',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'token' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
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
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
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
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
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
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'editablefields',
        'settings' => array(
          'click_to_edit' => FALSE,
          'empty_text' => '',
          'fallback_format' => NULL,
          'fallback_settings' => array(),
        ),
        'type' => 'editable',
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
  t('<p>Select "<em>file upload</em>" if this is an OSU Extension publication that will "live" on the CatMan server.<br />
Select "<em>permanent link</em>" if this is a publication that "lives" somewhere else (e.g., PNW publication from WSU or UI, video on OSU\'s Media Space, PNW handbook website).<br />
<strong>Note:</strong> Contact the EESC web team for assistance with uploading and linking to odd stuff (e.g., Pachyderm, audio slideshows).<br />');
  t('Account');
  t('Add help text');
  t('Add to store');
  t('Alt series number');
  t('Amount');
  t('Authors');
  t('Catman link');
  t('Choose the series prefix.');
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
  t('Enter a few characters of the corresponding author\'s name. Then select the correct name from the auto-complete list.<br>
<em> Note: It\'s easiest to confirm that all authors are in the database before creating or editing a project.<br>
If you forget, you can also open a second browser tab, open CatMan, and create and save a new author before returning to this form.</em>');
  t('Enter any additional notes about the estimates and expenses noted above.<br><em>Note: For example, note that a grant is paying for a portion of printing expenses, or that the author and EESC are sharing contractor expenses.</em>');
  t('Enter any dashes and letters that come after the numeric portion of the series number.<br>
<em>For example, if the series number is EM 1234-S, enter "-S". If the series number is 4-H 360R, enter "R". For 4-H publications that have a series number with a leading zero, enter the number and suffix. For example, if the series number is 4-H 0244L, enter "0244L".</em>');
  t('Enter any general notes about this project.<br>
<em>Note: Please use the separate fields provided elsewhere for notes related to periodic review, expenses, and print specifications.</em>');
  t('Enter print specifications for future reference.');
  t('Enter the numeric portion of the series number.<br>When you create a new project, this field will automatically select the next number (in chronological order) for the series prefix you selected. You can override/edit this if needed.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>');
  t('Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a bitstream URL from ScholarsArchive. For videos, this is often a link to the captioned version in OSU\'s Media Space.</em>');
  t('Enter the quantity and type of content (e.g., 6 pages, 5 minutes). If length/quantity does not apply (e.g., Pachyderm or other online module, poster, etc.), leave this blank and note the format in the description field.');
  t('Estimate or actual');
  t('Estimate/expense notes');
  t('Estimates and expenses');
  t('Excel file upload');
  t('Expense types');
  t('First name');
  t('General notes');
  t('HTML version');
  t('If needed, upload supplemental files (such as individual chapters of a lengthy publication or audio files). Name supplemental files as follows: em1234_chapter1 or em1234_audio1. Add a display title for each file (e.g., Chapter 1).');
  t('If this project has two series numbers (e.g., a 4-H number and a PNW number), enter the alternate series number here.<br><em>Note: For Oregon 4-H publications, the 4-H series number is the primary series number, and the PNW number is the alternate series number.</em>');
  t('Index and activity code');
  t('Invoice date');
  t('Invoice number');
  t('Last name');
  t('Length');
  t('Link or file upload?');
  t('Media type');
  t('Mode of delivery');
  t('New or revised');
  t('Notes');
  t('Only the store manager and admins can add and edit "store" information (e.g., cost and inventory).<br>
Changes to store information take effect immediately, so adding/updating this information should be the last thing you do before publishing the project to the Catalog.<br><br>
When you\'re ready (items printed/received or ready in Printables), have cost, sales price, and inventory information handy. Then contact the store manager for assistance.<br>
The store manager will check this box and then fill out the necessary cost and inventory fields (or update these fields if the item already exists).<br><br>
<em><strong>Notes to store manager:</strong></em><br>
<ul><li>If you are changing cost, price, or inventory of an existing item (because of a purchase, revision, reprint, or reduction), make these changes through Store > Products > Product Variations (rather than in the project edit form). Note the reason for the changes in the log message section before saving.</li>
<li>For SKU, enter the entire series number, lowercase and without spaces (e.g., em1234-s).</li>
<li>For cost and price, enter values with decimal places but without dollar sign (e.g., 1.50 for $1.50).</li></ul>');
  t('PDF file upload');
  t('Preview file upload');
  t('Print specs');
  t('Product');
  t('Program area');
  t('Project manager');
  t('Quantity');
  t('Record any notes about the status or results of periodic review.');
  t('Review notes');
  t('Select appropriate topics and subtopics.<br>
First, choose a topic from the dropdown list. Then click "Add."<br>
If the topic has subtopics, a second dropdown list will appear. Select a subtopic, and then click "Add."<br>
To remove a topic, click "Remove."');
  t('Select the EESC project manager for this project.');
  t('Select the Extension program area for this project.');
  t('Select the media type(s) for this project. You can add more than one.<br>
To remove a media type, click "Remove."');
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
  t('Suggested wording for alt text: Cover image of EM 1234');
  t('Supplemental content');
  t('Supplemental link');
  t('TODO: Add help text');
  t('This is the place to designate items that should <strong>always</strong> appear together in the Catalog (e.g., other publications in the same set, such as all "Living on the Land" titles). Enter a few characters of the title. When you see the right item listed in the auto-complete list, select it.');
  t('Topic');
  t('Update the status and status date to track major events (e.g., in production, published, reviewed).<br>
<em> Note: For details about status and deadlines when a project is "in production," consult the project manager.<br>Record the actual periodic review date and notes about periodic review in the "Publishing information" section.</em>');
  t('Upload preview PDF if necessary.');
  t('When this project undergoes periodic review and a response from a faculty content specialist is received, record the date here.');
  t('ePub file upload');

  return $field_instances;
}
