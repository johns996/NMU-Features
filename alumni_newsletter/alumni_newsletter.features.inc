<?php
/**
 * @file
 * alumni_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function alumni_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
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
function alumni_newsletter_node_info() {
  $items = array(
    'programs_what_s_new_nmu' => array(
      'name' => t('Fearless Whats New NMU'),
      'base' => 'node_content',
      'description' => t('This is the revised What\'s New NMU template developed in the fall of 2014.  It uses a field-based layout to assist with the styling of the newsletter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
