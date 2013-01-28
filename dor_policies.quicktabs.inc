<?php
/**
 * @file
 * dor_policies.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function dor_policies_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'how_to_related_links_and_policy_';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Related Policies, Links and Documents';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_policy_related_items-block_1',
      'hide_title' => 1,
      'title' => 'Policies',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_related_items-block_6',
      'hide_title' => 1,
      'title' => 'Items',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_related_links-block_1',
      'hide_title' => 1,
      'title' => 'Links',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_attachment_list-block_2',
      'hide_title' => 1,
      'title' => 'Documents',
      'weight' => '-97',
      'type' => 'block',
    ),
    4 => array(
      'bid' => 'views_delta_policy_document_revisions-block',
      'hide_title' => 1,
      'title' => 'Version',
      'weight' => '-96',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Documents');
  t('Items');
  t('Links');
  t('Policies');
  t('Related Policies, Links and Documents');
  t('Version');

  $export['how_to_related_links_and_policy_'] = $quicktabs;

  return $export;
}
