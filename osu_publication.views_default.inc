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
  $view->name = 'catalog_taxonomies';
  $view->description = 'Media Type and Topic views';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Catalog Taxonomies';
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
  $handler->display->display_options['fields']['name']['alter']['path'] = 'category/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
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
  $handler->display->display_options['fields']['name']['alter']['path'] = 'category/[name]';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
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
  $handler->display->display_options['menu']['name'] = 'menu-browse';

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
  $handler->display->display_options['menu']['name'] = 'menu-browse';
  $export['catalog_taxonomies'] = $view;

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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
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
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['label'] = '';
  $handler->display->display_options['fields']['field_media_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['delta_offset'] = '0';
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_wrapper_class'] = 'media-type-[field_media_type]';
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['path'] = 'node';

  /* Display: Related publications footer block */
  $handler = $view->new_display('block', 'Related publications footer block', 'related_publications_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'You may also be interested in:';
  $handler->display->display_options['display_description'] = 'Block of related publications';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_topic]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_series_number']['element_wrapper_class'] = 'related-publications-series-number';
  $handler->display->display_options['fields']['field_series_number']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'related-publications-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_wrapper_class'] = 'related-publications-thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['relationship'] = 'field_related_publications_nid';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_topic']['element_class'] = 'related-publications-topic-term';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Topic (field_topic) */
  $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_options']['code'] = 'if ($node = menu_get_object()) {
  $terms = field_get_items(\'node\', $node, \'field_topic\');
  if(!empty($terms[0])){
    $term = $terms[0];
    return $term[\'tid\'];
  }
  else{
    return;
  }
}';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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

  /* Display: Companion Resources block */
  $handler = $view->new_display('block', 'Companion Resources block', 'companion_resources_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Companion resources';
  $handler->display->display_options['display_description'] = 'Block of Companion Resources ';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_topic';
  $handler->display->display_options['style_options']['row_class'] = 'related-publications-topic';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Companion projects (field_companion_resources) */
  $handler->display->display_options['relationships']['field_companion_resources_nid']['id'] = 'field_companion_resources_nid';
  $handler->display->display_options['relationships']['field_companion_resources_nid']['table'] = 'field_data_field_companion_resources';
  $handler->display->display_options['relationships']['field_companion_resources_nid']['field'] = 'field_companion_resources_nid';
  $handler->display->display_options['relationships']['field_companion_resources_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_companion_resources_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['field_media_type']['label'] = '';
  $handler->display->display_options['fields']['field_media_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_companion_resources_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'related-publications-title [field_media_type]';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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

  /* Display: Publication right sidebar block */
  $handler = $view->new_display('block', 'Publication right sidebar block', 'publication_sidebar_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'View it Now Block';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_topic';
  $handler->display->display_options['style_options']['row_class'] = 'related-publications-topic';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Assets */
  $handler->display->display_options['fields']['field_assets']['id'] = 'field_assets';
  $handler->display->display_options['fields']['field_assets']['table'] = 'field_data_field_assets';
  $handler->display->display_options['fields']['field_assets']['field'] = 'field_assets';
  $handler->display->display_options['fields']['field_assets']['label'] = '';
  $handler->display->display_options['fields']['field_assets']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_assets']['alter']['text'] = 'View it now for free';
  $handler->display->display_options['fields']['field_assets']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_assets']['alter']['path'] = '[field_assets-url]';
  $handler->display->display_options['fields']['field_assets']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_assets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assets']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_assets']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_assets']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_assets']['delta_offset'] = '0';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler = $view->new_display('page', 'Homepage', 'osu_catalog_homepage');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'clearfix';
  $handler->display->display_options['display_description'] = 'The view that controls the homepage.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'pub-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['separator'] = ' &nbsp; ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_wrapper_class'] = 'media-type-[field_media_type] right';
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'pub_list_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  /* Field: Content: New or Revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_new_or_revised']['hide_empty'] = TRUE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Media Type */
  $handler->display->display_options['fields']['field_media_type']['id'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['fields']['field_media_type']['field'] = 'field_media_type';
  $handler->display->display_options['fields']['field_media_type']['label'] = '';
  $handler->display->display_options['fields']['field_media_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_media_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_media_type']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_new_or_revised]  [field_publication_date] ';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date published (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'node';

  /* Display: Assets table Block */
  $handler = $view->new_display('block', 'Assets table Block', 'publication_assets_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_series_number' => 'field_series_number',
    'title' => 'title',
    'field_publication_date' => 'field_publication_date',
    'field_publication_thumbnail' => 'field_publication_thumbnail',
    'field_topic' => 'field_topic',
    'field_assets' => 'field_assets',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_series_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_publication_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_publication_thumbnail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_topic' => array(
      'align' => '',
      'separator' => '',
    ),
    'field_assets' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'Links to publication assets ';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Assets */
  $handler->display->display_options['fields']['field_assets']['id'] = 'field_assets';
  $handler->display->display_options['fields']['field_assets']['table'] = 'field_data_field_assets';
  $handler->display->display_options['fields']['field_assets']['field'] = 'field_assets';
  $handler->display->display_options['fields']['field_assets']['label'] = 'Title';
  $handler->display->display_options['fields']['field_assets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assets']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_assets']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_assets']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_assets']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_assets']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_assets']['delta_offset'] = '0';
  /* Field: Content: Assets */
  $handler->display->display_options['fields']['field_assets_1']['id'] = 'field_assets_1';
  $handler->display->display_options['fields']['field_assets_1']['table'] = 'field_data_field_assets';
  $handler->display->display_options['fields']['field_assets_1']['field'] = 'field_assets';
  $handler->display->display_options['fields']['field_assets_1']['label'] = 'View it now';
  $handler->display->display_options['fields']['field_assets_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_assets_1']['alter']['text'] = 'View it now';
  $handler->display->display_options['fields']['field_assets_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_assets_1']['alter']['path'] = '[field_assets_1-url]';
  $handler->display->display_options['fields']['field_assets_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_assets_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_assets_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_assets_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_assets_1']['delta_offset'] = '0';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Assets (field_assets:attributes) */
  $handler->display->display_options['filters']['field_assets_attributes']['id'] = 'field_assets_attributes';
  $handler->display->display_options['filters']['field_assets_attributes']['table'] = 'field_data_field_assets';
  $handler->display->display_options['filters']['field_assets_attributes']['field'] = 'field_assets_attributes';
  $handler->display->display_options['filters']['field_assets_attributes']['operator'] = 'not empty';

  /* Display: Related Publications second term Attachment */
  $handler = $view->new_display('attachment', 'Related Publications second term Attachment', 'related_publications_block_second_term');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_topic]';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_series_number']['hide_alter_empty'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Topic (field_topic) */
  $handler->display->display_options['arguments']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['arguments']['field_topic_tid']['field'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_topic_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_topic_tid']['default_argument_options']['code'] = 'if ($node = menu_get_object()) {
  $terms = field_get_items(\'node\', $node, \'field_topic\');
  if(!empty($terms[1])){
    $term = $terms[1];
    return $term[\'tid\'];
  }
  else{
    return;
  }
}';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_topic_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_topic_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['displays'] = array(
    'related_publications_block' => 'related_publications_block',
    'default' => 0,
    'page' => 0,
    'companion_resources_block' => 0,
    'publication_commerce_block' => 0,
    'osu_catalog_homepage' => 0,
    'publication_assets_block' => 0,
    'related_publications_block_second_term' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Commerce right sidebar block */
  $handler = $view->new_display('block', 'Commerce right sidebar block', 'publication_sidebar_commerce_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Block of Price and Add to Cart button';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_topic';
  $handler->display->display_options['style_options']['row_class'] = 'related-publications-topic';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Referenced product */
  $handler->display->display_options['relationships']['field_publication_product_product_id']['id'] = 'field_publication_product_product_id';
  $handler->display->display_options['relationships']['field_publication_product_product_id']['table'] = 'field_data_field_publication_product';
  $handler->display->display_options['relationships']['field_publication_product_product_id']['field'] = 'field_publication_product_product_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_publication_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['alter']['text'] = 'Price: [commerce_price] ';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Add to Cart button */
  $handler->display->display_options['fields']['field_publication_product']['id'] = 'field_publication_product';
  $handler->display->display_options['fields']['field_publication_product']['table'] = 'field_data_field_publication_product';
  $handler->display->display_options['fields']['field_publication_product']['field'] = 'field_publication_product';
  $handler->display->display_options['fields']['field_publication_product']['ui_name'] = 'Add to Cart button';
  $handler->display->display_options['fields']['field_publication_product']['label'] = '';
  $handler->display->display_options['fields']['field_publication_product']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_product']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_publication_product']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 0,
  );
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['relationship'] = 'field_publication_product_product_id';
  $handler->display->display_options['filters']['commerce_price_amount']['operator'] = '>';
  $handler->display->display_options['filters']['commerce_price_amount']['value']['value'] = '0.00';

  /* Display: New Releases */
  $handler = $view->new_display('block', 'New Releases', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'pub-list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date published (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  $export['osu_catalog_homepage'] = $view;

  $view = new view();
  $view->name = 'osu_publication_taxonomy_term';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OSU Taxonomy term';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'pub-list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Cover image */
  $handler->display->display_options['fields']['field_publication_thumbnail']['id'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['table'] = 'field_data_field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['field'] = 'field_publication_thumbnail';
  $handler->display->display_options['fields']['field_publication_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_publication_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_publication_thumbnail']['settings'] = array(
    'image_style' => 'pub_list_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Series number */
  $handler->display->display_options['fields']['field_series_number']['id'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['table'] = 'field_data_field_series_number';
  $handler->display->display_options['fields']['field_series_number']['field'] = 'field_series_number';
  $handler->display->display_options['fields']['field_series_number']['label'] = '';
  $handler->display->display_options['fields']['field_series_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: New or Revised */
  $handler->display->display_options['fields']['field_new_or_revised']['id'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['table'] = 'field_data_field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['field'] = 'field_new_or_revised';
  $handler->display->display_options['fields']['field_new_or_revised']['label'] = '';
  $handler->display->display_options['fields']['field_new_or_revised']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_new_or_revised']['element_label_colon'] = FALSE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_new_or_revised] [field_publication_date]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date published (field_publication_date) */
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
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator_id'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['label'] = 'Filter by';
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
  /* Filter criterion: Content: Media Type (field_media_type) */
  $handler->display->display_options['filters']['field_media_type_tid']['id'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['table'] = 'field_data_field_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['field'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator_id'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['label'] = 'Filter by';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['operator'] = 'field_media_type_tid_op';
  $handler->display->display_options['filters']['field_media_type_tid']['expose']['identifier'] = 'field_media_type_tid';
  $handler->display->display_options['filters']['field_media_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_media_type_tid']['vocabulary'] = 'osu_catalog_media_type';
  $handler->display->display_options['filters']['field_media_type_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'taxonomy/term/%';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 15;
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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

  return $export;
}
