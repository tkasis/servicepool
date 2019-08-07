<?php

/**
 * @file
 * service_resume_form_full_package.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_resume_form_full_package_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function service_resume_form_full_package_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function service_resume_form_full_package_default_entityform_type() {
  $items = array();
  $items['service_resume'] = entity_import('entityform_type', '{
    "type" : "service_resume",
    "label" : "Service R\\u00e9sum\\u00e9",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : {
        "value" : "You have saved a draft and can come back to finish your submission.",
        "format" : "filtered_html"
      },
      "submit_button_text" : "Submit R\\u00e9sum\\u00e9",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Thank you for your submission",
      "submission_text" : {
        "value" : "You will receive something. Like an email or login information.",
        "format" : "filtered_html"
      },
      "submission_show_submitted" : 1,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "This is really only yada yada text for now\\r\\nBe sure to click the \\u0022Submit R\\u00e9sum\\u00e9\\u0022 button to submit your form, once it is completed.\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/service-resume",
        "alias" : "resume",
        "language" : "und"
      }
    }
  }');
  return $items;
}
