<?php
/**
 * @file
 * fearless_admissions_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_admissions_home_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fearless_admissions_home_node_info() {
  $items = array(
    'fearless_admissions_home' => array(
      'name' => t('Fearless Admissions Home'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
