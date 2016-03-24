<?php
/* 
 * @file
 * This file defines the custom pane for our custom form.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Policy Form'),
  'description' => t('Display the iNope policy input form.'),
  'category' => t('Custom Panes'),
  //'edit form' => 'inope_policy_review_panels_edit_form',
  'render callback' => 'inope_policy_review_panels_form_render',
  //'admin info' => 'mymodule_taxonomy_root_term_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);
