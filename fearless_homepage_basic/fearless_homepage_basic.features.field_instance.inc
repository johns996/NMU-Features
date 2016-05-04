<?php
/**
 * @file
 * fearless_homepage_basic.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fearless_homepage_basic_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-fearless_homepage_basic-body'.
  $field_instances['node-fearless_homepage_basic-body'] = array(
    'bundle' => 'fearless_homepage_basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage_basic-field_image'.
  $field_instances['node-fearless_homepage_basic-field_image'] = array(
    'bundle' => 'fearless_homepage_basic',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Page Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'PageImages',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1000x1000',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -5,
    ),
  );

  // Exported field_instance:
  // 'node-fearless_homepage_basic-field_meta_description'.
  $field_instances['node-fearless_homepage_basic-field_meta_description'] = array(
    'bundle' => 'fearless_homepage_basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_meta_description',
    'label' => 'Meta Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 4,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage_basic-field_nav_expand'.
  $field_instances['node-fearless_homepage_basic-field_nav_expand'] = array(
    'bundle' => 'fearless_homepage_basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the navigation section that should be shown when a user visits this page.  If nothing is selected, the first option will be selected.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nav_expand',
    'label' => 'Navigation to Expand',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage_basic-field_scripts'.
  $field_instances['node-fearless_homepage_basic-field_scripts'] = array(
    'bundle' => 'fearless_homepage_basic',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_scripts',
    'label' => 'Scripts',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -1,
    ),
  );

  // Exported field_instance:
  // 'node-fearless_homepage_basic-field_thumbnail_image'.
  $field_instances['node-fearless_homepage_basic-field_thumbnail_image'] = array(
    'bundle' => 'fearless_homepage_basic',
    'deleted' => 0,
    'description' => 'Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_thumbnail_image',
    'label' => 'Thumbnail Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'meta',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1200x1200',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>');
  t('Meta Description');
  t('Navigation to Expand');
  t('Page Image');
  t('Scripts');
  t('Select the navigation section that should be shown when a user visits this page.  If nothing is selected, the first option will be selected.');
  t('This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.');
  t('Thumbnail Image');

  return $field_instances;
}
