<?php

// Plugin definition.
$plugin = array(
  'title' => t('Policy Report Layout'),
  'icon' => 'policy-report-layout.png',
  'category' => t('iNope'),
  'css' => 'policy-report-layout.css',
  'theme' => 'policy_report_layout',
  'regions' => array(
    'top_left' => t('first'),
    'top_signup' => t('second'),
    'top_right' => t('third')
  ),
);
