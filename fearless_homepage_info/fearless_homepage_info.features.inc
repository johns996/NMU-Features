<?php
/**
 * @file
 * fearless_homepage_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_homepage_info_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fearless_homepage_info_node_info() {
  $items = array(
    'fearless_homepage_info' => array(
      'name' => t('Fearless Homepage-Info'),
      'base' => 'node_content',
      'description' => t('Standard fearless homepage fields with the addition of an information field below the banner.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
