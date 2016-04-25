<?php
/**
 * @file
 * fearless_homepage_link.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_homepage_link_ctools_plugin_api($module = NULL, $api = NULL) {
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
function fearless_homepage_link_node_info() {
  $items = array(
    'fearless_homepage_link' => array(
      'name' => t('Fearless Homepage Link'),
      'base' => 'node_content',
      'description' => t('Homepage with a banner link instead of title and text'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
