<?php
/**
 * @file
 * hr_highlight_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_highlight_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-highlight-field_clusters'])) {
    $data['node-highlight-field_clusters']['field_instance']['label'] = 'Sector'; /* WAS: 'Cluster' */
  }
}
