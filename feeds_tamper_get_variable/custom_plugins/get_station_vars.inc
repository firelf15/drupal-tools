<?php

/**
 * @file
 * Set field to the site variable that defines the Store City.
 */

$plugin = array(
  'form' => 'feeds_tamper_get_variable_form',
  'callback' => 'feeds_tamper_get_variable_callback',
  'name' => 'Get a Store variable',
  'multi' => 'direct',
  'category' => 'Ace',
);

function feeds_tamper_get_variable_form($importer, $element_key, $settings) {
  $form = array();

  $form['store_variable'] = array(
    '#type' => 'select',
    '#title' => t('Selected'),
    '#options' => array(
      'store_call' => t('Store Calls'),
      'store_format' => t('Store Format'),
      'store_city' => t('Store City'),
      'store_state' => t('Store State'),
      'store_phone' => t('Store Phone'),
      'store_txt' => t('Store Text'),
      'site_name' => t('Site Name'),
      'site_slogan' => t('Site Slogan')
    ),
    '#store_variable' => isset($settings['store_variable']) ? $settings['store_variable'] : '',
    '#description' => t('This field will be set to the variable specified.'),
  );

  $form['only_if_empty'] = array(
    '#type' => 'checkbox',
    '#title' => t('Only if empty'),
    '#store_variable' => isset($settings['only_if_empty']) ? $settings['only_if_empty'] : 0,
    '#description' => t('This field will be set to the variable specified only if the imported field is empty.'),
  );

  return $form;
}

function feeds_tamper_get_variable_callback($source, $item_key, $element_key, &$field, $settings, $source) {
  // Getting the variable value.
  $store_variable_value = variable_get($settings['store_variable']);

  // Setting the variable value.
  if (!empty($settings['only_if_empty']) && !$field) {
    $field = $store_variable_value;
  }
  elseif (empty($settings['only_if_empty'])) {
    $field = $store_variable_value;
  }
}
