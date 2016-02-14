<?php
/**
 * @file
 * karus_infocenter.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function karus_infocenter_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_infocenter:node/99.
  $menu_links['main-menu_infocenter:node/99'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/99',
    'router_path' => 'node/%',
    'link_title' => 'Infocenter',
    'options' => array(
      'identifier' => 'main-menu_infocenter:node/99',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_informationsbriefe:node/1498.
  $menu_links['main-menu_informationsbriefe:node/1498'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1498',
    'router_path' => 'node/%',
    'link_title' => 'Informationsbriefe',
    'options' => array(
      'identifier' => 'main-menu_informationsbriefe:node/1498',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_infocenter:node/99',
  );
  // Exported menu link: main-menu_insonews:node/1500.
  $menu_links['main-menu_insonews:node/1500'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1500',
    'router_path' => 'node/%',
    'link_title' => 'InsoNews',
    'options' => array(
      'identifier' => 'main-menu_insonews:node/1500',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_infocenter:node/99',
  );
  // Exported menu link: main-menu_links:node/1502.
  $menu_links['main-menu_links:node/1502'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1502',
    'router_path' => 'node/%',
    'link_title' => 'Links',
    'options' => array(
      'identifier' => 'main-menu_links:node/1502',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
    'parent_identifier' => 'main-menu_infocenter:node/99',
  );
  // Exported menu link: main-menu_merkbltter:node/1499.
  $menu_links['main-menu_merkbltter:node/1499'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1499',
    'router_path' => 'node/%',
    'link_title' => 'Merkblätter',
    'options' => array(
      'identifier' => 'main-menu_merkbltter:node/1499',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_infocenter:node/99',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Infocenter');
  t('Informationsbriefe');
  t('InsoNews');
  t('Links');
  t('Merkblätter');

  return $menu_links;
}
