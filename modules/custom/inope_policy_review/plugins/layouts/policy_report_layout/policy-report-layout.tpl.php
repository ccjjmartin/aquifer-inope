<?php

/**
 * @file
 * A sample panel layout template, to see how to build your own.
 */
?>

<div class="panel-policy-report-layout clearfix panel-display <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print 'id="' . $css_id . '"'; } ?>>
  <section class="policy-layout-first panel-panel">
    <?php print $content['first']; ?>
  </section>
  <section class="policy-layout-second panel-panel">
    <?php print $content['second']; ?>
  </section>
  <section class="policy-layout-third panel-panel">
    <?php print $content['third']; ?>
  </section>
</div>
