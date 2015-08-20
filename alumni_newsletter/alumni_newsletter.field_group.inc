<?php
/**
 * @file
 * alumni_newsletter.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function alumni_newsletter_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|programs_what_s_new_nmu|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs_what_s_new_nmu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '7',
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
  $export['group_advanced|node|programs_what_s_new_nmu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|programs_what_s_new_nmu|default';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs_what_s_new_nmu';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer',
    'weight' => '4',
    'children' => array(
      0 => 'field_footer_section',
      1 => 'field_social_media_1',
      2 => 'field_social_media_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Footer',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_footer|node|programs_what_s_new_nmu|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer|node|programs_what_s_new_nmu|form';
  $field_group->group_name = 'group_footer';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs_what_s_new_nmu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer Section',
    'weight' => '5',
    'children' => array(
      0 => 'field_footer_section',
      1 => 'field_social_media_1',
      2 => 'field_social_media_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Footer Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-footer field-group-fieldset',
        'description' => 'Content in this section will be displayed in three columns.  You will generally want to keep the social 1 & 2 sections the same with each issue.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_footer|node|programs_what_s_new_nmu|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle|node|programs_what_s_new_nmu|default';
  $field_group->group_name = 'group_middle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs_what_s_new_nmu';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Middle',
    'weight' => '2',
    'children' => array(
      0 => 'field_connected_section',
      1 => 'field_events_section',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Middle',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-middle',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_middle|node|programs_what_s_new_nmu|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_middle|node|programs_what_s_new_nmu|form';
  $field_group->group_name = 'group_middle';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'programs_what_s_new_nmu';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Middle Section',
    'weight' => '3',
    'children' => array(
      0 => 'field_connected_section',
      1 => 'field_events_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Middle Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-middle field-group-fieldset',
        'description' => 'Content in these two areas will appear side by side.  In most cases, you\'ll want the general length of these two sections to be similar.  If one needs to be longer, it should be the left (Events) section.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_middle|node|programs_what_s_new_nmu|form'] = $field_group;

  return $export;
}
