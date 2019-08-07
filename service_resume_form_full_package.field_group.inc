<?php

/**
 * @file
 * service_resume_form_full_package.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function service_resume_form_full_package_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume_expirience|entityform|service_resume|form';
  $field_group->group_name = 'group_resume_expirience';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'service_resume';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resume_group';
  $field_group->data = array(
    'label' => 'Relevant Education, Occupation, and Life Experience',
    'weight' => '4',
    'children' => array(
      0 => 'field_resume_education',
      1 => 'field_resume_occupation',
      2 => 'field_resume_life_experience',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Relevant Education, Occupation, and Life Experience',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-resume-expirience field-group-accordion-item',
        'description' => 'Please provide information regarding any relevant education background, occupational skills or life experiences.
Education',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_resume_expirience|entityform|service_resume|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume_group|entityform|service_resume|form';
  $field_group->group_name = 'group_resume_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'service_resume';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Résumé',
    'weight' => '0',
    'children' => array(
      0 => 'group_resume_personal',
      1 => 'group_resume_expirience',
      2 => 'group_resume_recovery',
      3 => 'group_resume_history',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'effect' => 'none',
        'classes' => 'group-resume-group field-group-accordion',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_resume_group|entityform|service_resume|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume_history|entityform|service_resume|form';
  $field_group->group_name = 'group_resume_history';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'service_resume';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resume_group';
  $field_group->data = array(
    'label' => 'Service History',
    'weight' => '3',
    'children' => array(
      0 => 'field_resume_positions_served',
      1 => 'field__resume_most_fulfilling',
      2 => 'field_common_questions',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resume-history field-group-accordion-item',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resume_history|entityform|service_resume|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume_personal|entityform|service_resume|form';
  $field_group->group_name = 'group_resume_personal';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'service_resume';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resume_group';
  $field_group->data = array(
    'label' => 'Personal Informaton',
    'weight' => '1',
    'children' => array(
      0 => 'field_resume_first_name',
      1 => 'field_resume_last_name',
      2 => 'field_resume_address',
      3 => 'field_resume_email_address',
      4 => 'field_resume_telephone',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resume_personal|entityform|service_resume|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resume_recovery|entityform|service_resume|form';
  $field_group->group_name = 'group_resume_recovery';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'service_resume';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resume_group';
  $field_group->data = array(
    'label' => 'Recovery',
    'weight' => '2',
    'children' => array(
      0 => 'field_resume_clean_date',
      1 => 'field_resume_member_area',
      2 => 'field_resume_attend_na_meetings',
      3 => 'field_resume_sponsor',
      4 => 'field_sponsor_elaborate',
      5 => 'field_resume_steps',
      6 => 'field_steps_elaborate',
      7 => 'field_resume_regular_basis',
      8 => 'field_attend_elaborate',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Recovery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-resume-recovery field-group-accordion-item',
        'description' => 'The Tejas Bluebonnet Region identifies personal recovery as a critical component to being a successful TBR trusted servant. With that in mind, please reply to the following personal recovery-oriented questions:',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_resume_recovery|entityform|service_resume|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Personal Informaton');
  t('Recovery');
  t('Relevant Education, Occupation, and Life Experience');
  t('Résumé');
  t('Service History');

  return $field_groups;
}
