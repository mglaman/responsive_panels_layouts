<?php
/**
 * @file
 * Defines rows for BRX2 shop page
 */

// Plugin definition
$plugin = array(
  'title' => t('Hero, 2 columns'),
  'icon' => '../../icon.png',
  'category' => 'Responsive Hero Layouts',
  'theme' => 'hero_two_columns',
  'css' => 'hero-two-columns.css',
  'regions' => array(
    'hero' => t('Hero'),
    'column_one' => t('Column 1'),
    'column_two' => t('Column 2'),
  ),
);
