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
  $context->name = 'default_page_blocks';
  $context->description = 'Blocks containing the menu and (hidden) publication related blocks';
  $context->tag = 'views, block';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-3' => array(
          'module' => 'nice_menus',
          'delta' => 3,
          'region' => 'nav',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks containing the menu and (hidden) publication related blocks');
  t('views, block');
  $export['default_page_blocks'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'publication_page';
  $context->description = 'Blocks for publication detail page';
  $context->tag = 'publication, node type';
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
        'views-e786f6e58de6f60d622fbb04077280b5' => array(
          'module' => 'views',
          'delta' => 'e786f6e58de6f60d622fbb04077280b5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-109756c57e6bf112fbf77c0eee0138eb' => array(
          'module' => 'views',
          'delta' => '109756c57e6bf112fbf77c0eee0138eb',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks for publication detail page');
  t('publication, node type');
  $export['publication_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sidebar_menus';
  $context->description = 'Blocks containing the Browse by Topic  view block';
  $context->tag = 'views, block, taxonomy';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'category/*' => 'category/*',
        'topics' => 'topics',
        'topic/*' => 'topic/*',
        'search/*' => 'search/*',
        'media-types' => 'media-types',
        'media-type/*' => 'media-type/*',
        'taxonomy/*' => 'taxonomy/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2b1aa38a02a6653b7084d8c4e3d325d2' => array(
          'module' => 'views',
          'delta' => '2b1aa38a02a6653b7084d8c4e3d325d2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks containing the Browse by Topic  view block');
  t('views, block, taxonomy');
  $export['sidebar_menus'] = $context;

  return $export;
}
