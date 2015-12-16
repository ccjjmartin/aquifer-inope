<?php
/**
 * @file
 * feature_inope_policy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_inope_policy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create inope_policy content'.
  $permissions['create inope_policy content'] = array(
    'name' => 'create inope_policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inope_policy content'.
  $permissions['delete any inope_policy content'] = array(
    'name' => 'delete any inope_policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inope_policy content'.
  $permissions['delete own inope_policy content'] = array(
    'name' => 'delete own inope_policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inope_policy content'.
  $permissions['edit any inope_policy content'] = array(
    'name' => 'edit any inope_policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own inope_policy content'.
  $permissions['edit own inope_policy content'] = array(
    'name' => 'edit own inope_policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
