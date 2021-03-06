<?php
/**
 * @file
 * gsb_feature_business_website_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_business_website_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_website_category_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'GSB Business Websites Category Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'nothing',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name_2']['id'] = 'name_2';
  $handler->display->display_options['fields']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_2']['field'] = 'name';
  $handler->display->display_options['fields']['name_2']['label'] = '';
  $handler->display->display_options['fields']['name_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['name_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name_2']['element_label_colon'] = FALSE;
  /* Field: Url term name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['ui_name'] = 'Url term name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_1']['convert_spaces'] = TRUE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'library/conduct-research/business-websites/[name_1]';
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'letter-group\'>[name_2]</div> ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'business_website_categories' => 'business_website_categories',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Business Website Categories';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['business_website_category_listing'] = $view;

  $view = new view();
  $view->name = 'business_websites_category_detail';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'GSB Business Websites Category Detail';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: URL */
  $handler->display->display_options['fields']['field_link_single']['id'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['table'] = 'field_data_field_link_single';
  $handler->display->display_options['fields']['field_link_single']['field'] = 'field_link_single';
  $handler->display->display_options['fields']['field_link_single']['label'] = '';
  $handler->display->display_options['fields']['field_link_single']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_single']['alter']['text'] = '<a href=" [field_link_single]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['field_link_single']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_link_single']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_link_single']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_single']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_single']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_link_single']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_single]" target=\'_blank\'>[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_bus_website_description']['id'] = 'field_bus_website_description';
  $handler->display->display_options['fields']['field_bus_website_description']['table'] = 'field_data_field_bus_website_description';
  $handler->display->display_options['fields']['field_bus_website_description']['field'] = 'field_bus_website_description';
  $handler->display->display_options['fields']['field_bus_website_description']['label'] = '';
  $handler->display->display_options['fields']['field_bus_website_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bus_website_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Categories (field_bus_website_categories) */
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['id'] = 'field_bus_website_categories_tid';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['table'] = 'field_data_field_bus_website_categories';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['field'] = 'field_bus_website_categories_tid';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['validate_options']['vocabularies'] = array(
    'business_website_categories' => 'business_website_categories',
  );
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_bus_website_categories_tid']['validate_options']['transform'] = TRUE;
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
    'business_website' => 'business_website',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Business Websites';
  $handler->display->display_options['pane_category']['name'] = 'Non-customizable Content Lists';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_bus_website_categories_tid' => array(
      'type' => 'panel',
      'context' => 'entity:field_collection_item.field_cta_action',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Categories (field_bus_website_categories)',
    ),
  );
  $export['business_websites_category_detail'] = $view;

  return $export;
}
