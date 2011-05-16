<?php

/**
 * Implementation of hook_strongarm().
 */
function background_workflow_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_background';
  $strongarm->value = 0;
  $export['comment_anonymous_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_background';
  $strongarm->value = '2';
  $export['comment_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_background';
  $strongarm->value = '3';
  $export['comment_controls_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_background';
  $strongarm->value = '4';
  $export['comment_default_mode_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_background';
  $strongarm->value = '1';
  $export['comment_default_order_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_background';
  $strongarm->value = '50';
  $export['comment_default_per_page_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_background';
  $strongarm->value = '0';
  $export['comment_form_location_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_background';
  $strongarm->value = '1';
  $export['comment_preview_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_background';
  $strongarm->value = '1';
  $export['comment_subject_field_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_background';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '2',
    'revision_information' => '4',
    'author' => '3',
    'options' => '5',
    'comment_settings' => '7',
    'menu' => '1',
    'path' => '8',
    'workflow' => '9',
    'path_redirect' => '6',
  );
  $export['content_extra_weights_background'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_background';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_background'] = $strongarm;

  return $export;
}
