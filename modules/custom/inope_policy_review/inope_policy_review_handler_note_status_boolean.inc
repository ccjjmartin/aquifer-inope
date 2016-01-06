<?php
/**
 * @file
 * The iNope Policy Review views note status handler.
 */

/**
 * A handler to provide proper displays for the note status boolean.
 *
 * Allows for display of approved / changes requested.
 *
 * Definition terms:
 *   - output formats: An array where the first entry is displayed on boolean
 *      true and the second is displayed on boolean false.
 *
 * @ingroup inope_policy_review
 */
class inope_policy_review_handler_note_status_boolean extends views_handler_field_boolean {
  /**
   * Override the default boolen field handlers default options.
   *
   * We are changing the default option to approved-requested created in init.
   *
   * @return array $options
   *   Sets the default options to be used in the init method.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['type'] = array('default' => 'approved-requested');
    $options['type_custom_true'] = array('default' => 'Approved', 'translatable' => TRUE);
    $options['type_custom_false'] = array('default' => 'Changes Requested', 'translatable' => TRUE);
    $options['not'] = array('definition bool' => 'reverse');

    return $options;
  }

  /**
   * Override the init method (constructor) of the parent class.
   *
   * We are adding the approved-requested option.
   *
   * @param array $view
   *    Todo - passed by reference.
   * @param array $options
   *    Todo - passed by reference.
   *
   * @todo research the parameters passed and update documentation.
   */
  public function init(&$view, &$options) {
    parent::init($view, $options);

    $default_formats = array(
      'approved-requested' => array(t('Changes Requested'), t('Approved')),
      'yes-no' => array(t('Yes'), t('No')),
      'true-false' => array(t('True'), t('False')),
      'on-off' => array(t('On'), t('Off')),
      'enabled-disabled' => array(t('Enabled'), t('Disabled')),
      'boolean' => array(1, 0),
      'unicode-yes-no' => array('✔', '✖'),
    );
    $output_formats = isset($this->definition['output formats']) ? $this->definition['output formats'] : array();
    $custom_format = array('custom' => array(t('Custom')));
    $this->formats = array_merge($default_formats, $output_formats, $custom_format);
  }

}
