<?php
/**
 * @file
 * The iNope Policy Review views include file.
 */

/**
 * Implements hook_views_data().
 */
function inope_policy_review_views_data() {
  // ----------------------------------------------------------------
  // Define basic table information.
  // ----------------------------------------------------------------
  // Define the base group of this table.
  $data['policy_review']['table']['group']  = t('iNope Policy Review');

  // Advertise this table as a possible base table.
  $data['policy_review']['table']['base'] = array(
    'field' => 'policy_review_id',
    'title' => t('iNope Policy Review'),
  );

  // ----------------------------------------------------------------
  // Define table fields.
  // ----------------------------------------------------------------
  // Create the policy review submitted views field.
  $data['policy_review']['note_submitted'] = array(
    'title' => t('Note Submitted'),
    'help' => t('Note was submitted on this date.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  // Create the policy review id (primary key) views field.
  $data['policy_review']['policy_review_id'] = array(
    // The item it appears as on the UI.
    'title' => t('Policy Review ID'),

    // The help that appears on the UI.
    'help' => t('The primary key for the policy_review table.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click_sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // Create the policy review nid views field.
  $data['policy_review']['nid'] = array(
    // The item it appears as on the UI.
    'title' => t('Policy Review NID'),

    // The help that appears on the UI.
    'help' => t('The nid that a policy review note is attached to.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click_sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),

    // Add the relationship to the node table.
    'relationship' => array(
      // The name of the table to join with.
      'base' => 'node',

      // The name of the field on the joined table.
      'base field' => 'nid',

      'handler' => 'views_handler_relationship',
      'label' => t('NID'),
      'title' => t('NID'),
      'help' => t('This relationship joins the node table and the policy review table'),
    ),
  );

  // Create the policy review uid views field.
  $data['policy_review']['uid'] = array(
    // The item it appears as on the UI.
    'title' => t('Policy Review UID'),

    // The help that appears on the UI.
    'help' => t('The uid that a policy review note is attached to.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click_sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),

    // Add the relationship to the node table.
    'relationship' => array(
      // The name of the table to join with.
      'base' => 'users',

      // The name of the field on the joined table.
      'base field' => 'uid',

      'handler' => 'views_handler_relationship',
      'label' => t('UID'),
      'title' => t('UID'),
      'help' => t('This relationship joins the users table and the policy review table'),
    ),
  );

  // Create the policy review vid views field.
  $data['policy_review']['vid'] = array(
    // The item it appears as on the UI.
    'title' => t('Policy Review VID'),

    // The help that appears on the UI.
    'help' => t('The vid that a policy review note is attached to.'),

    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click_sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),

    // Add the relationship to the node table.
    'relationship' => array(
      // The name of the table to join with.
      'base' => 'node_revision',

      // The name of the field on the joined table.
      'base field' => 'vid',

      'handler' => 'views_handler_relationship',
      'label' => t('VID'),
      'title' => t('VID'),
      'help' => t('This relationship joins the users table and the policy review table'),
    ),
  );

  // Create the policy review note views field.
  $data['policy_review']['note'] = array(
    // The item it appears as on the UI.
    'title' => t('Policy Review Note'),

    // The help that appears on the UI.
    'help' => t('The note comment for policy reviews.'),

    'field' => array(
      'handler' => 'views_handler_field',
      // This is used by the table display plugin.
      'click sortable' => TRUE,
    ),
  );

  // Create the policy review note status views field.
  $data['policy_review']['note_status'] = array(
    'title' => t('Note Status'),
    'help' => t('Approved or requested change.'),
    'field' => array(
      // CUSTOM: This is a custom handler implemented by this module.
      'handler' => 'inope_policy_review_handler_note_status_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      // Note that you can override the field-wide label:
      'label' => t('Approved/Requested'),
      // This setting is used by the boolean filter handler, as possible option.
      'type' => 'Approved-Change Requested',
      // Use boolean_field = 1 instead of boolean_field <> 0 in WHERE statement.
      'use equal' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
