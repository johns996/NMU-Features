<?php
/**
 * @file
 * fearless_homepage.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function fearless_homepage_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-fearless_homepage-field_banner_image'
  $field_instances['node-fearless_homepage-field_banner_image'] = array(
    'bundle' => 'fearless_homepage',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_banner_image',
    'label' => 'Banner Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'internal-homepage/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '975x340',
      'min_resolution' => '975x340',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_banner_text'
  $field_instances['node-fearless_homepage-field_banner_text'] = array(
    'bundle' => 'fearless_homepage',
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
    'field_name' => 'field_banner_text',
    'label' => 'Banner Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
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

  // Exported field_instance: 'node-fearless_homepage-field_banner_title'
  $field_instances['node-fearless_homepage-field_banner_title'] = array(
    'bundle' => 'fearless_homepage',
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
    'field_name' => 'field_banner_title',
    'label' => 'Banner Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_carousel'
  $field_instances['node-fearless_homepage-field_carousel'] = array(
    'bundle' => 'fearless_homepage',
    'deleted' => 0,
    'description' => 'Use this section to upload 2-6 images that will be placed in an image carousel.  
<ul>
<li>Images must be 500 x 450 pixels</li>
<li>The title text provided for an image will be use as a button</li>
<li>The alt text will be used as the image caption</li>
<li>Links can be added to either the title or alt fields</li>
<li>Links need to be added by hand, similar to this example: <strong>&lt;a href="http://www.nmu.edu/about"&gt;About NMU&lt;/a&gt;</strong></li>
</ul>',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_carousel',
    'label' => 'Carousel',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'internal-homepage/carousel',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '500x450',
      'min_resolution' => '500x450',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'medium',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_closing_image'
  $field_instances['node-fearless_homepage-field_closing_image'] = array(
    'bundle' => 'fearless_homepage',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_closing_image',
    'label' => 'Closing Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'internal-homepage/images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '975x500',
      'min_resolution' => '975x500',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_closing_text'
  $field_instances['node-fearless_homepage-field_closing_text'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field allows &lt;a&gt; and &lt;br&gt; tags.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_closing_text',
    'label' => 'Closing Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_closing_title'
  $field_instances['node-fearless_homepage-field_closing_title'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_closing_title',
    'label' => 'Closing Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_contact_extra'
  $field_instances['node-fearless_homepage-field_contact_extra'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_contact_extra',
    'label' => 'Contact Extra',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_contact_methods'
  $field_instances['node-fearless_homepage-field_contact_methods'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_contact_methods',
    'label' => 'Contact Methods',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_degrees'
  $field_instances['node-fearless_homepage-field_degrees'] = array(
    'bundle' => 'fearless_homepage',
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
    'field_name' => 'field_degrees',
    'label' => 'Degrees',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 15,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_left_column'
  $field_instances['node-fearless_homepage-field_left_column'] = array(
    'bundle' => 'fearless_homepage',
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
    'field_name' => 'field_left_column',
    'label' => 'Left Column',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_meta_description'
  $field_instances['node-fearless_homepage-field_meta_description'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_nav_expand'
  $field_instances['node-fearless_homepage-field_nav_expand'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 17,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_right_column'
  $field_instances['node-fearless_homepage-field_right_column'] = array(
    'bundle' => 'fearless_homepage',
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
    'field_name' => 'field_right_column',
    'label' => 'Right Column',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 8,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_scripts'
  $field_instances['node-fearless_homepage-field_scripts'] = array(
    'bundle' => 'fearless_homepage',
    'default_value' => array(
      0 => array(
        'value' => '<script src="/sites/all/themes/zen_nmu/js/vendor/jquery.cycle2.min.js"></script>',
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
        'weight' => 0,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-fearless_homepage-field_thumbnail_image'
  $field_instances['node-fearless_homepage-field_thumbnail_image'] = array(
    'bundle' => 'fearless_homepage',
    'deleted' => 0,
    'description' => 'Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
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
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Banner Image');
  t('Banner Text');
  t('Banner Title');
  t('Carousel');
  t('Closing Image');
  t('Closing Text');
  t('Closing Title');
  t('Contact Extra');
  t('Contact Methods');
  t('Degrees');
  t('Images added to this field will be used in search engine results as the preferred thumbnail for a page.  Social networks will also use this image when a user shares this particular page.  This field will store the image in a <strong>meta thumbnail</strong> tag and a <strong>og:image</strong> tag.<br><br>
Images should have a square aspect ratio and be either 1200x1200 or 400x400.  It is important to note that Facebook will crop this image 1.91:1 ratio (1200x630) so if this image is primarily being added for Facebook, that is the preferred size.<br>');
  t('Left Column');
  t('Meta Description');
  t('Navigation to Expand');
  t('Right Column');
  t('Scripts');
  t('This field allows &lt;a&gt; and &lt;br&gt; tags.');
  t('This field can be use to provide a description of a page to search engines and social networks.  Content entered here will be used both in a <strong>meta description</strong> tag and a <strong>og:description tag</strong>.');
  t('Thumbnail Image');
  t('Use this section to upload 2-6 images that will be placed in an image carousel.  
<ul>
<li>Images must be 500 x 450 pixels</li>
<li>The title text provided for an image will be use as a button</li>
<li>The alt text will be used as the image caption</li>
<li>Links can be added to either the title or alt fields</li>
<li>Links need to be added by hand, similar to this example: <strong>&lt;a href="http://www.nmu.edu/about"&gt;About NMU&lt;/a&gt;</strong></li>
</ul>');

  return $field_instances;
}
