<?php
/**
 * @file
 * feature_inope_site_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_inope_site_configuration_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 2,
  );

  return $roles;
}
