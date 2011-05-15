<?php

/**
 * Implementation of hook_default_workflow_type_map().
 */
function background_workflow_default_workflow_type_map() {
  $export = array();

  $workflow_type_map = new stdClass;
  $workflow_type_map->api_version = 1;
  $workflow_type_map->node_type = 'background';
  $workflow_type_map->workflow_name = 'background_approvals';
  $export['background'] = $workflow_type_map;

  return $export;
}

/**
 * Implementation of hook_default_workflows().
 */
function background_workflow_default_workflows() {
  $export = array();

  $workflow = new workflow;
  $workflow->api_version = 1;
  $workflow->name = 'background_approvals';
  $workflow->label = 'Status';
  $workflow->tab_roles = '2,3,0,0,0,0';
  $workflow->options = array(
    'comment_log_node' => 1,
    'comment_log_tab' => 1,
  );
  $workflow->states = array();

  $workflow_state = new workflow_state;
  $workflow_state->api_version = 1;
  $workflow_state->name = 'background_approvals_creation';
  $workflow_state->workflow_name = 'background_approvals';
  $workflow_state->label = '(creation)';
  $workflow_state->weight = -50;
  $workflow_state->sysid = TRUE;
  $workflow_state->status = TRUE;
  $workflow->states['background_approvals_creation'] = $workflow_state;

  $workflow_state = new workflow_state;
  $workflow_state->api_version = 1;
  $workflow_state->name = 'background_approvals_draft';
  $workflow_state->workflow_name = 'background_approvals';
  $workflow_state->label = 'Draft';
  $workflow_state->weight = 0;
  $workflow_state->sysid = FALSE;
  $workflow_state->status = TRUE;
  $workflow->states['background_approvals_draft'] = $workflow_state;

  $workflow_state = new workflow_state;
  $workflow_state->api_version = 1;
  $workflow_state->name = 'background_approvals_review';
  $workflow_state->workflow_name = 'background_approvals';
  $workflow_state->label = 'Review for Approval';
  $workflow_state->weight = 0;
  $workflow_state->sysid = FALSE;
  $workflow_state->status = TRUE;
  $workflow->states['background_approvals_review'] = $workflow_state;

  $workflow_state = new workflow_state;
  $workflow_state->api_version = 1;
  $workflow_state->name = 'background_approvals_approved';
  $workflow_state->workflow_name = 'background_approvals';
  $workflow_state->label = 'Approved';
  $workflow_state->weight = 0;
  $workflow_state->sysid = FALSE;
  $workflow_state->status = TRUE;
  $workflow->states['background_approvals_approved'] = $workflow_state;

  $workflow->transitions = array();

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_creation';
  $workflow_transition->target_state_name = 'background_approvals_draft';
  $workflow_transition->roles = array(
    0 => 'author',
  );
  $workflow->transitions[0] = $workflow_transition;

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_approved';
  $workflow_transition->target_state_name = 'background_approvals_draft';
  $workflow_transition->roles = array(
    0 => '3',
  );
  $workflow->transitions[1] = $workflow_transition;

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_review';
  $workflow_transition->target_state_name = 'background_approvals_approved';
  $workflow_transition->roles = array(
    0 => '3',
  );
  $workflow->transitions[2] = $workflow_transition;

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_review';
  $workflow_transition->target_state_name = 'background_approvals_draft';
  $workflow_transition->roles = array(
    0 => 'author',
    1 => '3',
  );
  $workflow->transitions[3] = $workflow_transition;

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_draft';
  $workflow_transition->target_state_name = 'background_approvals_approved';
  $workflow_transition->roles = array(
    0 => '3',
  );
  $workflow->transitions[4] = $workflow_transition;

  $workflow_transition = new workflow_transition;
  $workflow_transition->api_version = 1;
  $workflow_transition->state_name = 'background_approvals_draft';
  $workflow_transition->target_state_name = 'background_approvals_review';
  $workflow_transition->roles = array(
    0 => 'author',
  );
  $workflow->transitions[5] = $workflow_transition;

  $workflow->roles = array(
    0 => '2',
    1 => '3',
    2 => '0',
    3 => '0',
    4 => '0',
    5 => '0',
  );
  $export['background_approvals'] = $workflow;

  return $export;
}
