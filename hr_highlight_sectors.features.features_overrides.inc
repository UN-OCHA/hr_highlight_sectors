<?php
/**
 * @file
 * hr_highlight_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_highlight_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-highlight-field_clusters.field_instance|label"] = 'Sector';

 return $overrides;
}
