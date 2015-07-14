<?php
/**
 * @file
 * fearless_themekey_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function fearless_themekey_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_attributes';
  $strongarm->value = array(
    'drupal:base_path' => array(
      'description' => 'Drupal: Base path - If Drupal is installed in a subdirectory, the base path will be \'/[subdirectory]/\', otherwise just \'/\'.',
      'page cache' => 1,
    ),
    'drupal:get_q' => array(
      'description' => 'Drupal: $_GET[\'q\'] - Current value of Drupal\'s query parameter "q"',
      'validator' => '',
      'page cache' => 1,
    ),
    'drupal:is_front_page' => array(
      'description' => 'Drupal: Is front page - \'true\' if current page is front page, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'drupal:path' => array(
      'description' => 'Drupal: Drupal path like "node/add/story" or path alias with support for wildcards.<br />
Query parameters are stripped off before the path gets examined. P.e. "node/add/story?destination=node" becomes "node/add/story" first. If you want to access query parameters, have a look at the <strong>system:query_param</strong> property.<br />
Wildcard characters are "#" for numeric parts and "%" for all characters. To match conditions against a certain part, use an identifier with the wildcard. For example "comment/reply/#xyz" matches all paths with "comment/reply" and a numeric third argument. You can then specify conditions for every wildcard argument using the property "drupal:path:wildcard" and the identifier you choose ("xyz" in this example).<br />
These are the possible wildcard replacements for foo/bar/42/test.html:<pre>
foo/bar/42/test.html
foo/bar/42/%
foo/bar/42
foo/bar/%/test.html
foo/bar/%/%
foo/bar/%
foo/bar/#/test.html
foo/bar/#/%
foo/bar/#
foo/bar
foo/%/42/test.html
foo/%/42/%
foo/%/42
foo/%/%/test.html
foo/%/%/%
foo/%/%
foo/%/#/test.html
foo/%/#/%
foo/%/#
foo/%
foo
%/bar/42/test.html
%/bar/42/%
%/bar/42
%/bar/%/test.html
%/bar/%/%
%/bar/%
%/bar/#/test.html
%/bar/#/%
%/bar/#
%/bar
%/%/42/test.html
%/%/42/%
%/%/42
%/%/%/test.html
%/%/%/%
%/%/%
%/%/#/test.html
%/%/#/%
%/%/#
%/%
%
</pre>',
      'validator' => 'themekey_validator_drupal_path',
      'page cache' => 1,
    ),
    'drupal:path:wildcard' => array(
      'description' => 'Wildcard of "drupal:path". See explanation of "drupal:path" for details.',
      'validator' => 'themekey_validator_wildcard',
      'page cache' => 1,
    ),
    'drupal:path_is_admin' => array(
      'description' => 'Drupal: Path is admin - \'true\' if current page\'s path belongs to the admin section, otherwise just \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'node:body_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_summary' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">summary</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:body_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">body</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:changed' => array(
      'description' => 'Node: Changed date - The date when the node was last edited/updated, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:changed_date' => array(
      'description' => 'Node: Changed date - The date without the time when the node was last edited/updated, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:changed_date_time' => array(
      'description' => 'Node: Changed date - The date including the time when the node was last edited/updated, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:created' => array(
      'description' => 'Node: Created date - The date when the node was created, formatted as unix timestamp like "1248873565".',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:created_date' => array(
      'description' => 'Node: Created date - The date without the time when the node was created, formatted like "2009-12-24"',
      'validator' => 'themekey_validator_date',
      'page cache' => 1,
    ),
    'node:created_date_time' => array(
      'description' => 'Node: Created date - The date including the time when the node was created, formatted like "2009-12-24 18:13:24"',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 1,
    ),
    'node:field_banner_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_banner_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_banner_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_banner_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_banner_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_banner_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_text_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_banner_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_banner_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_title_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_banner_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_banner_title_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_banner_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_carousel_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_carousel</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_carousel_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_carousel</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_carousel_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_carousel</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_carousel_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_carousel</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_carousel_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_carousel</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_closing_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_closing_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_closing_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_closing_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_closing_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_text_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_closing_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_closing_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_title_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_closing_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_closing_title_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_closing_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_extra_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_extra</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_extra_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_extra</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_methods_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_contact_methods</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_contact_methods_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_contact_methods</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_degrees_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_degrees</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_degrees_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_degrees</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_left_column_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_left_column</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_left_column_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_left_column</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_image_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_image_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_image_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_image_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_image_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_main_image</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_text_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_main_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_text_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_main_text</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_title_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_main_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_main_title_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_main_title</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_major_search_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_major_search</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_major_search_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_major_search</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_nav_expand_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_nav_expand</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_right_column_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_right_column</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_right_column_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_right_column</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_scripts_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_scripts</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_scripts_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_scripts</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_1_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_sub_image_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_1_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_sub_image_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_1_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_sub_image_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_1_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_sub_image_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_1_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_sub_image_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_2_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_sub_image_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_2_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_sub_image_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_2_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_sub_image_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_2_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_sub_image_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_2_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_sub_image_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_3_alt' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">alt</em> of the field <em class="placeholder">field_sub_image_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_3_fid' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">fid</em> of the field <em class="placeholder">field_sub_image_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_3_height' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">height</em> of the field <em class="placeholder">field_sub_image_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_3_title' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">title</em> of the field <em class="placeholder">field_sub_image_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_image_3_width' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">width</em> of the field <em class="placeholder">field_sub_image_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_1_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_text_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_1_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_text_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_2_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_text_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_2_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_text_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_3_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_text_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_text_3_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_text_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_1_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_title_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_1_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_title_1</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_2_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_title_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_2_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_title_2</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_3_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_sub_title_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_sub_title_3_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_sub_title_3</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_video_format' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">format</em> of the field <em class="placeholder">field_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:field_video_value' => array(
      'description' => 'Node: Field Value - The (simple scalar) value of the column <em class="placeholder">value</em> of the field <em class="placeholder">field_video</em>. The value will be converted in its string representation.',
      'page cache' => 1,
    ),
    'node:language' => array(
      'description' => 'Node: Language - The code of the selected language of a node (formatted like "en" or "de") or "neutral". See <a href="/responsivenmu/admin/config/language">admin/config/language</a> for the codes of your enabled languages',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'node:nid' => array(
      'description' => 'Node: ID - The id of a node (nid), can be found in the URL of the node, "node/23" or "node/23/edit" (23 = nid)',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:promote' => array(
      'description' => 'Node: Promoted - If the node is promoted to the front page. Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:sticky' => array(
      'description' => 'Node: Sticky - If the node is set "Sticky at top of lists". Possible values are "0" for true and "1" for false.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 1,
    ),
    'node:title' => array(
      'description' => 'Node: Title - The title of the node.',
      'page cache' => 1,
    ),
    'node:type' => array(
      'description' => 'Node: Type - The machine-readable content type of the node. See <a href="/responsivenmu/admin/structure/types">admin/structure/types</a> for your content types (use column "Type"). Drupal default types are "page" and "story".',
      'validator' => 'themekey_validator_node_type',
      'page cache' => 1,
    ),
    'node:uid' => array(
      'description' => 'Node: User ID - The node author\'s user id (uid). The user id can be found in the URL of the user\'s profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/responsivenmu/admin/user/user/list">admin/user/user/list</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'node:vid' => array(
      'description' => 'Node: The version id of a node (vid), mostly for internal use within ThemeKey. In most cases it\'s better to use node:nid within your rule chains.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
    'overlay:mode' => array(
      'description' => 'Overlay: Mode - The current overlay mode used to show the content. Note: If you add such a rule, the mode \'none\' will not work anymore. That means that different modules won\'t be able to turn off overlay manually. That\'s not an issue for drupal core. See <a href="https://api.drupal.org/api/drupal/modules!overlay!overlay.module/function/overlay_set_mode/7">function overlay_set_mode documentation</a> for details.',
      'validator' => 'themekey_validator_overlay_mode',
      'page cache' => 0,
    ),
    'path:node_alias' => array(
      'description' => 'Path: Node alias - The path alias assigned to a node.',
      'validator' => '',
      'page cache' => 1,
    ),
    'system:cookie' => array(
      'description' => 'System: Cookie - Every single cookie and its value if present will be formatted like \'COOKIE_NAME=COOKIE_VALUE\'',
      'page cache' => 0,
    ),
    'system:date' => array(
      'description' => 'System: Date - Current time formatted as Y-m-d (example: 2009-12-24)',
      'validator' => 'themekey_validator_date',
      'page cache' => 2,
    ),
    'system:date_time' => array(
      'description' => 'System: Date Time - Current time formatted as Y-m-d H:i:s (example: 2009-12-24 18:30:10)',
      'validator' => 'themekey_validator_date_time',
      'page cache' => 2,
    ),
    'system:day_of_month' => array(
      'description' => 'System: Day of Month - Current day of the month formatted as 1 - 31',
      'validator' => 'themekey_validator_day_of_month',
      'page cache' => 2,
    ),
    'system:day_of_week' => array(
      'description' => 'System: Day of Week - Current day of the week formatted as three letters \'Mon\' through \'Sun\'',
      'validator' => 'themekey_validator_day_of_week',
      'page cache' => 2,
    ),
    'system:dummy' => array(
      'description' => 'System: Dummy - Dummy property. Value is always \'dummy\'',
      'page cache' => 1,
    ),
    'system:host' => array(
      'description' => 'System: HTTP_HOST - The hostname/domain of the site without http:// or https://, like "www.drupal.org" or "www.biologis.com"',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 1,
    ),
    'system:http_header' => array(
      'description' => 'System: HTTP Header - Every single HTTP header and its value if present will be formatted like \'HEADER_NAME=HEADER_VALUE\'',
      'page cache' => 0,
    ),
    'system:https' => array(
      'description' => 'System: \'HTTPS\' - Set to \'true\' value if the script was queried through the HTTPS protocol, otherwise \'false\'.',
      'validator' => 'themekey_validator_string_boolean',
      'page cache' => 1,
    ),
    'system:month' => array(
      'description' => 'System: Month - Current month formatted as \'Jan\' through \'Dec\'',
      'validator' => 'themekey_validator_month',
      'page cache' => 2,
    ),
    'system:post' => array(
      'description' => 'System: POST - Every single POST value formatted like \'POST_VARIABLE_NAME=POST_VARIABLE_VALUE\'. Example: form_id=node_form. If the POST value is not a scalar but a complex type like array or object, the resulting string is formatted as \'POST_VARIABLE_NAME\' without a value.',
      'page cache' => 0,
    ),
    'system:query_param' => array(
      'description' => 'System: Query Parameter - Every single query parameter other than \'q\' and its value, if present. Note that values are url decoded. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will cause three entries \'foo=bar\', \'dummy\' and \'filter=tid:27\'. For \'q\', see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:query_string' => array(
      'description' => 'System: Query String - Complete query string except parameter \'q\'. Example: \'?q=node&foo=bar&dummy&filter=tid%3A27\' will result in \'foo=bar&dummy&filter=tid%3A27\'. For \'q\' see property drupal:get_q.',
      'page cache' => 1,
    ),
    'system:random' => array(
      'description' => 'System: Random - A random value that could be \'0\' or 1\'.',
      'validator' => 'themekey_validator_numeric_boolean',
      'page cache' => 0,
    ),
    'system:referer' => array(
      'description' => 'System: \'HTTP_REFERER\' - The address of the page (if any) which referred the user agent to the current page. This is set by the user agent. Not all user agents will set this, and some provide the ability to modify HTTP_REFERER as a feature. In short, it cannot really be trusted.',
      'page cache' => 0,
    ),
    'system:remote_ip' => array(
      'description' => 'System: \'REMOTE_ADDR\' - The IP address from which the user is viewing the current page.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_ip' => array(
      'description' => 'System: \'SERVER_ADDR\' - The IP address of the server under which the current script is executing.',
      'validator' => 'themekey_validator_ip_address',
      'page cache' => 0,
    ),
    'system:server_name' => array(
      'description' => 'System:  \'SERVER_NAME\' - The name of the server host under which the current script is executing. If the script is running on a virtual host, this will be the value defined for that virtual host.',
      'page cache' => 0,
    ),
    'system:server_port' => array(
      'description' => 'System: \'SERVER_PORT\' - The port on the server machine being used by the web server for communication. For default setups, this will be \'80\'; using SSL, for instance, will change this to whatever your defined secure HTTP port is.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 0,
    ),
    'system:session' => array(
      'description' => 'System: Session - Every single session parameter and its value, if a value is present and a simple type (string, integer, boolean). Booleans are represented as integers; \'1\' as TRUE and \'0\' as FALSE.',
      'page cache' => 1,
    ),
    'system:time' => array(
      'description' => 'System: Time - Current time formatted as H:i:s (example: 18:30:10)',
      'validator' => 'themekey_validator_time',
      'page cache' => 2,
    ),
    'system:user_agent' => array(
      'description' => 'System: \'HTTP_USER_AGENT\' - Contents of the User-Agent: header from the current request, if there is one. This is a string denoting the user agent which is accessing the page. A typical example is: Mozilla/4.5 [en] (X11; U; Linux 2.2.9 i586).',
      'page cache' => 0,
    ),
    'system:user_browser' => array(
      'description' => 'System: Browser - Information about user\'s browser. Possible values: \'Blazer [VERSION]\', \'Internet Explorer [VERSION]\', \'Internet Explorer Mobile [VERSION]\', \'Mozilla Firefox [VERSION]\', \'Netscape [VERSION]\', \'Google Chrome [VERSION]\', \'Safari [VERSION]\', \'Galeon [VERSION]\', \'Konqueror [VERSION]\', \'Gecko based\', \'Opera [VERSION]\', \'Lynx [VERSION]\', \'Fennec [VERSION]\', \'Maemo [VERSION]\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_browser_simplified' => array(
      'description' => 'System: Browser - Simplified information about user\'s browser. Possible values: \'Blazer\', \'Internet Explorer\', \'Internet Explorer Mobile\', \'Mozilla Firefox\', \'Netscape\', \'Google Chrome\', \'Safari\', \'Galeon\', \'Konqueror\', \'Gecko based\', \'Opera\', \'Lynx\', \'Fennec\', \'Maemo\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_browser_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os' => array(
      'description' => 'System: Operating System - Information about user\'s browser. Possible values: \'Windows XP\', \'Windows Vista\', \'Windows 98\', \'Windows 2000\', \'Windows 2003 server\', \'Windows NT\',  \'Windows ME\', \'Windows CE\', \'Windows ME\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'system:user_os_simplified' => array(
      'description' => 'System: Operating System - Simplified information about user\'s browser. Possible values: \'Windows\', \'Windows Phone\', \'iPhone\', \'iPad\', \'Mac OS X\', \'Macintosh\', \'Linux\', \'Free BSD\', \'Symbian\', \'webOS\', \'Android\', \'Blackberry\', \'unknown\'',
      'page cache' => 0,
      'deprecated' => TRUE,
      'deprecated message' => 'Property system:user_os_simplified is deprecated. Consider to use one of the new properties ThemeKey provides in combination with <a href="https://drupal.org/project/browscap">Browscap</a>, <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect API</a>, or <a href="https://drupal.org/project/mobile_detect_api">Mobile Detect</a>.',
    ),
    'user:hostname' => array(
      'description' => 'User: Hostname - The user hostname property which is the IP address of client machine, adjusted for reverse proxy. Text from Drupal bootstrap.inc:
      If Drupal is behind a reverse proxy, we use the X-Forwarded-For header instead of $_SERVER[\'REMOTE_ADDR\'], which would be the IP address of the proxy server, and not the client\'s.',
      'validator' => 'themekey_validator_http_host',
      'page cache' => 0,
    ),
    'user:language' => array(
      'description' => 'User: Language - The language the user has set in the settings of his profile page.
      Format is the language code (for example "en" for English or "de" for German) that can be found on <a href="/responsivenmu/admin/config/regional/language/overview">admin/config/regional/language/overview</a>.',
      'validator' => 'themekey_validator_language',
      'page cache' => 1,
    ),
    'user:name' => array(
      'description' => 'User: Name - The username of the user. See <a href="/responsivenmu/admin/people/people">admin/people/people</a> for your users.',
      'page cache' => 1,
    ),
    'user:role' => array(
      'description' => 'User: Role - Defined user roles (examples: \'anonymous user\', \'authenticated user\')',
      'validator' => 'themekey_validator_role',
      'page cache' => 1,
    ),
    'user:uid' => array(
      'description' => 'User: ID - The id of the user (uid). The user id can be found in the URL of the users profile page, "user/23" or "user/23/edit" (23 = uid). See <a href="/responsivenmu/admin/people/people">admin/people/people</a> for your users.',
      'validator' => 'themekey_validator_ctype_digit',
      'page cache' => 1,
    ),
  );
  $export['themekey_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_cron_rules_processed';
  $strongarm->value = array();
  $export['themekey_cron_rules_processed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'themekey_properties';
  $strongarm->value = array(
    'drupal:base_path' => 'drupal:base_path',
    'drupal:get_q' => 'drupal:get_q',
    'drupal:is_front_page' => 'drupal:is_front_page',
    'drupal:path' => 'drupal:path',
    'drupal:path:wildcard' => 'drupal:path:wildcard',
    'drupal:path_is_admin' => 'drupal:path_is_admin',
    'node:body_format' => 'node:body_format',
    'node:body_summary' => 'node:body_summary',
    'node:body_value' => 'node:body_value',
    'node:changed' => 'node:changed',
    'node:changed_date' => 'node:changed_date',
    'node:changed_date_time' => 'node:changed_date_time',
    'node:created' => 'node:created',
    'node:created_date' => 'node:created_date',
    'node:created_date_time' => 'node:created_date_time',
    'node:field_banner_image_alt' => 'node:field_banner_image_alt',
    'node:field_banner_image_fid' => 'node:field_banner_image_fid',
    'node:field_banner_image_height' => 'node:field_banner_image_height',
    'node:field_banner_image_title' => 'node:field_banner_image_title',
    'node:field_banner_image_width' => 'node:field_banner_image_width',
    'node:field_banner_text_format' => 'node:field_banner_text_format',
    'node:field_banner_text_value' => 'node:field_banner_text_value',
    'node:field_banner_title_format' => 'node:field_banner_title_format',
    'node:field_banner_title_value' => 'node:field_banner_title_value',
    'node:field_carousel_alt' => 'node:field_carousel_alt',
    'node:field_carousel_fid' => 'node:field_carousel_fid',
    'node:field_carousel_height' => 'node:field_carousel_height',
    'node:field_carousel_title' => 'node:field_carousel_title',
    'node:field_carousel_width' => 'node:field_carousel_width',
    'node:field_closing_image_alt' => 'node:field_closing_image_alt',
    'node:field_closing_image_fid' => 'node:field_closing_image_fid',
    'node:field_closing_image_height' => 'node:field_closing_image_height',
    'node:field_closing_image_title' => 'node:field_closing_image_title',
    'node:field_closing_image_width' => 'node:field_closing_image_width',
    'node:field_closing_text_format' => 'node:field_closing_text_format',
    'node:field_closing_text_value' => 'node:field_closing_text_value',
    'node:field_closing_title_format' => 'node:field_closing_title_format',
    'node:field_closing_title_value' => 'node:field_closing_title_value',
    'node:field_contact_extra_format' => 'node:field_contact_extra_format',
    'node:field_contact_extra_value' => 'node:field_contact_extra_value',
    'node:field_contact_methods_format' => 'node:field_contact_methods_format',
    'node:field_contact_methods_value' => 'node:field_contact_methods_value',
    'node:field_degrees_format' => 'node:field_degrees_format',
    'node:field_degrees_value' => 'node:field_degrees_value',
    'node:field_left_column_format' => 'node:field_left_column_format',
    'node:field_left_column_value' => 'node:field_left_column_value',
    'node:field_main_image_alt' => 'node:field_main_image_alt',
    'node:field_main_image_fid' => 'node:field_main_image_fid',
    'node:field_main_image_height' => 'node:field_main_image_height',
    'node:field_main_image_title' => 'node:field_main_image_title',
    'node:field_main_image_width' => 'node:field_main_image_width',
    'node:field_main_text_format' => 'node:field_main_text_format',
    'node:field_main_text_value' => 'node:field_main_text_value',
    'node:field_main_title_format' => 'node:field_main_title_format',
    'node:field_main_title_value' => 'node:field_main_title_value',
    'node:field_major_search_format' => 'node:field_major_search_format',
    'node:field_major_search_value' => 'node:field_major_search_value',
    'node:field_nav_expand_value' => 'node:field_nav_expand_value',
    'node:field_right_column_format' => 'node:field_right_column_format',
    'node:field_right_column_value' => 'node:field_right_column_value',
    'node:field_scripts_format' => 'node:field_scripts_format',
    'node:field_scripts_value' => 'node:field_scripts_value',
    'node:field_sub_image_1_alt' => 'node:field_sub_image_1_alt',
    'node:field_sub_image_1_fid' => 'node:field_sub_image_1_fid',
    'node:field_sub_image_1_height' => 'node:field_sub_image_1_height',
    'node:field_sub_image_1_title' => 'node:field_sub_image_1_title',
    'node:field_sub_image_1_width' => 'node:field_sub_image_1_width',
    'node:field_sub_image_2_alt' => 'node:field_sub_image_2_alt',
    'node:field_sub_image_2_fid' => 'node:field_sub_image_2_fid',
    'node:field_sub_image_2_height' => 'node:field_sub_image_2_height',
    'node:field_sub_image_2_title' => 'node:field_sub_image_2_title',
    'node:field_sub_image_2_width' => 'node:field_sub_image_2_width',
    'node:field_sub_image_3_alt' => 'node:field_sub_image_3_alt',
    'node:field_sub_image_3_fid' => 'node:field_sub_image_3_fid',
    'node:field_sub_image_3_height' => 'node:field_sub_image_3_height',
    'node:field_sub_image_3_title' => 'node:field_sub_image_3_title',
    'node:field_sub_image_3_width' => 'node:field_sub_image_3_width',
    'node:field_sub_text_1_format' => 'node:field_sub_text_1_format',
    'node:field_sub_text_1_value' => 'node:field_sub_text_1_value',
    'node:field_sub_text_2_format' => 'node:field_sub_text_2_format',
    'node:field_sub_text_2_value' => 'node:field_sub_text_2_value',
    'node:field_sub_text_3_format' => 'node:field_sub_text_3_format',
    'node:field_sub_text_3_value' => 'node:field_sub_text_3_value',
    'node:field_sub_title_1_format' => 'node:field_sub_title_1_format',
    'node:field_sub_title_1_value' => 'node:field_sub_title_1_value',
    'node:field_sub_title_2_format' => 'node:field_sub_title_2_format',
    'node:field_sub_title_2_value' => 'node:field_sub_title_2_value',
    'node:field_sub_title_3_format' => 'node:field_sub_title_3_format',
    'node:field_sub_title_3_value' => 'node:field_sub_title_3_value',
    'node:field_video_format' => 'node:field_video_format',
    'node:field_video_value' => 'node:field_video_value',
    'node:language' => 'node:language',
    'node:nid' => 'node:nid',
    'node:promote' => 'node:promote',
    'node:sticky' => 'node:sticky',
    'node:title' => 'node:title',
    'node:type' => 'node:type',
    'node:uid' => 'node:uid',
    'node:vid' => 'node:vid',
    'overlay:mode' => 'overlay:mode',
    'path:node_alias' => 'path:node_alias',
    'system:cookie' => 'system:cookie',
    'system:date' => 'system:date',
    'system:date_time' => 'system:date_time',
    'system:day_of_month' => 'system:day_of_month',
    'system:day_of_week' => 'system:day_of_week',
    'system:dummy' => 'system:dummy',
    'system:host' => 'system:host',
    'system:http_header' => 'system:http_header',
    'system:https' => 'system:https',
    'system:month' => 'system:month',
    'system:post' => 'system:post',
    'system:query_param' => 'system:query_param',
    'system:query_string' => 'system:query_string',
    'system:random' => 'system:random',
    'system:referer' => 'system:referer',
    'system:remote_ip' => 'system:remote_ip',
    'system:server_ip' => 'system:server_ip',
    'system:server_name' => 'system:server_name',
    'system:server_port' => 'system:server_port',
    'system:session' => 'system:session',
    'system:time' => 'system:time',
    'system:user_agent' => 'system:user_agent',
    'system:user_browser' => 'system:user_browser',
    'system:user_browser_simplified' => 'system:user_browser_simplified',
    'system:user_os' => 'system:user_os',
    'system:user_os_simplified' => 'system:user_os_simplified',
    'user:hostname' => 'user:hostname',
    'user:language' => 'user:language',
    'user:name' => 'user:name',
    'user:role' => 'user:role',
    'user:uid' => 'user:uid',
  );
  $export['themekey_properties'] = $strongarm;

  return $export;
}
