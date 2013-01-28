<?php
/**
 * @file
 * dor_policies.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dor_policies_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:policies
  $menu_links['main-menu:policies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'policies',
    'router_path' => 'policies',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Policies');


  return $menu_links;
}
