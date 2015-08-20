<?php
/**
 * @file
 * fearless_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fearless_homepage_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|fearless_homepage|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '18',
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
  $export['group_advanced|node|fearless_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner_inside|node|fearless_homepage|default';
  $field_group->group_name = 'group_banner_inside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_banner';
  $field_group->data = array(
    'label' => 'Banner Inside',
    'weight' => '3',
    'children' => array(
      0 => 'field_banner_text',
      1 => 'field_banner_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Banner Inside',
      'instance_settings' => array(
        'classes' => 'col-md-7 col-lg-6 right',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_banner_inside|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|fearless_homepage|default';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'group_banner_inside',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Banner',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row title-section',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_banner|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_banner|node|fearless_homepage|form';
  $field_group->group_name = 'group_banner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Banner',
    'weight' => '1',
    'children' => array(
      0 => 'field_banner_image',
      1 => 'field_banner_text',
      2 => 'field_banner_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Banner',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-banner field-group-fieldset',
        'description' => 'This section controls the main departmental banner.  An image, department name and brief description should be provided.  Up to five images can be provided for the banner image field.  One image will be selected randomly for display each time the page is viewed.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_banner|node|fearless_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_closing_inside|node|fearless_homepage|default';
  $field_group->group_name = 'group_closing_inside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_closing_wrapper';
  $field_group->data = array(
    'label' => 'Closing Inside',
    'weight' => '17',
    'children' => array(
      0 => 'field_closing_text',
      1 => 'field_closing_title',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Closing Inside',
      'instance_settings' => array(
        'classes' => 'overlay-text',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_closing_inside|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_closing_wrapper|node|fearless_homepage|default';
  $field_group->group_name = 'group_closing_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_closing';
  $field_group->data = array(
    'label' => 'Closing Wrapper',
    'weight' => '15',
    'children' => array(
      0 => 'field_closing_image',
      1 => 'group_closing_inside',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Closing Wrapper',
      'instance_settings' => array(
        'classes' => 'col-md-12 doing',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => '',
        'attributes' => '',
      ),
    ),
  );
  $export['group_closing_wrapper|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_closing|node|fearless_homepage|default';
  $field_group->group_name = 'group_closing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Closing',
    'weight' => '5',
    'children' => array(
      0 => 'group_closing_wrapper',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Closing',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row what-do',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_closing|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_closing|node|fearless_homepage|form';
  $field_group->group_name = 'group_closing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Closing',
    'weight' => '5',
    'children' => array(
      0 => 'field_closing_image',
      1 => 'field_closing_text',
      2 => 'field_closing_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Closing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-closing field-group-fieldset',
        'description' => 'This section looks similar to the top banner section.  An image, title and text should be provided.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_closing|node|fearless_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|fearless_homepage|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_contact_extra',
      1 => 'field_contact_methods',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'row contact-section',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_contact|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|fearless_homepage|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '7',
    'children' => array(
      0 => 'field_contact_extra',
      1 => 'field_contact_methods',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contact field-group-fieldset',
        'description' => 'Contact information should include the department name, an e-mail address and phone number.  A  Contact Extra field is provided for an additional contact information.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_contact|node|fearless_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_two_column|node|fearless_homepage|default';
  $field_group->group_name = 'group_two_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Two Column',
    'weight' => '2',
    'children' => array(
      0 => 'field_left_column',
      1 => 'field_right_column',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Two Column',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'learning-career row',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_two_column|node|fearless_homepage|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_two_column|node|fearless_homepage|form';
  $field_group->group_name = 'group_two_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fearless_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Two Column',
    'weight' => '2',
    'children' => array(
      0 => 'field_left_column',
      1 => 'field_right_column',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Two Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-two-column field-group-fieldset',
        'description' => 'This section will appear right after the banner section.  It will be divided into a two column layout with the left column taking up 60% of the width and the right taking up 40%.  The left column will have a light gray background, the right column will have a dark gray one.  The columns should have a <strong>Heading 3 &lt;h3&gt;</strong> around their headings and a <strong>Paragraph &lt;p&gt;</strong> around their body text.',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_two_column|node|fearless_homepage|form'] = $field_group;

  return $export;
}
