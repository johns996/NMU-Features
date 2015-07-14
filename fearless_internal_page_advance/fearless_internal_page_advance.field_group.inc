<?php
/**
 * @file
 * fearless_internal_page_advance.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fearless_internal_page_advance_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|fearless_internal_page|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_internal_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '3',
    'children' => array(
      0 => 'field_scripts',
      1 => 'field_meta_description',
      2 => 'field_thumbnail_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|fearless_internal_page|form'] = $field_group;

  return $export;
}
