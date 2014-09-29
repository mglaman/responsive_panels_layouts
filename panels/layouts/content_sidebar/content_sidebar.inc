<?php
/**
 * @file
 * Defines rows
 */

// Plugin definition
$plugin = array(
  'title' => t('Content, with sidebar'),
  'icon' => '../../icon.png',
  'category' => 'Responsive Layouts',
  'theme' => 'content_sidebar',
  'css' => 'content-sidebar.css',
  'regions' => array(
    'content' => t('Content'),
    'sidebar_section_one' => t('Sidebar Top'),
    'sidebar_section_two' => t('Sidebar Two'),
  ),
);

/**
 * Implements hook_preprocess_content_sidebar().
 */
function template_preprocess_content_sidebar(&$variables) {
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--content-sidebar';

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'content-sidebar-region';
    $variables['region_attributes_array'][$name]['class'][] = 'content-sidebar-region--' . drupal_clean_css_identifier($name);
  }
}
