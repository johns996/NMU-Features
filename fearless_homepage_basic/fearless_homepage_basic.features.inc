<?php
/**
 * @file
 * fearless_homepage_basic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_homepage_basic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fearless_homepage_basic_node_info() {
  $items = array(
    'fearless_homepage_basic' => array(
      'name' => t('Fearless Homepage-Basic'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
