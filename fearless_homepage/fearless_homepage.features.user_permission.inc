<?php
/**
 * @file
 * fearless_homepage.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fearless_homepage_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  return $permissions;
}
