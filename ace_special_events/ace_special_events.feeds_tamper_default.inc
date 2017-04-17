<?php
/**
 * @file
 * ace_special_events.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ace_special_events_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-categories-explode';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'CATEGORIES';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['special_events_events-categories-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-feature-image-rewrite';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'feature-image';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'public://[feature-image]',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Rewrite';
  $export['special_events_events-feature-image-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-end-date-strtotime';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'END-DATE';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['special_events_events-end-date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-event-type-default_value';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'EVENT-TYPE';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Special-Events',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value to "Special-Events"';
  $export['special_events_events-event-type-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-start-date-strtotime';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'START-DATE';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['special_events_events-start-date-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-tags-explode';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'TAGS';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['special_events_events-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-venue-city-get_store_vars';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'VENUE-CITY';
  $feeds_tamper->plugin_id = 'get_store_vars';
  $feeds_tamper->settings = array(
    'store_variable' => 'store_city',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get a Station variable';
  $export['special_events_events-venue-city-get_store_vars'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-venue-country-default_value';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'VENUE-COUNTRY';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'US',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value to \'US\'';
  $export['special_events_events-venue-country-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-venue-name-default_value';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'VENUE-NAME';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'On the Website',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value "On the Website"';
  $export['special_events_events-venue-name-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-venue-state-get_store_vars';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'VENUE-STATE';
  $feeds_tamper->plugin_id = 'get_store_vars';
  $feeds_tamper->settings = array(
    'store_variable' => 'store_state',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get a Station variable';
  $export['special_events_events-venue-state-get_store_vars'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'special_events_events-venue-street-address-get_store_vars';
  $feeds_tamper->importer = 'special_events_events';
  $feeds_tamper->source = 'VENUE-STREET-ADDRESS';
  $feeds_tamper->plugin_id = 'get_store_vars';
  $feeds_tamper->settings = array(
    'store_variable' => 'site_name',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get a Station variable';
  $export['special_events_events-venue-street-address-get_store_vars'] = $feeds_tamper;

  return $export;
}
