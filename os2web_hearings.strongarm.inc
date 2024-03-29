<?php
/**
 * @file
 * os2web_hearings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_hearings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2web_hearings_hearing_case';
  $strongarm->value = 0;
  $export['comment_anonymous_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2web_hearings_hearing_case';
  $strongarm->value = 1;
  $export['comment_default_mode_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2web_hearings_hearing_case';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2web_hearings_hearing_case';
  $strongarm->value = 0;
  $export['comment_form_location_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2web_hearings_hearing_case';
  $strongarm->value = '1';
  $export['comment_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2web_hearings_hearing_case';
  $strongarm->value = '0';
  $export['comment_preview_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2web_hearings_hearing_case';
  $strongarm->value = 0;
  $export['comment_subject_field_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_kun_dato';
  $strongarm->value = 'd';
  $export['date_format_kun_dato'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2web_hearings_hearing_case';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'os2web_meetings_meeting_detail_view' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '17',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_hearings_hearing';
  $strongarm->value = '0';
  $export['language_content_type_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_hearings_hearing_case';
  $strongarm->value = '0';
  $export['language_content_type_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_hearings_hearing';
  $strongarm->value = array(
    0 => 'menu-indholdsmenu',
  );
  $export['menu_options_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_hearings_hearing_case';
  $strongarm->value = array();
  $export['menu_options_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_hearings_hearing';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_hearings_hearing_case';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_hearings_hearing';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_hearings_hearing_case';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_hearings_hearing';
  $strongarm->value = '0';
  $export['node_preview_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_hearings_hearing_case';
  $strongarm->value = '1';
  $export['node_preview_os2web_hearings_hearing_case'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_hearings_hearing';
  $strongarm->value = 0;
  $export['node_submitted_os2web_hearings_hearing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_hearings_hearing_case';
  $strongarm->value = 1;
  $export['node_submitted_os2web_hearings_hearing_case'] = $strongarm;

  return $export;
}
