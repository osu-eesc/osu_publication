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
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
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
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
        'settings' => array(),
        'type' => 'hidden',
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
    'description' => 'Describe the quantity or scope (e.g., number of copies, copies per year, hours, or illustrations).',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'inline',
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
    'description' => 'Use two decimal places, no dollar sign.',
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
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'inline',
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
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'inline',
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
        'label_position' => 'none',
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
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
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
    'label' => 'Invoice paid date',
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
        'label_position' => 'none',
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
    'description' => 'EESC accounting staff will enter the invoice number and date the invoice was paid.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
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
    'description' => 'Select the type of estimate or expense.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'inline',
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
    'field_name' => 'field_expense_types',
    'label' => 'Estimate or expense type',
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
    'description' => 'Select the primary account for this item. For example, if this is an agriculture publication, select account Publications - Agriculture (TEX667 T721).<br>
<em>Note: Account, estimate, and expense information shown here is for information only. Actual billing, payment, and accounting occur through other OSU systems.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'rss' => array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
        'apply_chosen' => 1,
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
    'description' => '<em><strong>Notes to store manager:</strong></em><br>
<ul><li>If you are changing cost, price, or inventory of an existing item (because of a purchase, revision, reprint, or reduction): <br />Make these changes through Store > <a href="/admin/commerce/products/variations"><strong>Products</strong></a> > edit. Note the reason for the changes in a log message before saving.</li>
<li><strong>Remember:</strong> Changes to store information take effect immediately (no moderation). <br />For existing projects, make these changes during final review, right before publication.</li></ul>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
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
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
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
      'weight' => 7,
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_catman_link'
  $field_instances['node-osu_catalog_publication-field_catman_link'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a link to WSU or Idaho\'s Catalog. For videos, this is often a link to the captioned version in OSU\'s Media Space (or for newer videos, to YouTube).</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
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
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
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
      'title_label_use_field_label' => 0,
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
        'weight' => 51,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
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
Remember, you can add new authors in the "Project Information" fieldset and from your workbench.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
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
        'weight' => 7,
      ),
      'full' => array(
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
        'weight' => 11,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'search_index' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
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
    'label' => 'Reviewed',
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
        'weight' => 46,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
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
        'apply_chosen' => 1,
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
        'weight' => 58,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
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
        'weight' => 23,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
        'apply_chosen' => '',
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
    'description' => 'Enter any additional notes about the estimates and expenses above.<br>
Also enter notes regarding special cost/copy or sales price circumstances.<br>
<em>For example, note that the author and EESC are sharing contractor expenses, or that our PNW partners pay a special price (e.g. as for the PNW handbooks).</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
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
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
        'weight' => 59,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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

  // Exported field_instance: 'node-osu_catalog_publication-field_full_series_number'
  $field_instances['node-osu_catalog_publication-field_full_series_number'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Combined value of series prefix, number, and suffix',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'hidden',
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_full_series_number',
    'label' => 'Full series number',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_general_notes'
  $field_instances['node-osu_catalog_publication-field_general_notes'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter any general notes about this project.<br>
<em>Note: Please use the designated fields in other fieldsets for notes related to periodic review, expenses, and print specifications.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
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
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
        'weight' => 56,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
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
        'weight' => 36,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_link_or_upload'
  $field_instances['node-osu_catalog_publication-field_link_or_upload'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<p>Select "<em>file upload</em>" if this is an OSU Extension publication that will live on the CatMan server.<br />
Select "<em>permanent link</em>" if this is a publication that lives somewhere else (e.g., PNW publication from WSU or UI, video on OSU\'s Media Space, PNW handbook website).<br />
Contact a CatMan admin for assistance with uploading and linking to odd stuff (e.g., Pachyderm, audio slideshows).<br />
<strong>Remember:</strong> Changes to files and links take effect immediately (no moderation). For existing projects, make these changes during final review, right before publication.</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
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
        'weight' => 49,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_rss_category',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
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
      'weight' => 12,
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
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
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
    'description' => 'If this is a new Catalog item, select "published."<br>
If this is a revised Catalog item, select "revised."',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
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
        'apply_chosen' => 1,
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
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
        'weight' => 54,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
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
        'weight' => 53,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
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
        'weight' => 39,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'rss' => array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
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
    'fences_wrapper' => 'ul',
    'field_name' => 'field_program_area',
    'label' => 'Program area',
    'product_catalog' => 1,
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
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'rss' => array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
        'apply_chosen' => 1,
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
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'rss_date',
        'settings' => array(
          'rss_element' => 'dc:date',
        ),
        'type' => 'rss_date',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(),
        'type' => 'date_plain',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'full_month_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 4,
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
        'input_format' => 'm/d/Y - H:i:s',
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
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_trimmed',
        'weight' => 5,
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
    'fences_wrapper' => 'p',
    'field_name' => 'field_publication_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
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
        'label' => 'above',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => 1,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'commerce_cart',
        'settings' => array(
          'combine' => 1,
          'default_quantity' => 1,
          'line_item_type' => 'product',
          'show_quantity' => 1,
          'show_single_product_attributes' => 0,
        ),
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => 14,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
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
        'apply_chosen' => '',
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => FALSE,
          'autogenerate_title' => 1,
          'delete_references' => 1,
          'label_plural' => 'products',
          'label_singular' => 'product',
          'match_operator' => 'CONTAINS',
          'override_labels' => 0,
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
<em> Note: For details about status and deadlines when a project is "in production," consult the project manager.<br>Record the actual periodic review date and notes about periodic review in the "Publishing information" fieldset.</em>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
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
    'description' => 'Suggested wording for alt text: Cover image of "Title" publication',
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'publication_node',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'rss_thumbnail_300',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
        'preview_image_style' => 'cover_preview',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_radioactivity'
  $field_instances['node-osu_catalog_publication-field_radioactivity'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 2000,
        'radioactivity_timestamp' => 1408733961,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
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
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => FALSE,
    'settings' => array(
      'history' => 1,
      'history_limit' => 8,
      'profile' => 'default_daily',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'node-osu_catalog_publication-field_review_notes'
  $field_instances['node-osu_catalog_publication-field_review_notes'] = array(
    'bundle' => 'osu_catalog_publication',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Above, record the date that a review response is received from the faculty content specialist.<br>
Here, record any notes about the status or results of periodic review, and note when a revision proposal is received. Examples:<br>
1-1-15: Asked John Doe to review. 1-24-15: John reviewed. OK for 4 years.<br>
1-1-15: Asked Jane Doe to review. 1-24-15: Jane reviewed. OK for 1 year. Remove from Catalog if no revision proposal rec\'d by Jan. 2016.<br>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
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
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
    'description' => 'Enter the numeric portion of the series number.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
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
      'weight' => 4,
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
        'weight' => 30,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
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
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 3,
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
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
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
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'rss' => array(
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
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
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
    'description' => 'If needed, upload supplemental files (such as individual chapters of a lengthy publication or audio files). Name supplemental files as follows: em1234-chapter1 or em1234-audio1. Add a display title for each file (e.g., Chapter 1).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
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
      'file_extensions' => 'pdf mp3 mp4 xls xlsx',
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
    'description' => 'Provide a title and full URL (http://example.com) for the link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
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
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
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
      'title_label_use_field_label' => 0,
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
First, choose a main topic from the dropdown list. Then click "Add."<br>
If the topic has subtopics, a second dropdown list will appear. Select a subtopic, and then click "Add."<br>
Click "Add" once more to confirm. This will add the topic/subtopic pair to this project. You should see it listed below.<br>
To remove a topic, click "Remove."',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_rss_category',
        'weight' => 8,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_text',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-publication_author-field_author_notes'
  $field_instances['node-publication_author-field_author_notes'] = array(
    'bundle' => 'publication_author',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For reference, enter author\'s title and affiliation, following the format specified in the EESC publishing style guide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
    'field_name' => 'field_author_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
    'description' => 'Enter first name and middle initial, if any.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
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
    'fences_wrapper' => 'div',
    'field_name' => 'field_first_name',
    'label' => 'First name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
    'description' => 'Enter last name, or team name (e.g., PNW 4-H Horse Curriculum Team).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'search_result' => array(
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
      'better_formats' => array(
        'allowed_formats' => array(
          'commerce_order_message' => 'commerce_order_message',
          'emogrifier' => 'emogrifier',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'commerce_order_message' => array(
              'weight' => -6,
            ),
            'emogrifier' => array(
              'weight' => -7,
            ),
            'filtered_html' => array(
              'weight' => -9,
            ),
            'full_html' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -5,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
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
  t('<em><strong>Notes to store manager:</strong></em><br>
<ul><li>If you are changing cost, price, or inventory of an existing item (because of a purchase, revision, reprint, or reduction): <br />Make these changes through Store > <a href="/admin/commerce/products/variations"><strong>Products</strong></a> > edit. Note the reason for the changes in a log message before saving.</li>
<li><strong>Remember:</strong> Changes to store information take effect immediately (no moderation). <br />For existing projects, make these changes during final review, right before publication.</li></ul>');
  t('<p>Select "<em>file upload</em>" if this is an OSU Extension publication that will live on the CatMan server.<br />
Select "<em>permanent link</em>" if this is a publication that lives somewhere else (e.g., PNW publication from WSU or UI, video on OSU\'s Media Space, PNW handbook website).<br />
Contact a CatMan admin for assistance with uploading and linking to odd stuff (e.g., Pachyderm, audio slideshows).<br />
<strong>Remember:</strong> Changes to files and links take effect immediately (no moderation). For existing projects, make these changes during final review, right before publication.</p>');
  t('Above, record the date that a review response is received from the faculty content specialist.<br>
Here, record any notes about the status or results of periodic review, and note when a revision proposal is received. Examples:<br>
1-1-15: Asked John Doe to review. 1-24-15: John reviewed. OK for 4 years.<br>
1-1-15: Asked Jane Doe to review. 1-24-15: Jane reviewed. OK for 1 year. Remove from Catalog if no revision proposal rec\'d by Jan. 2016.<br>');
  t('Account');
  t('Add to store');
  t('Alt series number');
  t('Amount');
  t('Authors');
  t('Catman link');
  t('Choose the series prefix.');
  t('Combined value of series prefix, number, and suffix');
  t('Companion projects');
  t('Corresponding author');
  t('Cover image');
  t('Date');
  t('Date published or revised');
  t('Describe the quantity or scope (e.g., number of copies, copies per year, hours, or illustrations).');
  t('Description');
  t('EESC accounting staff will enter the invoice date.');
  t('EESC accounting staff will enter the invoice number and date the invoice was paid.');
  t('EESC-produced or purchased');
  t('Enter a brief summary of the content. This description appears on the "detail page" for this item in the Catalog.');
  t('Enter a few characters of the corresponding author\'s name. Then select the correct name from the auto-complete list.<br>
<em> Note: It\'s easiest to confirm that all authors are in the database before creating or editing a project.<br>
Remember, you can add new authors in the "Project Information" fieldset and from your workbench.</em>');
  t('Enter any additional notes about the estimates and expenses above.<br>
Also enter notes regarding special cost/copy or sales price circumstances.<br>
<em>For example, note that the author and EESC are sharing contractor expenses, or that our PNW partners pay a special price (e.g. as for the PNW handbooks).</em>');
  t('Enter any dashes and letters that come after the numeric portion of the series number.<br>
<em>For example, if the series number is EM 1234-S, enter "-S". If the series number is 4-H 360R, enter "R". For 4-H publications that have a series number with a leading zero, enter the number and suffix. For example, if the series number is 4-H 0244L, enter "0244L".</em>');
  t('Enter any general notes about this project.<br>
<em>Note: Please use the designated fields in other fieldsets for notes related to periodic review, expenses, and print specifications.</em>');
  t('Enter first name and middle initial, if any.');
  t('Enter last name, or team name (e.g., PNW 4-H Horse Curriculum Team).');
  t('Enter print specifications for future reference.');
  t('Enter the numeric portion of the series number.<br>
<em>Note: For 4-H publications that have a series number with a leading zero (e.g., 4-H 0244L), do not enter anything in this field, and enter the number and suffix in the suffix field.</em>');
  t('Enter the permanent link for the item.<br>
<em>Note: For publications, this is often a link to WSU or Idaho\'s Catalog. For videos, this is often a link to the captioned version in OSU\'s Media Space (or for newer videos, to YouTube).</em>');
  t('Enter the quantity and type of content (e.g., 6 pages, 5 minutes). If length/quantity does not apply (e.g., Pachyderm or other online module, poster, etc.), leave this blank and note the format in the description field.');
  t('Estimate or actual');
  t('Estimate or expense type');
  t('Estimate/expense notes');
  t('Estimates and expenses');
  t('Excel file upload');
  t('First name');
  t('For reference, enter author\'s title and affiliation, following the format specified in the EESC publishing style guide.');
  t('Full series number');
  t('General notes');
  t('HTML version');
  t('If needed, upload supplemental files (such as individual chapters of a lengthy publication or audio files). Name supplemental files as follows: em1234-chapter1 or em1234-audio1. Add a display title for each file (e.g., Chapter 1).');
  t('If this is a new Catalog item, select "published."<br>
If this is a revised Catalog item, select "revised."');
  t('If this project has two series numbers (e.g., a 4-H number and a PNW number), enter the alternate series number here.<br><em>Note: For Oregon 4-H publications, the 4-H series number is the primary series number, and the PNW number is the alternate series number.</em>');
  t('Index and activity code');
  t('Invoice number');
  t('Invoice paid date');
  t('Last name');
  t('Length');
  t('Link or file upload?');
  t('Media type');
  t('Mode of delivery');
  t('New or revised');
  t('Notes');
  t('PDF file upload');
  t('Preview file upload');
  t('Print specs');
  t('Product');
  t('Program area');
  t('Project manager');
  t('Provide a title and full URL (http://example.com) for the link.');
  t('Quantity');
  t('Radioactivity');
  t('Review notes');
  t('Reviewed');
  t('Select appropriate topics and subtopics.<br>
First, choose a main topic from the dropdown list. Then click "Add."<br>
If the topic has subtopics, a second dropdown list will appear. Select a subtopic, and then click "Add."<br>
Click "Add" once more to confirm. This will add the topic/subtopic pair to this project. You should see it listed below.<br>
To remove a topic, click "Remove."');
  t('Select the EESC project manager for this project.');
  t('Select the Extension program area for this project.');
  t('Select the media type(s) for this project. You can add more than one.<br>
To remove a media type, click "Remove."');
  t('Select the mode (or modes) of delivery for this project.');
  t('Select the primary account for this item. For example, if this is an agriculture publication, select account Publications - Agriculture (TEX667 T721).<br>
<em>Note: Account, estimate, and expense information shown here is for information only. Actual billing, payment, and accounting occur through other OSU systems.</em>');
  t('Select the type of estimate or expense.');
  t('Select whether this is an estimate or actual expense.');
  t('Select whether this project is produced by EESC or purchased from one of our PNW publishing partners.');
  t('Series number');
  t('Series prefix');
  t('Series suffix');
  t('Status');
  t('Status date');
  t('Suggested wording for alt text: Cover image of "Title" publication');
  t('Supplemental content');
  t('Supplemental link');
  t('This is the place to designate items that should <strong>always</strong> appear together in the Catalog (e.g., other publications in the same set, such as all "Living on the Land" titles). Enter a few characters of the title. When you see the right item listed in the auto-complete list, select it.');
  t('Topic');
  t('Update the status and status date to track major events (e.g., in production, published, reviewed).<br>
<em> Note: For details about status and deadlines when a project is "in production," consult the project manager.<br>Record the actual periodic review date and notes about periodic review in the "Publishing information" fieldset.</em>');
  t('Upload preview PDF if necessary.');
  t('Use two decimal places, no dollar sign.');
  t('When this project undergoes periodic review and a response from a faculty content specialist is received, record the date here.');
  t('ePub file upload');

  return $field_instances;
}
