<?php
/**
 * @file
 * osu_publication.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function osu_publication_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project information',
    'weight' => '0',
    'children' => array(
      0 => 'field_length',
      1 => 'field_media_type',
      2 => 'field_topic',
      3 => 'field_series_prefix',
      4 => 'field_series_suffix',
      5 => 'field_publication_description',
      6 => 'field_series_number',
      7 => 'field_alt_series_number',
      8 => 'field_publication_thumbnail',
      9 => 'field_authors_entity_ref',
      10 => 'field_full_series_number',
      11 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-basic field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_basic|node|osu_catalog_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_estimate_expenses|node|estimates_expenses|form';
  $field_group->group_name = 'group_estimate_expenses';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'estimates_expenses';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estimates and Expenses',
    'weight' => '0',
    'children' => array(
      0 => 'field_expense_types',
      1 => 'field_expense_amount',
      2 => 'field_expense_date',
      3 => 'field_expense_invoice_number',
      4 => 'field_expense_invoice_date',
      5 => 'field_estimate_or_actual',
      6 => 'field_estimate_quantity',
      7 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Estimates and Expenses',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-estimate-expenses field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_estimate_expenses|node|estimates_expenses|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_estimates|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_estimates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Estimates, expenses, and production',
    'weight' => '4',
    'children' => array(
      0 => 'field_account_type',
      1 => 'field_estimates_expense_notes',
      2 => 'field_print_specs',
      3 => 'field_estimate_entity_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-estimates field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_estimates|node|osu_catalog_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project admin',
    'weight' => '1',
    'children' => array(
      0 => 'field_project_manager',
      1 => 'field_general_notes',
      2 => 'field_publication_status',
      3 => 'field_corresponding_author',
      4 => 'field_program_area',
      5 => 'field_status_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-general field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_general|node|osu_catalog_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_html|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_html';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HTML',
    'weight' => '5',
    'children' => array(
      0 => 'field_html_output',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-html field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_html|node|osu_catalog_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links and companion projects',
    'weight' => '3',
    'children' => array(
      0 => 'field_companion_resources',
      1 => 'field_preview_file',
      2 => 'field_link_or_upload',
      3 => 'field_catman_link',
      4 => 'field_supplemental_file',
      5 => 'field_supplemental_link',
      6 => 'field_epub_file',
      7 => 'field_pdf_file',
      8 => 'field_excel_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_links|node|osu_catalog_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing|node|osu_catalog_publication|form';
  $field_group->group_name = 'group_publishing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'osu_catalog_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing information',
    'weight' => '2',
    'children' => array(
      0 => 'field_date_reviewed',
      1 => 'field_new_or_revised',
      2 => 'field_publication_date',
      3 => 'field_eesc_produced_purchased',
      4 => 'field_review_notes',
      5 => 'field_mode_of_delivery',
      6 => 'field_add_to_store',
      7 => 'field_publication_product',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Publishing information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-publishing field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_publishing|node|osu_catalog_publication|form'] = $field_group;

  return $export;
}
