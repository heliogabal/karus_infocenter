<?php
/**
 * @file
 * karus_infocenter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function karus_infocenter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function karus_infocenter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function karus_infocenter_node_info() {
  $items = array(
    'blogpost' => array(
      'name' => t('InsoNews'),
      'base' => 'node_content',
      'description' => t('Die InsoNews werden als Blogpost geschrieben und lassen sich somit flexibel anzeigen und leicht erweitern.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'download' => array(
      'name' => t('Download'),
      'base' => 'node_content',
      'description' => t('Eine Datei, die zum Herunterladen gedacht ist. Formulare, Merkblätter und Informationsbriefe sind alles Downloads, die nur durch ihre zusätzliche Kategorisierung den entsprechenden Seiten zugeordnet werden.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('Links werden als eigene Inhaltselemente angelegt und dann gemeinsam auf der Linkseite angezeigt, um maximale Flexibilität zu erreichen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
