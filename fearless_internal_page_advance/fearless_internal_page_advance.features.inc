<?php
/**
 * @file
 * fearless_internal_page_advance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function fearless_internal_page_advance_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
