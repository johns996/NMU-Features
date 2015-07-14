<?php
/**
 * @file
 * fearless_themekey_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fearless_themekey_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer theme assignments'.
  $permissions['administer theme assignments'] = array(
    'name' => 'administer theme assignments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey',
  );

  // Exported permission: 'administer themekey settings'.
  $permissions['administer themekey settings'] = array(
    'name' => 'administer themekey settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'themekey',
  );

  return $permissions;
}
