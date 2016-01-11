<?php

// Plugin definition.
$plugin = array(
  'title' => t('Policy Report Layout'),
  'icon' => 'policy-report-layout.png',
  'category' => t('iNope'),
  'css' => 'policy-report-layout.css',
  'theme' => 'policy_report_layout',
  'regions' => array(
    'first' => t('First'),
    'second' => t('Second'),
    'third' => t('Third')
  ),
);
