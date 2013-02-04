<?php
/**
 * @file
 * dor_policies.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dor_policies_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_content|node|policy_document|form';
  $field_group->group_name = 'group_policy_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_policy_subsection',
      2 => 'field_suppress_jump_to_template',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Policy Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_policy_content|node|policy_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_essential|node|policy_document|form';
  $field_group->group_name = 'group_policy_essential';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essential Policy Document Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_parent_chapter',
      1 => 'field_policy_number',
      2 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Essential Policy Document Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_policy_essential|node|policy_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_metadata|node|policy_document|form';
  $field_group->group_name = 'group_policy_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policy Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_policy_current_version',
      1 => 'field_policy_original_issue',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Policy Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_policy_metadata|node|policy_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policy_related|node|policy_document|form';
  $field_group->group_name = 'group_policy_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_policy_attachments',
      1 => 'field_policy_related',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_policy_related|node|policy_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_content|node|policy_section|form';
  $field_group->group_name = 'group_section_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Section Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_section_content|node|policy_section|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_essential|node|policy_section|form';
  $field_group->group_name = 'group_section_essential';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'policy_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Essential Policy Section Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_section_number',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Essential Policy Section Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_section_essential|node|policy_section|form'] = $field_group;

  return $export;
}
