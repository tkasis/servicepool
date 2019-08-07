<?php

/**
 * @file
 * service_resume_form_full_package.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function service_resume_form_full_package_conditional_fields_default_fields() {
  $items = array();

  $items["entityform:service_resume"] = array(
    array(
      'entity' => 'entityform',
      'bundle' => 'service_resume',
      'dependent' => 'field_attend_elaborate',
      'dependee' => 'field_resume_attend_na_meetings',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'no',
        'value' => array(
          0 => array(
            'value' => 'no',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'entityform',
      'bundle' => 'service_resume',
      'dependent' => 'field_resume_regular_basis',
      'dependee' => 'field_resume_attend_na_meetings',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'yes',
        'value' => array(
          0 => array(
            'value' => 'yes',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'entityform',
      'bundle' => 'service_resume',
      'dependent' => 'field_sponsor_elaborate',
      'dependee' => 'field_resume_sponsor',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'no',
        'value' => array(
          0 => array(
            'value' => 'no',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'entityform',
      'bundle' => 'service_resume',
      'dependent' => 'field_steps_elaborate',
      'dependee' => 'field_resume_steps',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'no',
        'value' => array(
          0 => array(
            'value' => 'no',
          ),
        ),
        'values' => array(),
      ),
    ),
  );

  $items["field_collection_item:field__resume_most_fulfilling"] = array(
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_responsibilities',
      'dependee' => 'field_rmf_position',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_responsibilities1',
      'dependee' => 'field_rmf_position1',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_why_fulfilling',
      'dependee' => 'field_rmf_responsibilities',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_why_fulfilling',
      'dependee' => 'field_rmf_position',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_why_fulfilling1',
      'dependee' => 'field_rmf_responsibilities1',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field__resume_most_fulfilling',
      'dependent' => 'field_rmf_why_fulfilling1',
      'dependee' => 'field_rmf_position1',
      'options' => array(
        'state' => 'visible',
        'condition' => '!empty',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => array(),
        'values' => array(),
        'value_form' => array(),
      ),
    ),
  );

  $items["field_collection_item:field_common_questions"] = array(
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field_common_questions',
      'dependent' => 'field_misapp_elaborate',
      'dependee' => 'field_have_you_ever_misappropria',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'yes',
        'value' => array(
          0 => array(
            'value' => 'yes',
          ),
        ),
        'values' => array(),
      ),
    ),
    array(
      'entity' => 'field_collection_item',
      'bundle' => 'field_common_questions',
      'dependent' => 'field_not_comp_elaborate',
      'dependee' => 'field_have_you_ever_not_complete',
      'options' => array(
        'state' => 'visible',
        'condition' => 'value',
        'grouping' => 'AND',
        'effect' => 'show',
        'effect_options' => array(),
        'element_view' => array(
          1 => 1,
          2 => 2,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => array(
          1 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => array(
            1 => 1,
            2 => 2,
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => array(
          1 => 1,
          3 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => array(
          1 => array(
            1 => 1,
            3 => 0,
          ),
          2 => array(
            1 => 1,
            3 => 0,
          ),
          3 => array(
            1 => 1,
            3 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value_form' => 'yes',
        'value' => array(
          0 => array(
            'value' => 'yes',
          ),
        ),
        'values' => array(),
      ),
    ),
  );

  return $items;
}
