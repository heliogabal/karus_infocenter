<?php
/**
 * @file
 * karus_infocenter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function karus_infocenter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create blogpost content'.
  $permissions['create blogpost content'] = array(
    'name' => 'create blogpost content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create download content'.
  $permissions['create download content'] = array(
    'name' => 'create download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create link content'.
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any blogpost content'.
  $permissions['delete any blogpost content'] = array(
    'name' => 'delete any blogpost content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any download content'.
  $permissions['delete any download content'] = array(
    'name' => 'delete any download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any link content'.
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blogpost content'.
  $permissions['delete own blogpost content'] = array(
    'name' => 'delete own blogpost content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own download content'.
  $permissions['delete own download content'] = array(
    'name' => 'delete own download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own link content'.
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any blogpost content'.
  $permissions['edit any blogpost content'] = array(
    'name' => 'edit any blogpost content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any download content'.
  $permissions['edit any download content'] = array(
    'name' => 'edit any download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any link content'.
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blogpost content'.
  $permissions['edit own blogpost content'] = array(
    'name' => 'edit own blogpost content',
    'roles' => array(
      'Editor' => 'Editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own download content'.
  $permissions['edit own download content'] = array(
    'name' => 'edit own download content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own link content'.
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
