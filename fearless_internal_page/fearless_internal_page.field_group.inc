<?php
/**
 * @file
 * fearless_internal_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fearless_internal_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_image|node|fearless_internal_page|form';
  $field_group->group_name = 'group_page_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_internal_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '1',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-page-image field-group-fieldset',
        'description' => 'Use this section to add an image to the page.  Text entered into the <em>Title</em> field will be used as a caption.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_page_image|node|fearless_internal_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image');

  return $field_groups;
}
