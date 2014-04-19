<?php
/**
 * @file
 * osu_publication.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function osu_publication_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'author_page';
  $context->description = 'Blocks for auhtor detail page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'publication_author' => 'publication_author',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dae3f92f04661bbe1517fc2749c43920' => array(
          'module' => 'views',
          'delta' => 'dae3f92f04661bbe1517fc2749c43920',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for auhtor detail page');
  $export['author_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publication_page';
  $context->description = 'Blocks for publication detail page';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'osu_catalog_publication' => 'osu_catalog_publication',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-da6fd08585ae82f9bea638c7a78283e7' => array(
          'module' => 'views',
          'delta' => 'da6fd08585ae82f9bea638c7a78283e7',
          'region' => 'post_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for publication detail page');
  $export['publication_page'] = $context;

  return $export;
}
