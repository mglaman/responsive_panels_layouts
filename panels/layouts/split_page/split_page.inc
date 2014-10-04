<?php

/**
 * @file
 * Defines a simple 2-column grid layout.
 */

// Plugin definition.
$plugin = array(
  'title' => t('Split Page (Generic)'),
  'icon' => 'preview.png',
  'category' => 'Responsive Layouts',
  'theme' => 'split_page',
  'css' => 'split-page.css',
  'regions' => array(
    'left' => t('Left'),
    'right' => t('Right'),
  ),
);

/**
 * Implements hook_preprocess_split_page().
 */
function template_preprocess_split_page(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--split-page';

  if (empty($variables['content']['left']) || empty($variables['content']['right'])) {
    $variables['attributes_array']['class'][] = 'split-page--single';
  }
  else {
    $variables['attributes_array']['class'][] = 'split-page--split';
  }


  $variables['region_attributes_array']['left']['class'] = array(
    'panels-region',
  );
  $variables['region_attributes_array']['right']['class'] = array(
    'panels-region',
  );
}
