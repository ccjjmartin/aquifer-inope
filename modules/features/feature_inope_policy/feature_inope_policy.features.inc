<?php
/**
 * @file
 * feature_inope_policy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_inope_policy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_inope_policy_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_inope_policy_node_info() {
  $items = array(
    'inope_policy' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => t('A collection of all of the policies of iNope'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
