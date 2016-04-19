<?php
/**
 * @file
 * sponsored_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sponsored_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
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
function sponsored_homepage_node_info() {
  $items = array(
    'sponsored_homepage' => array(
      'name' => t('Sponsored Homepage'),
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
