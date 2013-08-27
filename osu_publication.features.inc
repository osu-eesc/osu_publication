<?php
/**
 * @file
 * osu_publication.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function osu_publication_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function osu_publication_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function osu_publication_image_default_styles() {
  $styles = array();

  // Exported image style: publication_node.
  $styles['publication_node'] = array(
    'name' => 'publication_node',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: publication_thumbnail.
  $styles['publication_thumbnail'] = array(
    'name' => 'publication_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 80,
          'height' => 120,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function osu_publication_node_info() {
  $items = array(
    'account_type' => array(
      'name' => t('Account Types'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Account name'),
      'help' => '',
    ),
    'estimates_expenses' => array(
      'name' => t('Estimates and Expenses'),
      'base' => 'node_content',
      'description' => t('Enter a brief title for this expense.'),
      'has_title' => '1',
      'title_label' => t('Estimate title'),
      'help' => '',
    ),
    'osu_catalog_publication' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => t('Use for adding and editing projects that will be published in the OSU Extension Catalog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publication_author' => array(
      'name' => t('Author'),
      'base' => 'node_content',
      'description' => t('Use for adding and editing publication authors'),
      'has_title' => '1',
      'title_label' => t('Full name'),
      'help' => '',
    ),
  );
  return $items;
}
