<?php
/**
 * @file
 * ace_special_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ace_special_events_user_default_permissions() {
  $permissions = array();
  // Exported permission: 'create event_csv_importer content'.
  $permissions['create event_csv_importer content'] = array(
    'name' => 'create event_csv_importer content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Manager' => 'Site Manager',
      'administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_csv_importer content'.
  $permissions['delete any event_csv_importer content'] = array(
    'name' => 'delete any event_csv_importer content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_csv_importer content'.
  $permissions['delete own event_csv_importer content'] = array(
    'name' => 'delete own event_csv_importer content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Manager' => 'Site Manager',
      'administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_csv_importer content'.
  $permissions['edit any event_csv_importer content'] = array(
    'name' => 'edit any event_csv_importer content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Manager' => 'Site Manager',
      'administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_csv_importer content'.
  $permissions['edit own event_csv_importer content'] = array(
    'name' => 'edit own event_csv_importer content',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'Site Manager' => 'Site Manager',
      'administrator' => 'Administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
