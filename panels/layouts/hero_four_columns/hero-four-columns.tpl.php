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
<div class="panel-display panel-display--hero-four-column">
  <?php if (!empty($content['hero'])): ?>
  <div class="panels-region--hero">
    <?php print $content['hero']; ?>
  </div>
  <?php endif; ?>
  <div class="panels-region--columns-wrapper">
    <?php if (!empty($content['column_one'])): ?>
    <div class="panels-region--column-one">
      <?php print $content['column_one']; ?>
    </div>
    <?php endif; ?>
    <?php if (!empty($content['column_two'])): ?>
    <div class="panels-region--column-two">
      <?php print $content['column_two']; ?>
    </div>
    <?php endif; ?>
    <?php if (!empty($content['column_three'])): ?>
    <div class="panels-region--column-three">
      <?php print $content['column_three']; ?>
    </div>
    <?php endif; ?>
    <?php if (!empty($content['column_four'])): ?>
    <div class="panels-region--column-four">
      <?php print $content['column_four']; ?>
    </div>
    <?php endif; ?>
  </div>
</div>
