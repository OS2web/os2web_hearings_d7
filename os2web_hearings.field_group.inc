<?php
/**
 * @file
 * os2web_hearings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_hearings_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_setti|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_setti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '8',
    'children' => array(
      0 => 'field_os2web_hearings_type',
      1 => 'field_os2web_hearings_enddate',
      2 => 'field_os2web_hearings_startdate',
      3 => 'path',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_os2web_hearings_case_setti|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_tabs|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hearing',
    'weight' => '0',
    'children' => array(
      0 => 'group_os2web_hearings_case_text',
      1 => 'group_os2web_hearings_case_taxon',
      2 => 'group_os2web_hearings_case_setti',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_os2web_hearings_case_tabs|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_taxon|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_taxon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Emneord',
    'weight' => '7',
    'children' => array(
      0 => 'field_os2web_base_field_kle_ref',
      1 => 'field_os2web_base_field_loca_ref',
      2 => 'field_os2web_base_field_organiz',
      3 => 'field_os2web_base_field_politics',
      4 => 'field_os2web_base_field_edi_tags',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_os2web_hearings_case_taxon|node|os2web_hearings_hearing_case|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_os2web_hearings_case_text|node|os2web_hearings_hearing_case|form';
  $field_group->group_name = 'group_os2web_hearings_case_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_hearings_hearing_case';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_os2web_hearings_case_tabs';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_os2web_hearings_case_text|node|os2web_hearings_hearing_case|form'] = $field_group;

  return $export;
}