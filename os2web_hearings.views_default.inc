<?php
/**
 * @file
 * os2web_hearings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_hearings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_hearings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hearings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Høringer og afgørelser';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Se alle';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_os2web_hearings_type' => 'field_os2web_hearings_type',
    'title' => 'title',
    'field_os2web_hearings_enddate' => 'field_os2web_hearings_enddate',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_os2web_hearings_type' => array(
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
    'field_os2web_hearings_enddate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_os2web_hearings_type']['id'] = 'field_os2web_hearings_type';
  $handler->display->display_options['fields']['field_os2web_hearings_type']['table'] = 'field_data_field_os2web_hearings_type';
  $handler->display->display_options['fields']['field_os2web_hearings_type']['field'] = 'field_os2web_hearings_type';
  $handler->display->display_options['fields']['field_os2web_hearings_type']['label'] = 'Fase';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Beskrivelse';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Slutdato */
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['id'] = 'field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['table'] = 'field_data_field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['field'] = 'field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['label'] = 'Frist';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Startdato (field_os2web_hearings_startdate) */
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['id'] = 'field_os2web_hearings_startdate_value';
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['table'] = 'field_data_field_os2web_hearings_startdate';
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['field'] = 'field_os2web_hearings_startdate_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_hearings_hearing_case' => 'os2web_hearings_hearing_case',
  );

  /* Display: Høringer */
  $handler = $view->new_display('page', 'Høringer', 'page');
  $handler->display->display_options['display_description'] = 'Search/overview page for hearings';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$node = node_load(variable_get(\'os2web_hearings_page_info_nid\'), \'\');
if(is_object($node)){
  $node->title = NULL;
  print drupal_render(node_view($node));
}
?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_hearings_hearing_case' => 'os2web_hearings_hearing_case',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Slutdato (field_os2web_hearings_enddate) */
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['id'] = 'field_os2web_hearings_enddate_value_1';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['table'] = 'field_data_field_os2web_hearings_enddate';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['field'] = 'field_os2web_hearings_enddate_value';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['expose']['operator_id'] = 'field_os2web_hearings_enddate_value_1_op';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['expose']['label'] = 'Fra';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['expose']['operator'] = 'field_os2web_hearings_enddate_value_1_op';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['expose']['identifier'] = 'from_date';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value_1']['form_type'] = 'date_text';
  /* Filterkriterie: Indhold: Slutdato (field_os2web_hearings_enddate) */
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['id'] = 'field_os2web_hearings_enddate_value';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['table'] = 'field_data_field_os2web_hearings_enddate';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['field'] = 'field_os2web_hearings_enddate_value';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['expose']['operator_id'] = 'field_os2web_hearings_enddate_value_op';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['expose']['label'] = 'Til';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['expose']['operator'] = 'field_os2web_hearings_enddate_value_op';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['expose']['identifier'] = 'to_date';
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_hearings_enddate_value']['form_type'] = 'date_text';
  /* Filterkriterie: Indhold: Type (field_os2web_hearings_type) */
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['id'] = 'field_os2web_hearings_type_value';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['table'] = 'field_data_field_os2web_hearings_type';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['field'] = 'field_os2web_hearings_type_value';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['expose']['operator_id'] = 'field_os2web_hearings_type_value_op';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['expose']['operator'] = 'field_os2web_hearings_type_value_op';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['expose']['identifier'] = 'field_os2web_hearings_type_value';
  $handler->display->display_options['filters']['field_os2web_hearings_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    4 => 0,
    7 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'hoeringer';

  /* Display: Høringer resume */
  $handler = $view->new_display('block', 'Høringer resume', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Høringer og afgørelser';
  $handler->display->display_options['display_description'] = 'Resume, showing 3 latest hearings';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/hoeringer">Se alle i høring</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Startdato (field_os2web_hearings_startdate) */
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['id'] = 'field_os2web_hearings_startdate_value';
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['table'] = 'field_data_field_os2web_hearings_startdate';
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['field'] = 'field_os2web_hearings_startdate_value';
  $handler->display->display_options['sorts']['field_os2web_hearings_startdate_value']['order'] = 'DESC';
  $translatables['os2web_hearings'] = array(
    t('Master'),
    t('Høringer og afgørelser'),
    t('Se alle'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Fase'),
    t('Beskrivelse'),
    t('Frist'),
    t('Høringer'),
    t('Search/overview page for hearings'),
    t('mere'),
    t('Fra'),
    t('Til'),
    t('Status'),
    t('Høringer resume'),
    t('Resume, showing 3 latest hearings'),
    t('<a href="/hoeringer">Se alle i høring</a>'),
  );
  $export['os2web_hearings'] = $view;

  $view = new view();
  $view->name = 'os2web_hearings_view_hearing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Planer i høring';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Planer i høring';
  $handler->display->display_options['css_class'] = 'os2web_hearings_view_hearing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'os2web_hearing';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Overskrift: Planer i Høring */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Planer i Høring';
  $handler->display->display_options['header']['area']['label'] = 'Overskrift: Planer i Høring';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h3>Planer i høring</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Sidefod';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<span class="foroffase"><a href="/foroffentlighed">> I foroffentlighedsfase</a></span><span class="vedtagne"><a href="/lokalplaner">> Vedtagne</a></span><span class="alle"><a href="/planforslag">> Se alle</a></span>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Felt: Indhold: Slutdato */
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['id'] = 'field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['table'] = 'field_data_field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['field'] = 'field_os2web_hearings_enddate';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_hearings_enddate']['settings'] = array(
    'format_type' => 'kun_dato',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: URL */
  $handler->display->display_options['fields']['field_os2web_hearings_url']['id'] = 'field_os2web_hearings_url';
  $handler->display->display_options['fields']['field_os2web_hearings_url']['table'] = 'field_data_field_os2web_hearings_url';
  $handler->display->display_options['fields']['field_os2web_hearings_url']['field'] = 'field_os2web_hearings_url';
  $handler->display->display_options['fields']['field_os2web_hearings_url']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_hearings_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_hearings_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_hearings_url']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_os2web_hearings_url]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] - [field_os2web_hearings_enddate]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'kun_dato';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.Y';
  /* Felt: Feeds item: Import date */
  $handler->display->display_options['fields']['imported']['id'] = 'imported';
  $handler->display->display_options['fields']['imported']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['imported']['field'] = 'imported';
  $handler->display->display_options['fields']['imported']['label'] = '';
  $handler->display->display_options['fields']['imported']['exclude'] = TRUE;
  $handler->display->display_options['fields']['imported']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['imported']['empty'] = '[created]';
  $handler->display->display_options['fields']['imported']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['imported']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['imported']['date_format'] = 'kun_dato';
  /* Felt: Indhold: Startdato */
  $handler->display->display_options['fields']['field_os2web_hearings_startdate']['id'] = 'field_os2web_hearings_startdate';
  $handler->display->display_options['fields']['field_os2web_hearings_startdate']['table'] = 'field_data_field_os2web_hearings_startdate';
  $handler->display->display_options['fields']['field_os2web_hearings_startdate']['field'] = 'field_os2web_hearings_startdate';
  $handler->display->display_options['fields']['field_os2web_hearings_startdate']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_hearings_startdate']['settings'] = array(
    'format_type' => 'kun_dato',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Dato fra-til';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_os2web_hearings_startdate] -<br />
[field_os2web_hearings_enddate]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'aktiv-hearing';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'I høring';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'I høring';
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'er-i-hearing';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = FALSE;
  /* Felt: Global: Kontekstuelle links */
  $handler->display->display_options['fields']['contextual_links']['id'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['table'] = 'views';
  $handler->display->display_options['fields']['contextual_links']['field'] = 'contextual_links';
  $handler->display->display_options['fields']['contextual_links']['label'] = '';
  $handler->display->display_options['fields']['contextual_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contextual_links']['fields'] = array(
    'field_os2web_hearings_enddate' => 'field_os2web_hearings_enddate',
    'field_os2web_hearings_url' => 'field_os2web_hearings_url',
    'created' => 'created',
    'imported' => 'imported',
    'title' => 0,
    'nothing' => 0,
    'nothing_1' => 0,
  );
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_hearings_hearing' => 'os2web_hearings_hearing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'planer-i-h-ring';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'planer-i-hearing.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_os2web_hearings_enddate' => 'field_os2web_hearings_enddate',
    'field_os2web_hearings_url' => 'field_os2web_hearings_url',
    'title' => 'title',
    'imported' => 'imported',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'field_os2web_hearings_enddate';
  $handler->display->display_options['style_options']['info'] = array(
    'field_os2web_hearings_enddate' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_hearings_url' => array(
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
    'imported' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['os2web_hearings_view_hearing'] = array(
    t('Master'),
    t('Planer i høring'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Overskrift: Planer i Høring'),
    t('<h3>Planer i høring</h3>'),
    t('Sidefod'),
    t('<span class="foroffase"><a href="/foroffentlighed">> I foroffentlighedsfase</a></span><span class="vedtagne"><a href="/lokalplaner">> Vedtagne</a></span><span class="alle"><a href="/planforslag">> Se alle</a></span>'),
    t('Titel'),
    t('[title] - [field_os2web_hearings_enddate]'),
    t('[created]'),
    t('Startdato'),
    t('Dato fra-til'),
    t('[field_os2web_hearings_startdate] -<br />
[field_os2web_hearings_enddate]'),
    t('I høring'),
    t('Page'),
    t('Feed'),
    t('Block'),
  );
  $export['os2web_hearings_view_hearing'] = $view;

  return $export;
}
