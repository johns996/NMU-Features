<?php
/**
 * @file
 * fearless_internal_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fearless_internal_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nav_expand'
  $field_bases['field_nav_expand'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nav_expand',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'discover' => 'Discover NMU',
        'learn' => 'Learn at NMU',
        'life' => 'Life at NMU',
        'apply' => 'Apply to NMU',
        'transfer' => 'Transfer Students',
        'admitted' => 'Admitted to NMU',
        'paying' => 'Paying for College',
        'touch' => 'Get in Touch',
        'attending' => 'About Attending College',
        'counseling' => 'Counseling Professionals',
        'none' => 'Nothing Expanded',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
