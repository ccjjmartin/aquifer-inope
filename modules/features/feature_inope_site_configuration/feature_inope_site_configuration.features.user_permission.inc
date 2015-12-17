<?php
/**
 * @file
 * feature_inope_site_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_inope_site_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  return $permissions;
}
