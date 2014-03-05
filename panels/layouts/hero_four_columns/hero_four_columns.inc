<?php
/**
 * @file
 * Defines Responsive Hero Layout
 * One large region, four responsive columns
 * Layout adjusts column widths based on available content.
 */

// Plugin definition
$plugin = array(
  'title' => t('Hero, 4 columns'),
  'icon' => 'hero_four_columns.png',
  'category' => 'Responsive Layouts',
  'theme' => 'hero_four_columns',
  'css' => 'hero-four-columns.css',
  'regions' => array(
    'hero' => t('Hero'),
    'column_one' => t('Column 1'),
    'column_two' => t('Column 2'),
    'column_three' => t('Column 3'),
    'column_four' => t('Column 4'),
  ),
);

/**
 * Implements hook_preprocess_grid_2().
 */
function template_preprocess_hero_four_columns(&$variables) {

  // Sets the Panel layout classes.
  $variables['attributes_array']['class'][] = 'panel-display';
  $variables['attributes_array']['class'][] = 'panel-display--hero-four-column';

  // Counter for active regions. Use -1 to account for hero region.
  $region_active_counter = -1;

  // Fancy helper to provide text for numerals
  $numeral_to_string = array(
    0 => 'empty',
    1 => 'one',
    2 => 'two',
    3 => 'three',
    4 => 'four',
  );

  foreach($variables['content'] as $name => $item) {
    $variables['region_attributes_array'][$name]['class'][] = 'panels-region';
    $variables['region_attributes_array'][$name]['class'][] = 'panels-region--' . drupal_clean_css_identifier($name);

    if (!empty($item)) {
      $region_active_counter++;
    }
  }

  $variables['wrapper_attributes_array']['class'][] = 'panels-region--columns-wrapper';
  $variables['wrapper_attributes_array']['class'][] = 'panels-region--columns-wrapper__' . $numeral_to_string[$region_active_counter];

}
