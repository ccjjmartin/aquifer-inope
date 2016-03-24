<?php

// Plugin definition.
$plugin = array(
  'title' => t('Policy Node Layout'),
  'icon' => 'policy-node-layout.png',
  'category' => t('iNope'),
  'css' => 'policy-node-layout.css',
  'theme' => 'policy_node_layout',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'right' => t('Right side'),
    'bottom' => t('Bottom')
  ),
);
