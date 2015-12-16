<?php
/**
 * @file
 * feature_inope_policy.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_inope_policy_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_policy:node/add/inope-policy.
  $menu_links['navigation_policy:node/add/inope-policy'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/inope-policy',
    'router_path' => 'node/add/inope-policy',
    'link_title' => 'Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'A collection of all of the policies of iNope',
      ),
      'identifier' => 'navigation_policy:node/add/inope-policy',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Policy');

  return $menu_links;
}
