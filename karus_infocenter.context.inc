<?php
/**
 * @file
 * karus_infocenter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function karus_infocenter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_infobrief';
  $context->description = 'Neuen Infobrief erstellen Link, wenn entsprechende Rechte vorhanden';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/informationsbriefe' => 'info/informationsbriefe',
      ),
    ),
    'user' => array(
      'values' => array(
        'Editor' => 'Editor',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Neuen Infobrief erstellen Link, wenn entsprechende Rechte vorhanden');
  $export['add_infobrief'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_insonews';
  $context->description = 'InsoNews hinzufügen, wenn entsprechende Rechte vorhanden';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/insonews' => 'info/insonews',
      ),
    ),
    'user' => array(
      'values' => array(
        'Editor' => 'Editor',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content',
          'weight' => '-22',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('InsoNews hinzufügen, wenn entsprechende Rechte vorhanden');
  $export['add_insonews'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_link';
  $context->description = 'Neuen Link erstellen Link, wenn entsprechende Reche vorhanden';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/links' => 'info/links',
      ),
    ),
    'user' => array(
      'values' => array(
        'Editor' => 'Editor',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Neuen Link erstellen Link, wenn entsprechende Reche vorhanden');
  $export['add_link'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'add_merkblatt';
  $context->description = 'Merkblatt hinzufügen (Download Typ Merkblatt), wenn entsprechende Rechte vorhanden';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/merkblaetter' => 'info/merkblaetter',
      ),
    ),
    'user' => array(
      'values' => array(
        'Editor' => 'Editor',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Merkblatt hinzufügen (Download Typ Merkblatt), wenn entsprechende Rechte vorhanden');
  $export['add_merkblatt'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'insonews_breadcrumbs';
  $context->description = 'sets correct breadcrumbs for full articles of insonews';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'info/insonews/*' => 'info/insonews/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => array(
      0 => 'main-menu:node/1500',
    ),
    'menu' => array(
      0 => 'main-menu:node/1500',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sets correct breadcrumbs for full articles of insonews');
  t('theme');
  $export['insonews_breadcrumbs'] = $context;

  return $export;
}
