<?php
/**
 * @file
 * Defines rows for BRX2 shop page
 */

// Plugin definition
$plugin = array(
  'title' => t('Hero, 4 columns'),
  'icon' => '../../icon.png',
  'category' => 'Responsive Hero Layouts',
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
