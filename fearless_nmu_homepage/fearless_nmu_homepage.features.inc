<?php
/**
 * @file
 * fearless_nmu_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_nmu_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function fearless_nmu_homepage_node_info() {
  $items = array(
    'fearless_nmu_homepage' => array(
      'name' => t('Fearless NMU Homepage'),
      'base' => 'node_content',
      'description' => t('This content type should only be used for the primary <strong>NMU homepage</strong>.  
<br /><br />
The zen_nmu theme\'s <strong>template.php</strong> file will add in the necessary CSS based on the machine name of this content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
