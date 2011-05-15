<?php

/**
 * Implementation of hook_views_default_views().
 */
function background_workflow_views_default_views() {
  $views = array();

  // Exported view: backgrounds
  $view = new view;
  $view->name = 'backgrounds';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'background' => 'background',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'state_name' => array(
      'operator' => 'in',
      'value' => array(
        'background_approvals_review' => 'background_approvals_review',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'state_name',
      'table' => 'workflow_node',
      'field' => 'state_name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler = $view->new_display('page', 'Backgrounds For Review', 'page_1');
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '3' => 3,
    ),
  ));
  $handler->override_option('title', 'Backgrounds For Review');
  $handler->override_option('empty', 'All backgrounds marked for Review have been reviewed.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('path', 'backgrounds/review');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Approve Backgrounds for Review',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Backgrounds Approved', 'page_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'background' => 'background',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'state_name' => array(
      'operator' => 'in',
      'value' => array(
        'background_approvals_approved' => 'background_approvals_approved',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'state_name',
      'table' => 'workflow_node',
      'field' => 'state_name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Backgrounds');
  $handler->override_option('path', 'backgrounds');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Backgrounds',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
