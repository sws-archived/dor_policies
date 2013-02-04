<?php
/**
 * @file
 * dor_policies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dor_policies_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'dor_policy_chapter_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy Chapter Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy Paging';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['id'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['field'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['required'] = 1;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_policy_book_target_id']['id'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['table'] = 'field_data_field_policy_book';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['field'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['relationship'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_policy_book_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Content: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section_number']['field_api_classes'] = 0;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_number']['id'] = 'field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['table'] = 'field_data_field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['field'] = 'field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['label'] = '';
  $handler->display->display_options['fields']['field_policy_number']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['alter']['text'] = '[field_section_number].[field_policy_number]';
  $handler->display->display_options['fields']['field_policy_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_policy_number']['element_class'] = 'policy-number';
  $handler->display->display_options['fields']['field_policy_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_policy_number']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_policy_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_policy_number']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title_1] [field_section_number]. [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_computed_section_number_value']['id'] = 'field_computed_section_number_value';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['table'] = 'field_data_field_computed_section_number';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['field'] = 'field_computed_section_number_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_policy_book_target_id';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Policy Chapter Listing from Book */
  $handler = $view->new_display('block', 'Policy Chapter Listing from Book', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chapters:';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section_number']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_section_number]. [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_computed_section_number']['id'] = 'field_computed_section_number';
  $handler->display->display_options['fields']['field_computed_section_number']['table'] = 'field_data_field_computed_section_number';
  $handler->display->display_options['fields']['field_computed_section_number']['field'] = 'field_computed_section_number';
  $handler->display->display_options['fields']['field_computed_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_computed_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_computed_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_computed_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_computed_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_policy_book_target_id']['id'] = 'field_policy_book_target_id';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['table'] = 'field_data_field_policy_book';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['field'] = 'field_policy_book_target_id';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary_options']['items_per_page'] = '25';

  /* Display: Policy Document Chapter Listing */
  $handler = $view->new_display('entityreference', 'Policy Document Chapter Listing', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'List chapters for the policy document edit page.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_section_number' => 0,
    'field_policy_number' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = '';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_policy_book_target_id']['id'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['table'] = 'field_data_field_policy_book';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['field'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['required'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_policy_book_target_id';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_computed_section_number_value']['id'] = 'field_computed_section_number_value';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['table'] = 'field_data_field_computed_section_number';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['field'] = 'field_computed_section_number_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['dor_policy_chapter_listing'] = $view;

  $view = new view;
  $view->name = 'dor_policy_document_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy Document Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy Paging';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_parent_chapter_node']['id'] = 'reverse_field_parent_chapter_node';
  $handler->display->display_options['relationships']['reverse_field_parent_chapter_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_parent_chapter_node']['field'] = 'reverse_field_parent_chapter_node';
  $handler->display->display_options['relationships']['reverse_field_parent_chapter_node']['required'] = 1;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['id'] = 'field_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['table'] = 'field_data_field_parent_chapter';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['field'] = 'field_parent_chapter_target_id';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['relationship'] = 'reverse_field_parent_chapter_node';
  $handler->display->display_options['relationships']['field_parent_chapter_target_id']['required'] = 1;
  /* Field: Content: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section_number']['field_api_classes'] = 0;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_number']['id'] = 'field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['table'] = 'field_data_field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['field'] = 'field_policy_number';
  $handler->display->display_options['fields']['field_policy_number']['relationship'] = 'reverse_field_parent_chapter_node';
  $handler->display->display_options['fields']['field_policy_number']['label'] = '';
  $handler->display->display_options['fields']['field_policy_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_policy_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['text'] = '[field_section_number].[field_policy_number]';
  $handler->display->display_options['fields']['field_policy_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_policy_number']['element_class'] = 'policy-number';
  $handler->display->display_options['fields']['field_policy_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_policy_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_policy_number']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_policy_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_policy_number']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_policy_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_policy_number']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_parent_chapter_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_section_number].[field_policy_number] [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'span';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Policy Number (field_policy_number) */
  $handler->display->display_options['sorts']['field_policy_number_value']['id'] = 'field_policy_number_value';
  $handler->display->display_options['sorts']['field_policy_number_value']['table'] = 'field_data_field_policy_number';
  $handler->display->display_options['sorts']['field_policy_number_value']['field'] = 'field_policy_number_value';
  $handler->display->display_options['sorts']['field_policy_number_value']['relationship'] = 'reverse_field_parent_chapter_node';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_parent_chapter_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Policy Detail Listing from Section */
  $handler = $view->new_display('block', 'Policy Detail Listing from Section', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Policies:';
  $handler->display->display_options['defaults']['header'] = FALSE;

  /* Display: Policy Chapter (Section) */
  $handler = $view->new_display('block', 'Policy Chapter (Section)', 'block_2');
  $export['dor_policy_document_listing'] = $view;

  $view = new view;
  $view->name = 'dor_policy_section_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy Section Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy Chapters';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_section_number' => 'field_section_number',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_section_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_number']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section_number']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_class'] = 'section-summary';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Policies';
  $handler->display->display_options['fields']['view']['element_type'] = '0';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view']['hide_empty'] = 1;
  $handler->display->display_options['fields']['view']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = 0;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_computed_section_number_value']['id'] = 'field_computed_section_number_value';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['table'] = 'field_data_field_computed_section_number';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['field'] = 'field_computed_section_number_value';
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_policy_book_target_id']['id'] = 'field_policy_book_target_id';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['table'] = 'field_data_field_policy_book';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['field'] = 'field_policy_book_target_id';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_policy_book_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy_section' => 'policy_section',
  );

  /* Display: Policy Section Listing */
  $handler = $view->new_display('block', 'Policy Section Listing', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Policy Listing TOC */
  $handler = $view->new_display('block', 'Policy Listing TOC', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_policy_book_target_id']['id'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['table'] = 'field_data_field_policy_book';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['field'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['field_policy_book_target_id']['required'] = 1;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['id'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['field'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['relationship'] = 'field_policy_book_target_id';
  $handler->display->display_options['relationships']['reverse_field_policy_book_node']['required'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Section number */
  $handler->display->display_options['fields']['field_section_number']['id'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['table'] = 'field_data_field_section_number';
  $handler->display->display_options['fields']['field_section_number']['field'] = 'field_section_number';
  $handler->display->display_options['fields']['field_section_number']['relationship'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['fields']['field_section_number']['label'] = '';
  $handler->display->display_options['fields']['field_section_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_section_number']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['text'] = '[field_section_number]. ';
  $handler->display->display_options['fields']['field_section_number']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_section_number']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_section_number']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_section_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_section_number']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_section_number']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_section_number']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_section_number']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_section_number']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_section_number] [title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_computed_section_number_value']['id'] = 'field_computed_section_number_value';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['table'] = 'field_data_field_computed_section_number';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['field'] = 'field_computed_section_number_value';
  $handler->display->display_options['sorts']['field_computed_section_number_value']['relationship'] = 'reverse_field_policy_book_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_policy_book_node_1';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $export['dor_policy_section_listing'] = $view;

  $view = new view;
  $view->name = 'policy_book_listing';
  $view->description = 'A listing of all Stanford Policy Books';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Policy Book Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Policy Manuals';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'browse-box';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 1;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Chapter Listing';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['view']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view']['hide_empty'] = 1;
  $handler->display->display_options['fields']['view']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy_book' => 'policy_book',
  );

  /* Display: Policy Manuals */
  $handler = $view->new_display('page', 'Policy Manuals', 'page_1');
  $handler->display->display_options['path'] = 'policies';
  $export['policy_book_listing'] = $view;

  return $export;
}
