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

  // Exported permission: edit field_background_attachment
  $permissions['edit field_background_attachment'] = array(
    'name' => 'edit field_background_attachment',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_background_color
  $permissions['edit field_background_color'] = array(
    'name' => 'edit field_background_color',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_background_image
  $permissions['edit field_background_image'] = array(
    'name' => 'edit field_background_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_background_position
  $permissions['edit field_background_position'] = array(
    'name' => 'edit field_background_position',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_background_repeat
  $permissions['edit field_background_repeat'] = array(
    'name' => 'edit field_background_repeat',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own background content
  $permissions['edit own background content'] = array(
    'name' => 'edit own background content',
    'roles' => array(),
  );

  // Exported permission: view field_background_attachment
  $permissions['view field_background_attachment'] = array(
    'name' => 'view field_background_attachment',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_background_color
  $permissions['view field_background_color'] = array(
    'name' => 'view field_background_color',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_background_image
  $permissions['view field_background_image'] = array(
    'name' => 'view field_background_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_background_position
  $permissions['view field_background_position'] = array(
    'name' => 'view field_background_position',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_background_repeat
  $permissions['view field_background_repeat'] = array(
    'name' => 'view field_background_repeat',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
