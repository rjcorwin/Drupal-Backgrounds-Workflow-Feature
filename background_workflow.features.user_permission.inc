<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function background_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: access workflow summary views
  $permissions['access workflow summary views'] = array(
    'name' => 'access workflow summary views',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: create background content
  $permissions['create background content'] = array(
    'name' => 'create background content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any background content
  $permissions['edit any background content'] = array(
    'name' => 'edit any background content',
    'roles' => array(),
  );

  // Exported permission: edit field_background
  $permissions['edit field_background'] = array(
    'name' => 'edit field_background',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own background content
  $permissions['edit own background content'] = array(
    'name' => 'edit own background content',
    'roles' => array(),
  );

  // Exported permission: view field_background
  $permissions['view field_background'] = array(
    'name' => 'view field_background',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
