<?php
/**
 * @file
 * feature_inope_policy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_inope_policy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_inope_policy';
  $strongarm->value = 0;
  $export['comment_anonymous_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_inope_policy';
  $strongarm->value = 0;
  $export['comment_default_mode_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_inope_policy';
  $strongarm->value = '50';
  $export['comment_default_per_page_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_inope_policy';
  $strongarm->value = 1;
  $export['comment_form_location_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_inope_policy';
  $strongarm->value = '1';
  $export['comment_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_inope_policy';
  $strongarm->value = '0';
  $export['comment_preview_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_inope_policy';
  $strongarm->value = 1;
  $export['comment_subject_field_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_inope_policy';
  $strongarm->value = array(
    0 => 'navigation',
  );
  $export['menu_options_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_inope_policy';
  $strongarm->value = 'navigation:0';
  $export['menu_parent_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_inope_policy';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_inope_policy';
  $strongarm->value = '1';
  $export['node_preview_inope_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_inope_policy';
  $strongarm->value = 1;
  $export['node_submitted_inope_policy'] = $strongarm;

  return $export;
}
