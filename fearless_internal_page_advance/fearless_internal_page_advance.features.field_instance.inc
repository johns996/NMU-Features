<?php
/**
 * @file
 * fearless_internal_page_advance.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fearless_internal_page_advance_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-fearless_internal_page-field_meta_description'
  $field_instances['node-fearless_internal_page-field_meta_description'] = array(
    'bundle' => 'fearless_internal_page',
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

  // Exported field_instance:
  // 'node-fearless_internal_page-field_thumbnail_image'
  $field_instances['node-fearless_internal_page-field_thumbnail_image'] = array(
    'bundle' => 'fearless_internal_page',
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
  t('Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>');
  t('Meta Description');
  t('This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.');
  t('Thumbnail Image');

  return $field_instances;
}
