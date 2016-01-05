<?php
/**
 * @file
 * The iNope Policy Review views include file.
 */

function inope_policy_review_views_data() {
  // ----------------------------------------------------------------
  // iNope Policy Review -- basic table information.
 
  // Define the base group of this table.
  $data['policy_review']['table']['group']  = t('iNope Policy Review');
 
  // Advertise this table as a possible base table
  $data['policy_review']['table']['base'] = array(
    'field' => 'policy_review_id',
    'title' => t('iNope Policy Review'),
    //'weight' => -10,
    //'access query tag' => '',
    //'defaults' => array(
    //  'field' => 'title',
    //),
  );

  /**
  // For other base tables, explain how we join
  $data['node']['table']['join'] = array(
    // this explains how the 'node' table (named in the line above)
    // links toward the node_revision table.
    'node_revision' => array(
      'handler' => 'views_join', // this is actually optional
      'left_table' => 'node_revision', // Because this is a direct link it could be left out.
      'left_field' => 'nid',
      'field' => 'nid',
      // also supported:
      // 'type' => 'INNER',
      // 'extra' => array(array('field' => 'fieldname', 'value' => 'value', 'operator' => '='))
      //   Unfortunately, you can't specify other tables here, but you can construct
      //   alternative joins in the handlers that can do that.
      // 'table' => 'the actual name of this table in the database',
     ),
  );
   * 
   */
 
  // ----------------------------------------------------------------
  // policy_review table -- fields

  // Policy review submitted field.
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

  // Policy Review NID
  $data['policy_review']['nid'] = array(
    // The item it appears as on the UI,
    'title' => t('Policy Review NID'),

    // The help that appears on the UI,
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
    
    // Add the relationship to the node table
    'relationship' => array(
      'base' => 'node', // The name of the table to join with.
      'base field' => 'nid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('NID'),
      'title' => t('NID'),
      'help' => t('This relationship joins the node table and the policy review table'),
    ),
  );
  
  // Policy Review UID
  $data['policy_review']['uid'] = array(
    // The item it appears as on the UI,
    'title' => t('Policy Review UID'),

    // The help that appears on the UI,
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
    
    // Add the relationship to the node table
    'relationship' => array(
      'base' => 'users', // The name of the table to join with.
      'base field' => 'uid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('UID'),
      'title' => t('UID'),
      'help' => t('This relationship joins the users table and the policy review table'),
    ),
  );
  
    // Policy Review UID
  $data['policy_review']['vid'] = array(
    // The item it appears as on the UI,
    'title' => t('Policy Review VID'),

    // The help that appears on the UI,
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
    
    // Add the relationship to the node table
    'relationship' => array(
      'base' => 'node_revision', // The name of the table to join with.
      'base field' => 'vid', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('VID'),
      'title' => t('VID'),
      'help' => t('This relationship joins the users table and the policy review table'),
    ),
  );
  
  // Policy Review Note
  $data['policy_review']['note'] = array(
    // The item it appears as on the UI,
    'title' => t('Policy Review Note'),

    // The help that appears on the UI,
    'help' => t('The note comment for policy reviews.'),

    // Field handler
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE, // This is use by the table display plugin.
    ),
  );
  
  // Policy Review Note Status.
  $data['policy_review']['note_status'] = array(
    'title' => t('Note Status'),
    'help' => t('Approved or requested change.'),
    'field' => array(
      'handler' => 'inope_policy_review_handler_note_status_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      // Note that you can override the field-wide label:
      'label' => t('Approved/Requested'),
      // This setting is used by the boolean filter handler, as possible option.
      'type' => 'Approved-Change Requested',
      // use boolean_field = 1 instead of boolean_field <> 0 in WHERE statement.
      'use equal' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}

