<?php
/**
 * @file
 * ace_special_events.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ace_special_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'special_events_events';
  $feeds_importer->config = array(
    'name' => 'Special Events',
    'description' => 'Import Special-Events events from a CSV',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '6',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'TITLE',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'feature-image',
            'target' => 'field_cover_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'START-DATE',
            'target' => 'field_event_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'END-DATE',
            'target' => 'field_event_date:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'EVENT-TYPE',
            'target' => 'field_event_type',
            'term_search' => '0',
            'autocreate' => 0,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'DESCRIPTION',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'VENUE-NAME',
            'target' => 'field_event_venue_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'VENUE-COUNTRY',
            'target' => 'field_event_location:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'VENUE-STREET-ADDRESS',
            'target' => 'field_event_location:thoroughfare',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'VENUE-CITY',
            'target' => 'field_event_location:locality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'VENUE-STATE',
            'target' => 'field_event_location:administrative_area',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'VENUE-ZIP',
            'target' => 'field_event_location:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'SUBTITLE',
            'target' => 'field_subtitle',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'EVENT-URL-TITLE',
            'target' => 'field_event_url:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'EVENT-URL',
            'target' => 'field_event_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'CATEGORIES',
            'target' => 'field_categories',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'E-MAIL',
            'target' => 'field_event_submission_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'PHONE-NUMBER',
            'target' => 'field_event_phone_number',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'VENUE-URL-TITLE',
            'target' => 'field_event_venue_url:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'VENUE-URL',
            'target' => 'field_event_venue_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'TAGS',
            'target' => 'opencalais_socialtags_tags',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'guid_unique_per_feed' => 0,
        'bundle' => 'event',
        'language' => 'und',
      ),
    ),
    'content_type' => 'event_csv_importer',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['special_events_events'] = $feeds_importer;

  return $export;
}
