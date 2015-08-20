<?php
/**
 * @file
 * alumni_newsletter.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function alumni_newsletter_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_connected_section'
  $field_instances['node-programs_what_s_new_nmu-field_connected_section'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_connected_section',
    'label' => 'Connected Section',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_events_section'
  $field_instances['node-programs_what_s_new_nmu-field_events_section'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_events_section',
    'label' => 'Events Section',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_feature_section'
  $field_instances['node-programs_what_s_new_nmu-field_feature_section'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_feature_section',
    'label' => 'Feature Section',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_footer_section'
  $field_instances['node-programs_what_s_new_nmu-field_footer_section'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_footer_section',
    'label' => 'Footer Section',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_meta_description'
  $field_instances['node-programs_what_s_new_nmu-field_meta_description'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-programs_what_s_new_nmu-field_nav_expand'
  $field_instances['node-programs_what_s_new_nmu-field_nav_expand'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the navigation section that should be shown when a user visits this page.  If nothing is selected, the first option will be selected.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 5,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-programs_what_s_new_nmu-field_scripts'
  $field_instances['node-programs_what_s_new_nmu-field_scripts'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => array(
      0 => array(
        'value' => '<!-- -->',
        'format' => 'php_code',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-programs_what_s_new_nmu-field_sidebar'
  $field_instances['node-programs_what_s_new_nmu-field_sidebar'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sidebar',
    'label' => 'Sidebar',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_social_media_1'
  $field_instances['node-programs_what_s_new_nmu-field_social_media_1'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social_media_1',
    'label' => 'Social Media 1',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_social_media_2'
  $field_instances['node-programs_what_s_new_nmu-field_social_media_2'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_social_media_2',
    'label' => 'Social Media 2',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-programs_what_s_new_nmu-field_thumbnail_image'
  $field_instances['node-programs_what_s_new_nmu-field_thumbnail_image'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'deleted' => 0,
    'description' => 'Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-programs_what_s_new_nmu-field_visitors'
  $field_instances['node-programs_what_s_new_nmu-field_visitors'] = array(
    'bundle' => 'programs_what_s_new_nmu',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_visitors',
    'label' => 'Visitors',
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
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Connected Section');
  t('Events Section');
  t('Feature Section');
  t('Footer Section');
  t('Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>');
  t('Meta Description');
  t('Navigation to Expand');
  t('Scripts');
  t('Select the navigation section that should be shown when a user visits this page.  If nothing is selected, the first option will be selected.');
  t('Sidebar');
  t('Social Media 1');
  t('Social Media 2');
  t('This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.');
  t('Thumbnail Image');
  t('Visitors');

  return $field_instances;
}
