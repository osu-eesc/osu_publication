<?php
/**
 * @file
 * osu_publication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function osu_publication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'accounts_list';
  $view->description = 'Used on node form for displaying the title and index codes';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Accounts list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_index_code' => 'field_index_code',
    'nothing' => 'nothing',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Index and activity code */
  $handler->display->display_options['fields']['field_index_code']['id'] = 'field_index_code';
  $handler->display->display_options['fields']['field_index_code']['table'] = 'field_data_field_index_code';
  $handler->display->display_options['fields']['field_index_code']['field'] = 'field_index_code';
  $handler->display->display_options['fields']['field_index_code']['label'] = '';
  $handler->display->display_options['fields']['field_index_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_index_code']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_index_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_code']['element_default_classes'] = FALSE;
  /* Field: dropdown list */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'dropdown list';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]  ([field_index_code])';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'account_type' => 'account_type',
  );

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['accounts_list'] = $view;

  $view = new view();
  $view->name = 'catalog_taxonomies';
  $view->description = 'Media Type and Topic views';
  $view->tag = 'catman';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Catman Taxonomies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['exception']['value'] = '';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );

  /* Display: Topic sidebar Block */
  $handler = $view->new_display('block', 'Topic sidebar Block', 'osu_catalog_topic_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Topic';
  $handler->display->display_options['display_description'] = 'Topic sidebar block';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'category/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );

  /* Display: Media Type sidebar block */
  $handler = $view->new_display('block', 'Media Type sidebar block', 'osu_catalog_media_types_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Media Type';
  $handler->display->display_options['display_description'] = 'Media types side bar block.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );

  /* Display: Topic Page */
  $handler = $view->new_display('page', 'Topic Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Topic';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'topics/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'topics';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Browse by Topic';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Media Type Page */
  $handler = $view->new_display('page', 'Media Type Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse by Media Type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'media-types';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Browse by Media Type';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['catalog_taxonomies'] = $view;

  $view = new view();
  $view->name = 'catman_taxonomy_description';
  $view->description = 'displays term description if available';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Catman Taxonomy description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_class'] = 'term-description';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'osu_catalog_topic' => 'osu_catalog_topic',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['catman_taxonomy_description'] = $view;

  $view = new view();
  $view->name = 'next_series_number';
  $view->description = 'returns the next series number using prefix argument';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Next Series Number';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Series number (field_series_number) */
  $handler->display->display_options['sorts']['field_series_number_value']['id'] = 'field_series_number_value';
  $handler->display->display_options['sorts']['field_series_number_value']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['sorts']['field_series_number_value']['field'] = 'field_series_number_value';
  $handler->display->display_options['sorts']['field_series_number_value']['order'] = 'DESC';
  /* Contextual filter: Content: Series prefix (field_series_prefix) */
  $handler->display->display_options['arguments']['field_series_prefix_value']['id'] = 'field_series_prefix_value';
  $handler->display->display_options['arguments']['field_series_prefix_value']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['arguments']['field_series_prefix_value']['field'] = 'field_series_prefix_value';
  $handler->display->display_options['arguments']['field_series_prefix_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_series_prefix_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_series_prefix_value']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_series_prefix_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_prefix_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_prefix_value']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'nextseriesnumber');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['next_series_number'] = $view;

  $view = new view();
  $view->name = 'osu_catalog_homepage';
  $view->description = 'Homepage for OSU catalog, displays the image thumbnail along with series #, title and publish date.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OSU Catalog Homepage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'New Releases';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: series prefix number suffix */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'series prefix number suffix';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_series_prefix] [field_series_number][field_series_suffix] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'publication_thumbnail',
    'image_link' => 'content',
  );
  /* Sort criterion: Content: Date published or revised (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Contextual filter: Content: Topic (field_topic) */
  $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );

  /* Display: Homepage */
  $handler = $view->new_display('page', 'Homepage', 'page');
  $handler->display->display_options['display_description'] = 'The view that controls the homepage.';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>The Oregon State University Extension Catalog is <em>the</em> source for current, peer-reviewed, research-based learning materials published by <a href="http://extension.oregonstate.edu">OSU Extension</a>. It is an active and growing resource, delivering learning materials in a variety of media for use in a variety of outreach and engagement activities and programs. Catalog materials are reviewed regularly (by faculty content experts) and updated as needed.</p><p>You can search, browse by topic or subtopic, and order online. <strong>Questions?</strong> Please review the <a href="/node/2">ordering information</a>, or <a href="/node/1222">contact us</a>.</p><p>&nbsp;</p>

<h2 class="title">New Releases</h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'publication_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_publication_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_prefix']['element_class'] = 'home-series-number';
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['hide_alter_empty'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_number']['element_class'] = 'home-series-number';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_suffix']['element_class'] = 'home-series-number';
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' [field_series_prefix] [field_series_number][field_series_suffix]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'home-series-number';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'home-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_default_classes'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'full_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'new-revised-text';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'node';

  /* Display: Projects by author */
  $handler = $view->new_display('block', 'Projects by author', 'author_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'media';
  $handler->display->display_options['display_description'] = 'list of projects by an author';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'media';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3 class="media-body">Publications authored or co-authored by %1</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authors_entity_ref_target_id']['id'] = 'field_authors_entity_ref_target_id';
  $handler->display->display_options['relationships']['field_authors_entity_ref_target_id']['table'] = 'field_data_field_authors_entity_ref';
  $handler->display->display_options['relationships']['field_authors_entity_ref_target_id']['field'] = 'field_authors_entity_ref_target_id';
  $handler->display->display_options['relationships']['field_authors_entity_ref_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['alter']['path'] = '[nid]';
  $handler->display->display_options['fields']['field_publication_thumbnail']['alter']['link_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_class'] = 'media-object';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_wrapper_class'] = 'pull-left span2';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'publication_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: prefix series suffix */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'prefix series suffix';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_series_prefix] [field_series_number][field_series_suffix]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'media-body';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'media-heading';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'media-body';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_default_classes'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'full_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'new-revised-text';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'media-body';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_publication_description']['id'] = 'field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['table'] = 'field_data_field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['field'] = 'field_publication_description';
  $handler->display->display_options['fields']['field_publication_description']['label'] = '';
  $handler->display->display_options['fields']['field_publication_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_description']['element_wrapper_class'] = 'media-body';
  $handler->display->display_options['fields']['field_publication_description']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_authors_entity_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Authors (field_authors_entity_ref) */
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['id'] = 'field_authors_entity_ref_target_id';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['table'] = 'field_data_field_authors_entity_ref';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['field'] = 'field_authors_entity_ref_target_id';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_authors_entity_ref_target_id']['validate']['type'] = 'node';

  /* Display: Related Resources */
  $handler = $view->new_display('block', 'Related Resources', 'companion_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Resources';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'related-content';
  $handler->display->display_options['display_description'] = 'Displays related/companion resources';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['skin'] = 'osu-video';
  $handler->display->display_options['style_options']['visible'] = '4';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['animation'] = '600';
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Companion projects (field_companion_resources) - reverse */
  $handler->display->display_options['relationships']['reverse_field_companion_resources_node']['id'] = 'reverse_field_companion_resources_node';
  $handler->display->display_options['relationships']['reverse_field_companion_resources_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_companion_resources_node']['field'] = 'reverse_field_companion_resources_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: series prefix number suffix */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'series prefix number suffix';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_series_prefix] [field_series_number][field_series_suffix] ';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h4';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'pub-series-number';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_default_classes'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_publication_date']['element_class'] = 'short-pub-date';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: new-revised-date */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'new-revised-date';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'short-pub-date';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'publication_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_publication_thumbnail']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_companion_resources_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );
  $export['osu_catalog_homepage'] = $view;

  $view = new view();
  $view->name = 'osu_publication_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'catman';
  $view->base_table = 'node';
  $view->human_name = 'Catman Taxonomy term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Submit';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Filter by';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_new_or_revised' => 'field_new_or_revised',
    'field_publication_date' => 'field_publication_date',
  );
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'publication_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_publication_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: full series number */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'full series number';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_series_prefix] [field_series_number][field_series_suffix]';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'home-series-number';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'home-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'full_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: published information */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'published information';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'new-revised-text';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date published or revised (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Media type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator_id'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['label'] = 'Media type (field_media_type)';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['identifier'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'osu_catalog_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'topic_child_term_page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Media type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['value'] = array(
    101 => '101',
    110 => '110',
    97 => '97',
    98 => '98',
  );
  $handler->display->display_options['filters']['field_media_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator_id'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['label'] = 'Media type (field_media_type)';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['identifier'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
    6 => 0,
    5 => 0,
    9 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'osu_catalog_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%/%/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['osu_publication_taxonomy_term'] = $view;

  $view = new view();
  $view->name = 'osu_publication_term_parent';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OSU Catalog Taxonomy term Parent view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'OSU Catalog Taxonomy term Parent view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results found';
  $handler->display->display_options['empty']['area']['content'] = 'Oops, it looks like there\'s nothing related to %1.  Terribly sorry.  Please try another topic.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Taxonomy term: Content using Topic */
  $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* Field: COUNT(Taxonomy term: Name) */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_1']['alter']['text'] = '[name_1] ([name] items)';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['name_1']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['vid']['title'] = '%1';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['vid']['specify_validation'] = TRUE;

  /* Display: Topic Page */
  $handler = $view->new_display('page', 'Topic Page', 'topic_page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Topic */
  $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Page Title */
  $handler->display->display_options['arguments']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['arguments']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent_1']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent_1']['ui_name'] = 'Page Title';
  $handler->display->display_options['arguments']['parent_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['title'] = '%1';
  $handler->display->display_options['arguments']['parent_1']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['breadcrumb'] = '%1';
  $handler->display->display_options['arguments']['parent_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['parent_1']['validate_options']['vocabularies'] = array(
    'osu_catalog_topic' => 'osu_catalog_topic',
    'osu_catalog_media_type' => 0,
  );
  $handler->display->display_options['arguments']['parent_1']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['parent_1']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['parent_1']['validate']['fail'] = 'ignore';
  $handler->display->display_options['path'] = 'category/%';
  $export['osu_publication_term_parent'] = $view;

  $view = new view();
  $view->name = 'project_series_date_length';
  $view->description = 'formats the series number, new/revised, and length and creates fields for links';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Project links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_default_classes'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'full_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_length']['id'] = 'field_length';
  $handler->display->display_options['fields']['field_length']['table'] = 'field_data_field_length';
  $handler->display->display_options['fields']['field_length']['field'] = 'field_length';
  $handler->display->display_options['fields']['field_length']['label'] = '';
  $handler->display->display_options['fields']['field_length']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_length']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_length']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="series-date-length">[field_series_prefix] [field_series_number][field_series_suffix]  &nbsp;&nbsp; 
[field_new_or_revised] [field_publication_date]  &nbsp;&nbsp; 
[field_length]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );

  /* Display: EVA Series number */
  $handler = $view->new_display('entity_view', 'EVA Series number', 'formatted_series_number');
  $handler->display->display_options['display_description'] = 'displays formatted series number and date';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'osu_catalog_publication',
  );

  /* Display: EVA project links */
  $handler = $view->new_display('entity_view', 'EVA project links', 'eva_links');
  $handler->display->display_options['display_description'] = 'Provides links to uploaded files and url links';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: Catman link */
  $handler->display->display_options['fields']['field_catman_link']['id'] = 'field_catman_link';
  $handler->display->display_options['fields']['field_catman_link']['table'] = 'field_data_field_catman_link';
  $handler->display->display_options['fields']['field_catman_link']['field'] = 'field_catman_link';
  $handler->display->display_options['fields']['field_catman_link']['ui_name'] = 'Catman link';
  $handler->display->display_options['fields']['field_catman_link']['label'] = '';
  $handler->display->display_options['fields']['field_catman_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_catman_link']['alter']['text'] = 'View it now';
  $handler->display->display_options['fields']['field_catman_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catman_link']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/view';
  $handler->display->display_options['fields']['field_catman_link']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_catman_link']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_catman_link']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_catman_link']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_catman_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catman_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_catman_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_catman_link']['click_sort_column'] = 'url';
  /* Field: View pdf */
  $handler->display->display_options['fields']['field_pdf_file']['id'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['table'] = 'field_data_field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['field'] = 'field_pdf_file';
  $handler->display->display_options['fields']['field_pdf_file']['ui_name'] = 'View pdf';
  $handler->display->display_options['fields']['field_pdf_file']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['alter']['text'] = 'View it now';
  $handler->display->display_options['fields']['field_pdf_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/viewfile';
  $handler->display->display_options['fields']['field_pdf_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_pdf_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_pdf_file']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_pdf_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pdf_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_file']['click_sort_column'] = 'fid';
  /* Field: Download eBook */
  $handler->display->display_options['fields']['field_epub_file']['id'] = 'field_epub_file';
  $handler->display->display_options['fields']['field_epub_file']['table'] = 'field_data_field_epub_file';
  $handler->display->display_options['fields']['field_epub_file']['field'] = 'field_epub_file';
  $handler->display->display_options['fields']['field_epub_file']['ui_name'] = 'Download eBook';
  $handler->display->display_options['fields']['field_epub_file']['label'] = '';
  $handler->display->display_options['fields']['field_epub_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_epub_file']['alter']['text'] = 'Download eBook';
  $handler->display->display_options['fields']['field_epub_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_epub_file']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/epub';
  $handler->display->display_options['fields']['field_epub_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_epub_file']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_epub_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_epub_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_epub_file']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_epub_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_epub_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_epub_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_epub_file']['click_sort_column'] = 'fid';
  /* Field: Preview PDF */
  $handler->display->display_options['fields']['field_preview_file']['id'] = 'field_preview_file';
  $handler->display->display_options['fields']['field_preview_file']['table'] = 'field_data_field_preview_file';
  $handler->display->display_options['fields']['field_preview_file']['field'] = 'field_preview_file';
  $handler->display->display_options['fields']['field_preview_file']['ui_name'] = 'Preview PDF';
  $handler->display->display_options['fields']['field_preview_file']['label'] = '';
  $handler->display->display_options['fields']['field_preview_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_preview_file']['alter']['text'] = 'See preview';
  $handler->display->display_options['fields']['field_preview_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_preview_file']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/preview';
  $handler->display->display_options['fields']['field_preview_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_preview_file']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_preview_file']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_preview_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_preview_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_preview_file']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_preview_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_preview_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_preview_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_preview_file']['click_sort_column'] = 'fid';
  /* Field: View spreadsheet */
  $handler->display->display_options['fields']['field_excel_file']['id'] = 'field_excel_file';
  $handler->display->display_options['fields']['field_excel_file']['table'] = 'field_data_field_excel_file';
  $handler->display->display_options['fields']['field_excel_file']['field'] = 'field_excel_file';
  $handler->display->display_options['fields']['field_excel_file']['ui_name'] = 'View spreadsheet';
  $handler->display->display_options['fields']['field_excel_file']['label'] = '';
  $handler->display->display_options['fields']['field_excel_file']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_excel_file']['alter']['text'] = 'View spreadsheet';
  $handler->display->display_options['fields']['field_excel_file']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_excel_file']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/excel';
  $handler->display->display_options['fields']['field_excel_file']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_excel_file']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_excel_file']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_excel_file']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_excel_file']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_excel_file']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_excel_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_excel_file']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_excel_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_excel_file']['click_sort_column'] = 'fid';
  /* Field: View online */
  $handler->display->display_options['fields']['field_html_output']['id'] = 'field_html_output';
  $handler->display->display_options['fields']['field_html_output']['table'] = 'field_data_field_html_output';
  $handler->display->display_options['fields']['field_html_output']['field'] = 'field_html_output';
  $handler->display->display_options['fields']['field_html_output']['ui_name'] = 'View online';
  $handler->display->display_options['fields']['field_html_output']['label'] = '';
  $handler->display->display_options['fields']['field_html_output']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_html_output']['alter']['text'] = 'View online';
  $handler->display->display_options['fields']['field_html_output']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_html_output']['alter']['path'] = '[field_series_prefix][field_series_number][field_series_suffix]/html';
  $handler->display->display_options['fields']['field_html_output']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_html_output']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_html_output']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_html_output']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_html_output']['element_class'] = 'catman-link button';
  $handler->display->display_options['fields']['field_html_output']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_html_output']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_html_output']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Workbench Moderation: State */
  $handler->display->display_options['arguments']['state']['id'] = 'state';
  $handler->display->display_options['arguments']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['arguments']['state']['field'] = 'state';
  $handler->display->display_options['arguments']['state']['default_action'] = 'default';
  $handler->display->display_options['arguments']['state']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['state']['default_argument_options']['argument'] = 'published';
  $handler->display->display_options['arguments']['state']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['state']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['state']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['state']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['state']['limit'] = '0';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'osu_catalog_publication',
  );

  /* Display: EVA supplemental content */
  $handler = $view->new_display('entity_view', 'EVA supplemental content', 'eva_supplemental');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'supplemental-content';
  $handler->display->display_options['display_description'] = 'Provides links to uploaded files and url links';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = '<br>';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Supplemental content */
  $handler->display->display_options['fields']['field_supplemental_file']['id'] = 'field_supplemental_file';
  $handler->display->display_options['fields']['field_supplemental_file']['table'] = 'field_data_field_supplemental_file';
  $handler->display->display_options['fields']['field_supplemental_file']['field'] = 'field_supplemental_file';
  $handler->display->display_options['fields']['field_supplemental_file']['label'] = 'Supplemental files';
  $handler->display->display_options['fields']['field_supplemental_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supplemental_file']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supplemental_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_supplemental_file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_supplemental_file']['multi_type'] = 'ul';
  /* Field: Content: Supplemental link */
  $handler->display->display_options['fields']['field_supplemental_link']['id'] = 'field_supplemental_link';
  $handler->display->display_options['fields']['field_supplemental_link']['table'] = 'field_data_field_supplemental_link';
  $handler->display->display_options['fields']['field_supplemental_link']['field'] = 'field_supplemental_link';
  $handler->display->display_options['fields']['field_supplemental_link']['label'] = 'Supplemental links';
  $handler->display->display_options['fields']['field_supplemental_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_supplemental_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_supplemental_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_supplemental_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_supplemental_link']['multi_type'] = 'ul';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'osu_catalog_publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_html');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_prefix']['element_default_classes'] = FALSE;
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['label'] = '';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_suffix']['element_default_classes'] = FALSE;
  /* Field: Content: New or revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_default_classes'] = FALSE;
  /* Field: Content: Date published or revised */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'full_month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Length */
  $handler->display->display_options['fields']['field_length']['id'] = 'field_length';
  $handler->display->display_options['fields']['field_length']['table'] = 'field_data_field_length';
  $handler->display->display_options['fields']['field_length']['field'] = 'field_length';
  $handler->display->display_options['fields']['field_length']['label'] = '';
  $handler->display->display_options['fields']['field_length']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_length']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_length']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="series-date-length">[field_series_prefix] [field_series_number][field_series_suffix]  &nbsp;&nbsp; 
[field_new_or_revised] [field_publication_date]  &nbsp;&nbsp; 
[field_length]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: HTML version */
  $handler->display->display_options['fields']['field_html_output']['id'] = 'field_html_output';
  $handler->display->display_options['fields']['field_html_output']['table'] = 'field_data_field_html_output';
  $handler->display->display_options['fields']['field_html_output']['field'] = 'field_html_output';
  $handler->display->display_options['fields']['field_html_output']['label'] = '';
  $handler->display->display_options['fields']['field_html_output']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_html_output']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );
  $handler->display->display_options['path'] = 'view/%/html';
  $export['project_series_date_length'] = $view;

  $view = new view();
  $view->name = 'suggest_series_number';
  $view->description = 'suggests the next series number';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'suggest_series_number';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Series prefix */
  $handler->display->display_options['fields']['field_series_prefix']['id'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['field'] = 'field_series_prefix';
  $handler->display->display_options['fields']['field_series_prefix']['label'] = '';
  $handler->display->display_options['fields']['field_series_prefix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_prefix']['element_label_colon'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Series suffix */
  $handler->display->display_options['fields']['field_series_suffix']['id'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['table'] = 'field_data_field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['field'] = 'field_series_suffix';
  $handler->display->display_options['fields']['field_series_suffix']['exclude'] = TRUE;
  /* Field: Global: Math expression */
  $handler->display->display_options['fields']['expression']['id'] = 'expression';
  $handler->display->display_options['fields']['expression']['table'] = 'views';
  $handler->display->display_options['fields']['expression']['field'] = 'expression';
  $handler->display->display_options['fields']['expression']['label'] = '';
  $handler->display->display_options['fields']['expression']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['expression']['precision'] = '0';
  $handler->display->display_options['fields']['expression']['separator'] = '';
  $handler->display->display_options['fields']['expression']['expression'] = '[field_series_number] + 1';
  /* Sort criterion: Content: Series number (field_series_number) */
  $handler->display->display_options['sorts']['field_series_number_value']['id'] = 'field_series_number_value';
  $handler->display->display_options['sorts']['field_series_number_value']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['sorts']['field_series_number_value']['field'] = 'field_series_number_value';
  $handler->display->display_options['sorts']['field_series_number_value']['order'] = 'DESC';
  /* Contextual filter: Content: Series prefix (field_series_prefix) */
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['id'] = 'field_series_prefix_value_1';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['table'] = 'field_data_field_series_prefix';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['field'] = 'field_series_prefix_value';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_series_prefix_value_1']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'osu_catalog_publication' => 'osu_catalog_publication',
  );

  /* Display: Next Series Number */
  $handler = $view->new_display('references', 'Next Series Number', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'displays the next number for a new series';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_series');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'displays the next series number for a new series';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_series_prefix' => 'field_series_prefix',
    'field_series_number' => 'field_series_number',
    'field_series_suffix' => 'field_series_suffix',
    'expression' => 'expression',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['suggest_series_number'] = $view;

  $view = new view();
  $view->name = 'term_parent_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term Parent view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Taxonomy Term Parent View %';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'tid' => 'tid',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['fields']['name']['convert_spaces'] = TRUE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  $handler->display->display_options['fields']['tid']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['tid']['format_plural_singular'] = '@count item';
  $handler->display->display_options['fields']['tid']['format_plural_plural'] = '@count items';
  $handler->display->display_options['fields']['tid']['prefix'] = ' ( ';
  $handler->display->display_options['fields']['tid']['suffix'] = ' )';
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name_1']['id'] = 'name_1';
  $handler->display->display_options['arguments']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name_1']['field'] = 'name';
  $handler->display->display_options['arguments']['name_1']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name_1']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name_1']['title'] = '%1';
  $handler->display->display_options['arguments']['name_1']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['name_1']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['name_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name_1']['validate_options']['vocabularies'] = array(
    'osu_catalog_topic' => 'osu_catalog_topic',
  );
  $handler->display->display_options['arguments']['name_1']['validate']['fail'] = 'summary';
  $handler->display->display_options['arguments']['name_1']['limit'] = '0';
  $export['term_parent_view'] = $view;

  return $export;
}
