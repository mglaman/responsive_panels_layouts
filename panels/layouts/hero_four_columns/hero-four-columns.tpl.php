<?php
/**
 * @file
 * Template for the 4 column feature.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div<?php print $attributes ?>>
  <?php if (!empty($content['hero'])): ?>
  <div<?php print drupal_attributes($region_attributes_array['hero'])?>>
    <?php print $content['hero']; ?>
  </div>
  <?php endif; ?>
  <div<?php print drupal_attributes($wrapper_attributes_array)?>>
  <?php foreach(array_intersect_key(array_slice($content, 1), $layout['regions']) as $name => $item): ?>
    <?php if (!empty($item)): ?>
      <div<?php print drupal_attributes($region_attributes_array[$name])?>>
        <?php print $item ?>
      </div>
    <?php endif; ?>
  <?php endforeach; ?>
  </div>
</div>
