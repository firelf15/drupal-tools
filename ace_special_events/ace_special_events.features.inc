<?php
/**
 * @file
 * ace_special_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ace_special_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ace_special_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ace_special_events_node_info() {
  $items = array(
    'event_csv_importer' => array(
      'name' => t('Event CSV Importer'),
      'base' => 'node_content',
      'description' => t('A tool to upload and create multiple events from a CSV file.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
