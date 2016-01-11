<?php
/**
 * @file
 * feature_inope_policy.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_inope_policy_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'policy';
  $page->task = 'page';
  $page->admin_title = 'Policy';
  $page->admin_description = 'Display page for iNope policy';
  $page->path = 'node/%node/review';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'view inope policy review',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Review',
    'name' => 'navigation',
    'weight' => '4',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_policy__panel';
  $handler->task = 'page';
  $handler->subtask = 'policy';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Policy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'perm',
          'settings' => array(
            'perm' => 'view inope policy review',
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'policy-node-layout';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'footer' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6656ffc7-b00b-4444-ad2f-62c7393b06e9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-60c348ef-62c0-4dfd-be4b-400d80351707';
    $pane->panel = 'left';
    $pane->type = 'policy_form';
    $pane->subtype = 'policy_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60c348ef-62c0-4dfd-be4b-400d80351707';
    $display->content['new-60c348ef-62c0-4dfd-be4b-400d80351707'] = $pane;
    $display->panels['left'][0] = 'new-60c348ef-62c0-4dfd-be4b-400d80351707';
    $pane = new stdClass();
    $pane->pid = 'new-919316ef-429b-404c-bbbf-3bdaf148a9e5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'policies-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '919316ef-429b-404c-bbbf-3bdaf148a9e5';
    $display->content['new-919316ef-429b-404c-bbbf-3bdaf148a9e5'] = $pane;
    $display->panels['left'][1] = 'new-919316ef-429b-404c-bbbf-3bdaf148a9e5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['policy'] = $page;

  return $pages;

}
