<?php
/**
 * @file
 * dor_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dor_policies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dor_policies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dor_policies_node_info() {
  $items = array(
    'policy_book' => array(
      'name' => t('Policy Book'),
      'base' => 'node_content',
      'description' => t('Policy Book information and main category (like RPH)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'policy_document' => array(
      'name' => t('Policy Document'),
      'base' => 'node_content',
      'description' => t('A <b>Policy Document</b> is an individual unit of policy within a Policy Chapter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'policy_section' => array(
      'name' => t('Policy Chapter'),
      'base' => 'node_content',
      'description' => t('A <b>Policy Chapter</b> is a group of Policy Documents within a Policy Manual.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
